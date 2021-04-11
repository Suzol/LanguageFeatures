#include "complex.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    complex c1(2,1);
    complex c2(5);
    complex c3(0,1);
    c3 += c2 += c1;
    cout << c3.real() <<endl;
    cout << c3.imag() <<endl;

    cout << real(c2) <<endl;
    cout << imag(c2) <<endl;
    
    complex c4(2,1);
    complex c5;

    c5 = c4 + c5;
    c5 = c4 + 6;
    c5 = 5  + c4;

    int a =int(13);
    cout << a << endl;

    cout << (-c5).real() <<endl;

}

