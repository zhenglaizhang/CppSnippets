#include <thread>
#include <iostream>
#include <vector>

using namespace std;

void f() {
	std::cout << "f()" << std::endl;
}

struct F
{
	void operator()() {
		std::cout << "F::operator()" << std::endl;
	}
};





void f(vector<double>& v) {

}

struct G
{
	vector<double>& v;
	G(vector<double>& vv) : v{vv} {}
	void operator()() {

	}
};

int main(int argc, char const *argv[])
{
	using namespace std;
	thread t1 {f};
	thread t2 {F()};

	// the output is strange, cout is not thread safe.
	t1.join();
	t2.join();

	vector<double> some_vec {1,2,3,4,5,6,7,8,9}; 
	vector<double> vec2 {10,11,12,13,14};
	thread t3 {f, ref(some_vec)};
	thread t4 {F{vec2}};
	return 0;
}