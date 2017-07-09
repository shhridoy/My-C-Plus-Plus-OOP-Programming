#include <iostream>
using namespace std;

// abstract class 
class Shape
{
protected:
    double width, height;
public:
    Shape(double w, double h){
        width = w;
        height = h;
    }
    virtual void Area() = 0; // pure virtual function
};

class Circle : public Shape
{
public:
    Circle(double w, double h) : Shape(w, h){}
    void Area(){
        cout<<"Area is "<<width*height<<endl;
    }
};

int main()
{
    Circle c(1, 3);
    c.Area();

    return 0;
}

/* OUTPUT:
Area is 3
*/
