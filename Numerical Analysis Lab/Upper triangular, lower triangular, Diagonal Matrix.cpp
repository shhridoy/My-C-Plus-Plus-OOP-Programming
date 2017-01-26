/*** Coded by Md. Saiful Haque Hridoy ***/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int arr1[100][100], row, col;
    int n[100][100], p[100][100];

    cout<<"Enter the number of row: ";
    cin>>row;
    cout<<"Enter the number of column: ";
    cin>>col;
    cout<<"Enter the values: "<<endl;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr1[i][j];
            n[i][j]=arr1[i][j];
            p[i][j]=n[i][j];
        }
    }

    cout<<"Matrix is: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }



    cout<<endl;

    cout<<"Upper-triangular matrix: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i>j){
                arr1[i][j] = 0;
            }
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Lower-triangular matrix: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i<j){
                n[i][j] = 0;
            }
            cout<<n[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Diagonal matrix.: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i!=j){
                n[i][j] = 0;
            }
            cout<<n[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
