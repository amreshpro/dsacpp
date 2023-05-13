//Write a program  display  n numbers using pointer in array


#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the capacity : ";
cin>>n;
int arr[n];
cout<<"Enter the elements  ";
for (int i = 0; i < n; i++)
{
    printf("arr[%d] = ",i);
    cin>>arr[i];
}
int *ptrStart = arr;
int *ptrLast = &*(arr+n-1);
while (ptrStart<=ptrLast)
{
    cout<<*(ptrStart)<<endl;
    ++ptrStart;
}




    return 0;
}