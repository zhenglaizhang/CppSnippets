#include <iostream>
#include <vector>


void f(std::vector<int>& v)
{
	vector<int> indicies(v.size());
	int count = 0;
	generate(indicies.begin(), indicies.end(), [&count](){ return count++; });
	std::sort(indicies.begin(), indicies.end(), [&](int a, int b) { return a > b; })
}

void f(vector<Record>& v)
{
	vector<int> indices(v.size());
	int count = 0;
	generate(indices.begin(),indices.end(),[&](){ return ++count; });

	struct Cmp_names {
		const vector<Record>& vr;
		Cmp_names(const vector<Record>& r) :vr(r) { }
		bool operator()(int a, int b) const { return vr[a].name<vr[b].name; }
	};

	// sort indices in the order determined by the name field of the records:
	std::sort(indices.begin(), indices.end(), Cmp_names(v));
	// ...
}

void f3(std::vector<X> x)
{
	struct Less
	{
		bool operator() (const X& a, const X& b)
		{
			return a.v < b.v;
		};
	};
	sort(v.begin(), v.end(), Less());
}

void f4(std::vector<X> v)
{
	sort(v.begin(), v.end(), [](const X& a, const X&b) { return a.v < b.v; })
}

int main(int argc, char const *argv[])
{
	std::vector<int> v;
	v.push_back(50);
	v.push_back(-10);
	v.push_back(20);
	v.push_back(-30);
	std::sort(v.begin(),v.end());
	std::sort(v.begin(), v.end(), [](int a, int b) { return abs(a) < abs(b);})
	return 0;
}


