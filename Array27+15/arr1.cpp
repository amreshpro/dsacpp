//Write a program to read and display  n numbers using array

#include <iostream>
using namespace std;

int main(){
int n ;
printf("Enter the capacity of container: ");
cin>> n;
int arr[n];
printf("Enter the number: ");
for (int i = 0; i < n; i++)
{
     printf("arr[%d] = ",i);
     cin>>arr[i];
}
cout<<endl;
printf("Your entered number: \n");
for (int i = 0; i < n; i++)
{
   printf("arr[%d] = %d \n",i,arr[i]);
}



    return 0;
}