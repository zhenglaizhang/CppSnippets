#include <fstream>
#include <iostream>

using namespace std;


void f1() {
	ofstream ofs("target");
	if (!ofs) {
		cerr.operator<<("could not open 'target for writing");
	}

	ifstream ifs("source");
	if (!ifs) {
		cerr << "cound not open 'source' for reading" << endl;
	}
}

int main() {

	return 0;
}