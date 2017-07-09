#include <iostream>
using namespace std;

class Exception{
    int id;
    string name;
public:
    Exception(int i, string n){
        id = i; 
        name = n;
    }
    void Print(void){
        cout << "Error Id: " << id << " - " << name << endl;
    }
};

void Positive(int a)
{
    cout<<a<<endl;
    try
    {
        if(a < 1)
            throw Exception(a, "Not a positive number");
    }
    catch(Exception ob){
        ob.Print();
    }
}

int main()
{
    Positive(5);
    Positive(-5);
    Positive(15);

    return 0;
}

/* OUTPUT:
5
-5
Error Id: -5 - Not a positive number
15
*/
