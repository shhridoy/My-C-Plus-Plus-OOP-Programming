/*** Coded by Md. Saiful Haque Hridoy ***/

#include <iostream>
#include <stdio.h>
using namespace std;

void matrix(int arr[10][10], int order){
    cout<< "Given Matrix is \n";
    for(int i=0; i<order; i++){
        for(int j=0; j<order; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void transpose(int arr1[10][10], int ordr){
    for(int i=0; i<ordr; i++){
        for(int j=0; j<ordr; j++){
            cout<<arr1[j][i]<<"\t";
        }
        cout<<endl;
    }
}

int adjoint(int data[10][10], int y){
    int cofactor_v[10][10];

    for(int i=0; i<y; i++){
        for(int j=0; j<y; j++){
            cofactor_v[i][j] = data[(i + 1) % y][(j + 1) % y] * data[(i + 2) % y][(j + 2) % y]
                             - data[(i + 1) % y][(j + 2) % y] * data[(i + 2) % y][(j + 1) % y];
        }
    }

    transpose(cofactor_v, y);
}

int main()
{
    int mat[10][10], m;
    int determinant=0;
    cout<< "Enter the order of Matrix A: ";
    cin>>m;
    cout<< "Enter the values of A: " <<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    matrix(mat, m);

    for(int i=0; i<m; i++){
        determinant = determinant + (mat[0][i]*(mat[1][(i+1)%3]*mat[2][(i+2)%3] - mat[1][(i+2)%3]*mat[2][(i+1)%3]));
    }
    printf("\nDeterminant of matrix is: %d\n\n",determinant);

    cout<<"Transpose of A is:"<<endl;
    transpose(mat, m);
    cout<<"Adjoint of A is: "<<endl;
    adjoint(mat, m);

    return 0;
}
