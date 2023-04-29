//Write a program to find mean of n numbers using array

#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the capacity of container: ";cin>>n;
int arr[n];
cout<<"Enter the elements: ";
float mean = 0;
for (int i = 0; i < n; i++)
{
    printf("arr[%d] = ",i);cin>>arr[i];
    mean+=arr[i];
}
mean /=n;
cout<<"-------------------------------------------------";
cout<<"\nMean = "<<mean<<endl;

    return 0;
}