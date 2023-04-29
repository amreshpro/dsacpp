//Write a program to print the position of smallest numbers of n numbers using array

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
int smallestIndex  = 0;
for (int i = 1; i < n; i++)
{
    if(arr[smallestIndex]>arr[i]){
        smallestIndex = i;
    }

}
cout<<"Smallest Value At "<<smallestIndex<<" index in array"<<endl;
    return 0;
}