#include <iostream>
using namespace std;

class Car{
public:
    Car(){cout<<"Car class"<<endl;}
    void vehicleType(){cout<<"Vehicle type: Car"<<endl;}
};

class Maruti : public Car{
public:
    Maruti(){cout<<"Class Maruti"<<endl;}
    void brand(){cout<<"Brand: Maruti"<<endl;}
    void speed(){cout<<"Max: 50kmph"<<endl;}
};

class Maruti_L16 : public Maruti{
public:
    Maruti_L16(){cout<<"Maruti Model_L16"<<endl;}
    void speed(){cout<<"Max: 100kmph"<<endl;}
};

int main()
{
    Maruti_L16 obj;
    obj.vehicleType();
    obj.brand();
    obj.speed();
    return 0;
}
