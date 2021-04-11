#include "string.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    String s1();
    String s2("hello");

    String s3(s1); //拷贝构造函数
    cout << s3 <<endl;
    s3 = s2;
    cout<< s3 << endl;
    return 0;
}