#include <iostream>
#include <cstdlib>

using namespace std;

struct A
{
	char a;
	int b;
	short c;
};

struct B
{
	char a;
	short b;
	int c;
};

int main(int argc, char const *argv[])
{
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << strlen("test") << endl;
	return 0;
}