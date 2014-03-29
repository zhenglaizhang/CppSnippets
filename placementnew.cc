#include <iostream>

using namespace std;

int main()
{
    int *n1 = new int(1);
    int *n2 = new int(2);

    cout << n1 << " " << n2 << endl;
    cout << &n1 << " " << &n2 << endl;


    void *p1 = malloc(2 * sizeof(int));
    void *p2 = (int *)p1 + 1;

    int *t1 = new (p1)int(1);
    int *t2 = new (p2)int(2);
    cout << endl << endl;
    cout << t1 << " " << t2 << endl;
    cout << &t1 << " " << &t2 << endl;
}