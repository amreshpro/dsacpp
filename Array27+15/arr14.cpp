//Write a program to interchange the largest and smallest number in array


#include <iostream>
using namespace std;



void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}


void interchangeSmallestAndLargestNumber(int *arr,int n){
    int smallest = *arr;
    int smallIndex = 0;
    int largestIndex = 0;
    int largest = *arr;
for (int i = 0; i < n; i++)
{
    if(*(arr+i)<smallest) {

      smallest = *(arr+i);
      smallIndex = i;
    }
      if(*(arr+i)>largest){
        
        largest = *(arr+i);
        largestIndex = i;

      }
}

    
int temp = arr[smallIndex];
arr[smallIndex] = arr[largestIndex];
arr[largestIndex] = temp;

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

display(arr,n);
cout<<"------------------------------------"<<endl;;
 interchangeSmallestAndLargestNumber(arr,n);
  
display(arr,n);
  
    return 0;
}