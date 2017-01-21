#include<iostream>
#include<string.h>
using namespace std;

void GetSortedArray(int a[])
{
    int i, j, temp;
    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    //Print the sorted array.
    for(i=0; i<5; i++){
        cout<< a[i] <<" ";
    }
}

int GetLargestValue(int a[])
{
    int getLarge, i;
    getLarge = a[0];
    for(i=0; i<5; i++){
        if(a[i]>getLarge){
            getLarge = a[i];
        }
    }
    return (getLarge);
}

int main(void)
{
    int i, a[5];
    cout<<"Enter five integer separated by space: ";
    for(i=0; i<5; i++){
        cin>> a[i];
    }
    cout<<"\nYour Entered integer's are: ";
    for(i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n\nAfter sorting: ";
    GetSortedArray(a);
    cout<<"\n\nThe Largest value is: "<<GetLargestValue(a)<<endl;
}

