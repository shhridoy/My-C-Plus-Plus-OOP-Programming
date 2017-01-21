#include<iostream>
#include<stdio.h>
using namespace std;

float exponential(int n, float x)
{
    float sum = 1.0f;
    for(int i=n-1; i>0; i--){
        sum = 1 + x * sum / i;
    }
    return sum;
}

int main()
{
    float x;
    int n;
    cout<<"Enter the value of x: "<<x;
    cout<<"\nEnter the term :"<<n;
    cout<<"\n\ne^"<<x<<" = "<<exponential(n, x)<<endl;
    return 0;
}
