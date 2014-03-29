#include <vector>
#include <iostream>
#include <string>

using namespace std;

void print_book(const vector<string>& books) {
	for (int i = 0; i < books.size(); ++i)
	{
		cout << books[i] << endl;
	}

	for (const auto& x : books) {
		cout << x << endl;
	}
}


// vector DOESNOT do range check!!
void no_range_check(const vector<string>& v) {
	cout << v[v.size()] << endl;
}

template <typename T>
class Vec : public std::vector<T> {
public:
	using vector<T>::vector;

	T& operator[](int i) {
		return vector<T>::at(i);
	}

	const T& operator[](int i) const {
		return vector<T>::at(i);
	}
};

int main(int argc, char const *argv[])
{
	std::vector<string> v;
	v.push_back("book1");
	v.push_back("book2");
	print_book(v);
	no_range_check(v);
	return 0;
}