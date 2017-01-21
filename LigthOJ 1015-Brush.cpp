#include<iostream>
using namespace std;
int main()
{
    int T, N, student[1000];
    cin >> T;
    cout<<"\n";
    for(int i=0; i<T; i++){
        cin >> N;
        int sum = 0;
        for(int j=0; j<N; j++){
            cin >> student[j];
        }
        for(int k=0; k<N; k++){
            sum += student[k];
        }
        cout<<"Case "<< i+1 << ": " << sum << "\n" <<endl;
    }

    return 0;
}
