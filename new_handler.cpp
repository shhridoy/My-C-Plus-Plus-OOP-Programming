#include<iostream>
#include<new>
#include<stdlib.h>
using namespace std;
void MemError(void)
{
    cout<< "Error: Memory Allocation Failed!" <<endl;
    exit(1);
}

int main(void)
{
    set_new_handler(MemError);
    int *ptr;
    ptr = new int[5000000];
    *ptr = 50;
    cout<< "First Element is : " << *ptr <<endl;
    set_new_handler(0);
}
