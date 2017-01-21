#include<iostream>
using namespace std;

class classA{
    int a, b;
public:
    classA(int x, int y){a = x; b = y;}
    int addAB(void){return (a+b);}
};
void funcA(classA obj);

int main(void)
{
    classA ob1(5, 15);
    funcA(ob1);
}

void funcA(classA obj)
{
    int getobjValue;
    getobjValue = obj.addAB();
    cout<< "\nMultiply returned value with 5 gives: " <<getobjValue*5 <<endl;
}
