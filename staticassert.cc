#include <iostream>

constexpr double C = 232324.232;

int main(int argc, char const *argv[])
{
    static_assert(4<=sizeof(int), "integers are too small");
    static_assert(0, "this should trigger compile error");

    const double local_max = 160.0/(60*60);
    int speed = 1;
    static_assert(speed<C, "cannot go that fast");
    static_assert(local_max<C, "cannot go that fast");
    return 0;
}