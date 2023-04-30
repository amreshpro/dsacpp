//Write a program to find whether the array of integer contains a duplicate number.

#include <iostream>
using namespace std;





void checkDuplicate(int *arr, int n){
    int flag = 0;
for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if(arr[i]==arr[j] && i!=j){
            flag = 1;
            printf("Duplicate Number found at location %d and %d ",i+1 ,j+1);

            break;
        }
    }
    
    
    }
if (flag==0)
{
  cout<<"No Duplicate Found! "<<endl;
}

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
checkDuplicate(arr,n);
    return 0;
}