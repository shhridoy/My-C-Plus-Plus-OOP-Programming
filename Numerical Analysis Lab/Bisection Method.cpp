#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

double f(double x)
{
    double y=x*x*x-2*x-5;
    return y;
}

int main()
{
    double a, b, x1, y1, y2, x2;
    cout<<"Enter two number: ";
    scanf("%lf %lf", &a, &b);
        for( ; ; ) {
            x2 = x1;
            x1=(a+b)/2;
            printf("a=%10lf\t b=%10lf\t x1=%10lf\t y=%10lf\n", a, b, x1, f(x1));
            if((f(x1)) < 0){
                a = x1;
            }
            else{
                b = x1;
            }
            if (abs (b-a) <= 0.001) { //for bisection method..
              break;
            }
        }

    printf("Final root of the equation is: %lf\n", x1);
}

