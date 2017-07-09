#include <iostream>
using namespace std;

int main()
{
    double* p = NULL;

    p = new double;

    *p = 343535.34;

    cout<<"Value of p "<<*p<<endl;

    delete p;

    return 0;
}

/* OUTPUT:
Value of p 343535
*/
