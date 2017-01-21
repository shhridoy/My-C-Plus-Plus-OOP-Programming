#include<iostream>
using namespace std;
int main()
{
    int i, j, k, num[5];
    cout<< "Enter five numbers(separated by space): ";
    for(i=0; i<5; i++){
        cin>> num[i];
    }

    for(i=0; i<5; i++){
        for(j=1; j<5; j++){
            if(num[i] < num[j])
                num[j] = k;
                k = num[i];
                num[i] = num[j];
        }
    }
    for(i=0; i<5; i++){
        cout<< num[i] << " ";
    }


    return 0;
}
