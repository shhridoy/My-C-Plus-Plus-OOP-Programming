#include<iostream>
#include<stdio.h>
using namespace std;

class SortedLargest{
private:
    int i, j, temp, getLarge, a[5];
public:
    SortedLargest(void){
        cout<<"Enter five integers separated by space: ";
        for(i=0; i<5; i++){
            cin>>a[i];
        }
        GetSortedArray();
        GetLargestValue();
    }
private:
    void GetSortedArray(){
        for(i=0; i<5; i++){
            for(j=i+1; j<5; j++){
                if(a[i] > a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        cout<< "\n\nAfter sorting : ";
        for(i=0; i<5; i++){
            cout<< a[i] << " ";
        }
    }
    void GetLargestValue(){
        getLarge = a[0];
        for(i=0; i<5; i++){
            if(a[i] > getLarge)
                getLarge = a[i];
        }
        cout<< "\n\nThe largest value is: " << getLarge << endl;
    }
};

int main(void)
{
    SortedLargest SL;
}
