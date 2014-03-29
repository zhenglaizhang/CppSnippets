#include <iostream>

void implicit_conv()
{
    double d = 12;
    int i = 12.1;
}


void explicit_conv()
{
    double d = (double)12;
    int i = (int)12.1;  // c style

    int a = int(12.1); // c++ style
}

void static_cas()
{
    /*
    Automatic conversions are common in every C++ program. You have:

    Standard conversion. For instance: from short to int or from int to float.
    User defined conversions (Class conversions.)
    Conversion from derived class to base class.
    (Take a look at the inheritance tutorial)
    The static_cast can be used for all these types of conversion.

    If an automatic conversion is valid (from enum to int for instance) then you can use static_cast to do the opposite (from int to enum.)
    */
    int a = 5;
    int b = 2;
    double out = static_cast<double>(a) / b;

    // It is not possible to use static_cast on const objects to non-const objects. For this you have to use const_cast.
}


void reinterpret_cas()
{
    /*
    The reinterpret_cast is used for casts that are not safe:

    Between integers and pointers
    Between pointers and pointers
    Between function-pointers and function-pointers
    The only difference with an old fashion cast is that const is respected. This means that a reinterpret_cast can not be used to cast a const object to non-const object.

    If we use the reinterpret_cast on a null-pointer then we get a null-pointer of the asked type
    */
    char *cptr = reinterpret_cast<char *>(0xb00);
}


void const_cas()
{
    /*
    The use of const_cast on an object doesn’t guarantee that the object can be used (after the const is cast away.) Because it is possible that the const-objects are put in read-only memory by the program.
    */
    const int *ciptr = new int(12);
    int *iptr = const_cast<int *>(ciptr);
}



/*
Runtime Type Information (RTTI) is the concept of determining the type of any variable during execution (runtime.) The RTTI mechanism contains:

The operator dynamic_cast
The operator typeid
The struct type_info
*/

class Base
{
public:
    virtual void foo() {};
};

class Derived : public Base
{
};

void dynamic_cas()
{
    Base *p = new Derived;
    Derived *pd = dynamic_cast<Derived *>(p);
    // check pd against nullptr then use it!!

    // Dynamic_cast can cast pointers of any type to void pointer(void*).
}

int main(int argc, char const *argv[])
{
    implicit_conv();
    explicit_conv();
    static_cas();
    return 0;
}