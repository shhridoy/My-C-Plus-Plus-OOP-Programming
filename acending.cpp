#include<iostream>
using namespace std;
int main()
{
    int num[10], i, j, k, temp;
    cout<< "Enter five number separated by space: ";
    for(i=0; i<5; i++){
        cin>>num[i];
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(num[i]>num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    cout<< "\nForward: ";
    for(i=0; i<5; i++){
        cout<<num[i]<<" ";
    }

    return 0;
}
