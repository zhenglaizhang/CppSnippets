#include <map>
#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;


struct Record
{
	string name;
	int product_code;
};

struct Rhash
{
	size_t operator()(const Record& r) const {
		return hash<string>()(r.name)^hash<int>()(r.product_code);
	}
};


map<string, int> phone_book {
	{"David Hume", 12345 },
	{"Zhenglai Zhang", 2345 }
};

unordered_map<string,int> phone_book2 {
	{"David Hume", 12345 },
	{"Zhenglai Zhang", 234555 }
};

int get_number(const string& s) {
	return phone_book2[s];
}

int main(int argc, char const *argv[])
{
	cout << get_number("Zhenglai Zhang");
	cout << get_number("none");
	cout << phone_book.size() << endl;
	return 0;
}
