#include<iostream>
using namespace std;
int Add(int a, int b);
double Add(double a, double b);

int main()
{
    int ix = Add(20, 30);
    double fx = Add(22.7, 23.5);
    cout<< "\n " << ix << "\t" << fx <<endl;
}

int Add(int a, int b)
{
    return (a+b);
}

double Add(double a, double b)
{
    return (a+b);
}
