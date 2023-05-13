//Write a program to delete a number from given location in array


#include <iostream>
using namespace std;

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}


void deleteLocation(int *arr,int* n,int position)
{ 
    int location = position;
    int lastIndex = (*n)-1;

   if (location>=(*n) || location<0)
   {
    cout<<"Overflow or Underflow or Invalid Index"<<endl;
    return;
   }
   else{
while (location<=lastIndex)
{
    arr[location] = arr[location+1];
    ++location;
}


*n = (*n )-1;
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