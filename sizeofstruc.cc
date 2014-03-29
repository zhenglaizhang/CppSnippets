#include <iostream>


int main(int argc, char const *argv[])
{
    using namespace std;

    struct A
    {
        char* d;
        short int e;
        long long f;
        char c[1];
    };
    cout << sizeof(char*) << endl;
    cout << sizeof(A) << endl;

    struct B
    {
        char a[5];
        int b;
        short int c;
    };
    cout << sizeof(char) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(B) << endl;
    return 0;
}