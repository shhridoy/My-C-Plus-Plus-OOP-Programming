#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (x*x*x-2*x-5);
}
int main()
{
    float x1,x2,x3,x4,aerr;
    int itr = 0;
    scanf(" %f %f %f", &x1, &x2, &aerr);
    x3 = ((x1*f(x2)) - (x2*f(x1))) / (f(x2)-f(x1));
    printf("\n\nAfter iteration %d, value is: %f", itr+1, x3);
    while (1) {
        if(f(x1)*f(x3)<0) x2=x3;
        else
            x1=x3;
            x4=x3;
            x3=((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1));
            itr++;
            printf("\nAfter iteration %d, value is: %f", itr+1, x3);
            if(fabs(x4-x3)<aerr) {
                printf("\n\nAfter %d iteration, root is: %f", itr, x4);
                break;
            }
    }
    return 0;
}
