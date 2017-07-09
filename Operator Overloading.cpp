#include <iostream>
using namespace std;

class Box
{
private:
    double height;
    double width;
    double length;
public:
    void setHeight(double h){height = h;}
    void setWidth(double w){width = w;}
    void setLength(double l){length = l;}
    double getVolume(){return (height*width*length);}
    
    Box operator+ (const Box &ob)
    {
        Box box;
        box.height = this->height + ob.height;
        box.width = this->width + ob.width;
        box.length = this->length + ob.length;
        return box;
    }
};

int main()
{
    Box box1, box2, box3;
    double volume;

    box1.setHeight(5.5);
    box1.setWidth(2.1);
    box1.setLength(4.5);
    cout<<"Box1 volume = "<<box1.getVolume()<<endl;

    box2.setHeight(3.5);
    box2.setWidth(2.6);
    box2.setLength(5.0);
    cout<<"Box2 volume = "<<box2.getVolume()<<endl;

    box3 = box1 + box2;
    cout<<"Box3 volume = "<<box3.getVolume()<<endl;

    return 0;
}

/* OUTPUT:
Box1 volume = 51.975
Box2 volume = 45.5
Box3 volume = 401.85
*/
