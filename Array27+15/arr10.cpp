//Write a program to delete a number from an array that is already sorted.


#include <iostream>
using namespace std;

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}


void deleteLocation(int *arr,int* n,int number)
{ int i = 0,flag = 0;
   for (; i < *n; i++)
   {  
    if(*(arr+i)==number){
     flag = 1;
    break;

    }
            
   }
  if(flag){
while (i< *n)
{
    arr[i] = arr[i+1];
    ++i;
}
*n = *n -1;

  } 
  else{

    cout<<"Not Found this number in this array"<<endl;
    return;
  }


}


int main(){
int n; int *size = &n;
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
cout<<"---------------------"<<endl;
deleteLocation(arr,&n,3);
display(arr,n);
    return 0;
}