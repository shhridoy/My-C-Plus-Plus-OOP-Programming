#include<iostream>
using namespace std;
class X{
    int Height, Width;
public:
    X(){Height = Width = 0;}
    X(int H, int W){Height = H; Width = W;}
    X operator+(int x);
    void Show(){
        cout<< "Height: " << Height << " Width: " << Width <<endl;
    }
};

X X::operator+(int x)
{
    X temp;
    temp.Height = Height + x;
    temp.Width = Width + x;
    return temp;
}

int main(void)
{
    X x1(50, 75), x2;
    x2 = x1 + 25;
    x1.Show();
    x2.Show();
}
