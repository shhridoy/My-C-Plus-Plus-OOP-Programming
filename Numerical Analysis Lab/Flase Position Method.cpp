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
            x1 = (a*f(b)-b*f(a)) / (f(b)-f(a)); //false position method
          
            printf("a=%10lf\t b=%10lf\t x1=%10lf\t y=%10lf\n", a, b, x1, f(x1));
            if((f(x1)) < 0){
                a = x1;
            }
            else{
                b = x1;
            }
            
            if(fabs(x1-x2) <= 0.0001)
                break;
        }

    printf("Final root of the equation is: %lf\n", x1);
}

