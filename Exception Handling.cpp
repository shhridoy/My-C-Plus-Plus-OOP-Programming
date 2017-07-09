#include <iostream>
using namespace std;

double division(int x, int y){

    if(y == 0){
        throw "Division by zero condition!";
    }

    return x/y;
}


int main()
{
    int a = 50, b = 0;
    double z;

    try{
        z = division(a, b);
        cout<<z<<endl;
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }

    return 0;
}

/* OUTPUT:
Division by zero condition!
*/
