#include <iostream>
using namespace std;
int main()
{
    char line[80];
    cout<< "Enter a line: ";
    cin.getline(line, 10);
    cout<<endl<< "You entered: " << line <<endl;
    cout<< "No. of characters: " << cin.gcount();
}
