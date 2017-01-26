/**** Trapezoidal Rule: ||ydx = h/2[y0 + 2(y1+y2+....+y(n-1) + yn] ****/

#include <bits//stdc++.h>
using namespace std;
int main()
{
    int n;
    float h, ans = 0.0, sans = 0.0;
    float a[10], b[10];
    cout <<"Enter total number: ";
    cin>>n;
    cout<< "Input table values, set by set:\nx   f(x)" <<endl;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    h = 0.01;
    cout << "Initial value of x\n" << a[0] <<endl;
    cout << "Final value of x\n" << a[n-1] <<endl;
    cout << "Segment width\n" << h <<endl;

    for(int i=1; i<n-1; i++){
        sans+=b[i];
    }
    ans = (h/2)*(b[0] +2*sans + b[n-1]);
    cout << "Integral from "<< a[0] << " to " << a[n-1] << " is " << ans <<endl;

}

/*
6
7.47 1.93
7.48 1.95
7.49 1.98
7.50 2.01
7.51 2.03
7.52 2.06
*/
