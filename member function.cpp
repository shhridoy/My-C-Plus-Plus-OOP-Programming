#include<iostream>
using namespace std;

class Add{
private:
    int a;
    int b;
public:
    Add(int x, int y)
    {
        a = x;
        b = y;
    }
    void add()
    {
        cout<< "\nA + B = "<<a+b<<endl;
    }
};
int main(void)
{
    Add object(6, 7);
    object.add();
}
