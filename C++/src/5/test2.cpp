#include "complex.h"
//#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    complex c1(2,1);
    complex c2(2,1);
    complex c3(4,0);

    cout<< (c1==c2) << endl;
    cout<< (c1==c3) << endl;
    cout<< (c3==4) << endl;

    cout << conj(c1) <<endl;

}

