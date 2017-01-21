#include<iostream>
#include<stdio.h>
using namespace std;
class Sample{
    static int x, y;
public:
    void SetXY(int a, int b){x=a; y=b;}
    void PrintXY(){cout<<"\nX = "<<x<<" Y = "<<y<<endl;}
};
int Sample::x;
int Sample::y;

int main(void)
{
    Sample smp1, smp2;
    smp1.SetXY(100, 200);
    smp1.PrintXY();
    smp2.PrintXY();
}
