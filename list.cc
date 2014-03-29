#include <list>
#include <iostream>

using namespace std;


struct Entry
{
	string name;
	int number;
};



int get_number(const string& s) {
	list<Entry> phone_books {
		{"name1", 12},
		{"name2", 13}
	};
	for(const auto& x : phone_books) {
		if (x.name == s) {
			return x.number;
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}