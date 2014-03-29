

typedef char C;
typedef unsigned int WORD;
typedef char* pChar;
typedef char field[50];

// alias pChar == char*
// alias field == char[50]

using C1 = char;
using field = char[50];
using pChar = char*;

int main(int argc, char const *argv[])
{
    /*
用 typedef 和 using 定义类型别名在语义上是等价的。唯一的区别是，typedef 在模板(templates) 域中有一定的限制，而 using 确没有这种限

制。因此，即使 typedef 有很长的使用历史，在代码中也更加常见，但 using 更加通用。
    */
    return 0;
}