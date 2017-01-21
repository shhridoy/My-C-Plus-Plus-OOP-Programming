#include<iostream>
#include<stdio.h>
using namespace std;
class GetAvg{
public:
    char *id;
    float course[5];
    float CalcAvg(){
        float avg = 0.00;
        for(int i=0; i<5; i++){
            avg += course[i];
        }
        return (avg/5);
    }
};

int main(void)
{
    GetAvg hridoy;
    cout<< "Enter ID: ";
    cin>> hridoy.id;
    cout<< "\nEnter 5 score: ";
    for(int i=0; i<5; i++){
        cin>> hridoy.course[i];
    }
    cout<< "\nAverage for " << hridoy.id << " is " << hridoy.CalcAvg() <<endl;
}
