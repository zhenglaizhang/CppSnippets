#include <iostream>
#include <vector>

using namespace std;

void f()
{
	cout << 10 << endl;
	cerr << 11 << endl;
	int a = 'a';
	cout << a << endl;
}

void b()
{
	int i;
	cin >> i;
	double d;
	cin >> d;
	cout << i << " " << d << endl;
	cin >> i >> d;
}

void hello()
{
	cout << "Please enter your name" << endl;
	string str;
	cin >> str;
	cout << "hello " << str << endl;
}

void hello_line()
{
	cout << "Please enter your name" << endl;
	string str;
	getline(cin, str);
	cout << "hello " << str << endl;
}


vector<int> read_ints(iostream& is)
{
	vector<int> res;
	int i;
	while (is >> i)
		res.push_back(i);
	return res;
}

void test_io_status()
{
	while(cin)
	{
		for (int i = 0; cin>>i;)
		{
			// use the integer
		}
		if (cin.eof())
		{
			// .. all is well we reached the end-of-file ...
		}
		else if(cin.fail()) // a potential recoverable error
		{
			cin.clear();  // reset state to good()
			char ch;
			if (cin >> ch) {
				switch (ch) {
					case '{':
						// start nested structure...
						break;
					case '}':
						// end nested structure
						break;
					default:
						cin.setstate(ios_base::failbit); // add fail() to cin's state
				}
			}
		}
	}
}



struct Entry {
	string name;
	int number;

	friend ostream& operator<< (ostream& os, const Entry& entry) {
		return os << "{\"" << entry.name << "\"," << entry.number << "}";
	}

	friend iostream& operator>> (iostream& is, Entry& entry) {
		char c, c2;
		if (is>>c && c=='{' && is>>c2 && c2=='"') {
			string name;
			while(is.get(c) && c!='"') {
				name += c;
			}
			if (is>>c && c==',') {
				int number = 0;
				if (is>>number>>c && c=='}') {
					Entry entry;
					entry.name = name;
					entry.number = number;
					return is;
				}
			}
		}
		is.setstate(ios_base::failbit); // add fail() to cin's state
		return is;
	}
};



void iof()
{
	cout << 1234 << ',' << hex << 1234 << ',' << oct << 1234 << endl;
	cout << endl;

	double d = 123.456;
	cout << d << ";"
		<< scientific << d << ";"
		<< hexfloat << d << ";"
		<< fixed << d << ";"
		<< defaultfloat << d << endl;
	cout.precision(8);
	cout << 123.55465462525 << endl;
}

int main()
{
	//f();
	//b();
	//int c;
	// cin >> c;
	
	//hello();
	// hello_line();

	iof();
	return 0;
}