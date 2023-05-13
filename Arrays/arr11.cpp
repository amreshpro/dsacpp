//Write a program to merge two unsorted array


#include <iostream>
using namespace std;



void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}


void mergeTwoUnSortedArray(int *arr1,int n1,int *arr2,int n2){
int  n = n1+n2;
int arr[n];
int i = 0;
while(i<n){

if(i<n1)
    arr[i] = arr1[i];
if(i<n2)
    arr[n1+i] = arr2[i];

++i;
}

display(arr,n);

}






int main(){
int n1;
cout<<"Enter the capacity 1st Array : ";
cin>>n1;
int arr1[n1];
cout<<"Enter the elements  ";
for (int i = 0; i < n1; i++)
{
    printf("arr1[%d] = ",i);
    cin>>arr1[i];
}
cout<<"-----------------"<<endl;
int n2;
cout<<"Enter the capacity of 2nd Array : ";
cin>>n2;
int arr2[n2];
cout<<"Enter the elements  ";
for (int i = 0; i < n2; i++)
{
    printf("arr2[%d] = ",i);
    cin>>arr2[i];
}


display(arr1,n1);
cout<<"-----------------------"<<endl;
display(arr2,n2);
cout<<"-----------------------"<<endl;
mergeTwoUnSortedArray(arr1,n1,arr2,n2);
    return 0;
}