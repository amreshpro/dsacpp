//Write a program to read and display  n numbers using array


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

    return 0;
}