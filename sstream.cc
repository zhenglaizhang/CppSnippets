#include <sstream>
#include <iostream>

using namespace std;

void test() {
	ostringstream oss;
	oss << "{temperature" << scientific << 123.4567890 << "}";
	cout << oss.str() << endl;
}


template <typename Target=string, typename Source=string>
Target to(Source arg) {
	stringstream intepreter;
	Target result;
	if (!(intepreter << arg)
		|| !(intepreter >> result)
		|| !(intepreter >> std::ws).eof()) {
		throw runtime_error("to<>() failed");
	}
	return result;
}


 int main(int argc, char const *argv[])
{
	test();
	auto x1 = to<string,double>(1.2);
	auto x2 = to<string>(1.2); 	// Source is double
	auto x3 = to<>(1.2);		// Source is double
	auto x4 = to(1.2);			// Source is double
	cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
	return 0;
}