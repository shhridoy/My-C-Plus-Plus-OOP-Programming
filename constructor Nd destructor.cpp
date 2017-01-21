#include<iostream>
using namespace std;

class Sample{
public:
    Sample() {cout<< "\nMessage from Constructor";}
    ~Sample() {cout<<"\nMessage from Destructor";}
};

void FuncA(void){
    cout<< "\nCreating Sample object in FuncA()";
    Sample smp;
}

int main(void)
{
    cout<< "\nCreating Sample object in main()";
    Sample smp;
    cout<< "\n\nCalling FuncA()";
    FuncA();
    cout<< "\n\nFuncA() Called";
}
