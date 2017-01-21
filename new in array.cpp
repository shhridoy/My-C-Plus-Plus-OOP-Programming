#include<iostream>
#include<string.h>
using namespace std;
class ListElement{
private:
    int i;
public:
    void SetValue(int x){i = x;}
    int GetValue(){return i;}
    ListElement *NextElement;
};
int main(void)
{
    ListElement le1, le2;
    le1.SetValue(50);
    cout<< "Value in le1: " <<le1.GetValue()<<endl;
    le2.SetValue(100);
    cout<< "Value in le2: " <<le2.GetValue()<<endl;
    le1.NextElement = &le2;
    cout<< "Value in le2: " <<(le1.NextElement)->GetValue()<<endl;
}
