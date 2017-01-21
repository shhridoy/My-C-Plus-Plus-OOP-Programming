#include<iostream>
using namespace std;

/*template <class DataType> DataType Add(DataType a, DataType b)
{
    return (a+b);
}

int main(void)
{
    int iResult;
    double dResult;

    iResult = Add(3, 5);
    dResult = Add(3.3, 5.5);

    cout<< "iResult: " << iResult <<endl;
    cout<< "dResult: " << dResult <<endl;
*/

template <class DataType> DataType Sum(DataType elements[], int size)
{
    DataType sum=0;
    for(int i=0; i<size; i++){
        sum += elements[i];
    }
    return sum;
}

int main(void)
{
    int Scores[] = {70, 80, 90, 50};
    int Unit[] = {15, 45, 35, 25};
    double UnitPrice[] = {50.50, 70.70, 80.80, 90.90};

    cout<< "Sum of Scores = " << Sum(Scores, 4) <<endl;
    cout<< "Sum of UnitPrice = " << Sum(UnitPrice, 4) <<endl;
    cout<< "Sum of Units = " << Sum(Unit, 4) <<endl;
}
