#include "complex.h"
#include <iostream>
using namespace std;

int main(int argc, char ** argv)
{
    complex c1(2,1);
    complex c2;
    cout << c2.func(c1) << endl;
    return 0;
}

