// Write a program to insert a number in array that is already sorted.

#include <iostream>
using namespace std;


void sort(int *arr, int* size){
    int n = *size;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
             if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
             }
        }
        
    }
    
}



void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void insert(int *arr, int *size,  int value)
{
    int n = (*size);
    int index = n;
    for (int i = 0; i < n; i++)
    {  if(arr[i]>value) {
        index = i;
          break;
    }

    }
    
    


    for (int i = n; i >=index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    
           // updating the size globally
        *size = n + 1;
    
}

 void edit(int *arr, int n, int position, int value)
{
    if (position < n)
    {
        arr[position] = value;
    }
    else
    {
        cout << "Postion out of bound! ";
    }
}

int main()
{
    int n;
    cout << "Enter the capacity : ";
    cin >> n;
    int *size = &n;
    int arr[100];
    cout << "Enter the elements  ";
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        cin >> arr[i];
    }
    display(arr, n);
    cout << "----------------" << endl;
    // edit(arr, n, 3, 34);
    // cout << "----------------" << endl;
  //  display(arr, n);
  //  cout << "----------------" << endl;
    //insert(arr, size, 88);
  //  cout << "----------------" << endl;
   // display(arr, n);
    //   cout << "----------------" << endl;
     sort(arr,size);
   display(arr, n);
   cout << "----------------" << endl;
      insert(arr, size, 8);
    cout << "----------------" << endl;
    display(arr,n);
    return 0;
}