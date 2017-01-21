#include<iostream>
using namespace std;

class A{
private:
    int PrvA1;
public:
    A(){PrvA1 = 0;}
    void GetPrvA1(int x){PrvA1 = x;}
    friend class B;
};

class B{
private:
    int PrvB1;
public:
    B(){PrvB1 = 0;}
    void GetPrvB1(A &a){
        PrvB1 = a.PrvA1+25;
        a.PrvA1 = 50;
    }
    void ShowPrvB1(A a){
        cout<< "\nValue of PrvA1 = " << a.PrvA1 <<endl;
        cout<< "\nValue of PrvB1 = " << PrvB1 <<endl;
    }
};

int main(void)
{
    A a1;
    B b1;
    a1.GetPrvA1(30);
    b1.GetPrvB1(a1);
    b1.ShowPrvB1(a1);
}

