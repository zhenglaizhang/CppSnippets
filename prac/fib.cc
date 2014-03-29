#include <iostream>

int fib(int n) {
    if ((1 == n) || (2 == n)) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}


// 1 + 1 + 2
// 1   2    3
int fib2(int n) {
    if ((1 == n) || (2 == n)) {
        return 1;
    } else {
        int sum = 0;
        // TODO: 
        return sum;
    }
}

// or with vector impl....

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << fib2(1) << endl;
    cout << fib2(2) << endl;
    cout << fib2(3) << endl;
    cout << fib2(4) << endl;
    cout << fib2(5) << endl;

    return 0;
}