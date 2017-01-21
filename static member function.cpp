#include<iostream>
using namespace std;

class Sample{
public:
    static int TotObj;
    static void PrintInfo()
    {
        cout<< "\nTotal Object: " << TotObj <<endl;
    }
};

int Sample :: TotObj = 0;
int main(void)
{
    Sample :: TotObj = 10;
    Sample :: PrintInfo();
}
