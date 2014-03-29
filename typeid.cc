#include <iostream>
#include <typeinfo>

using namespace std;

int main(int argc, char const *argv[])
{
    int *a = 0;
    int b = 0;

    // typeid() returns const type_info&
    if (typeid(a) != typeid(b))     
    {
        cout << "a: " << typeid(a).name() << endl;
        cout << "b: " << typeid(b).name() << endl;
    }
    cout << typeid(ostream).name() << endl;
    cout << typeid(long long*).name() << endl;
    return 0;
}