//Write a program to find smallest numbner in array


#include <iostream>
using namespace std;


int findSmallest(int *arr,int n){
    int smallest = *arr;
for (int i = 0; i < n; i++)
{
    if(*(arr+i)<smallest) 
      smallest = *(arr+i);
}
return smallest;
    
}

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

int res = findSmallest(arr,n);
  
  cout<<"Smallest Number in Array : "<<res<<endl;
  
    return 0;
}