#include <vector>
#include <iostream>
#include <stdexcept>

using namespace std;

void f() {
    // vector failed to check the length argument ...
    vector<int> v(-27);

    // std::length_error
    v.push_back(12);
}


void f2() {
    try {
        vector<int> v(-27);
        v.push_back(12);
    } catch (length_error) {
        // handle negative size
        cerr << "length_error" << endl;
        throw; // rethrow
    } catch (bad_alloc) {
        // handle memory exhaustion
        std::terminate();
    }
}


int main(int argc, char const *argv[])
{
    f2();
    return 0;
}