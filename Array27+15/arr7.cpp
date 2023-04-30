// Write a program to insert a number at given location in array

#include <iostream>
using namespace std;

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
void insert(int *arr, int *size, int index, int value)
{
    int n = (*size);
    if (index <= n + 1 && index > -1)
    {
        for (int i = 0; i <= index; i++)
        {
            arr[n + 1 - i] = arr[n + 1 - i - 1];
        }
        arr[index] = value;
        // updating the size globally
        *size = n + 1;
    }
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
    edit(arr, n, 3, 34);
    cout << "----------------" << endl;
    display(arr, n);
    cout << "----------------" << endl;
    insert(arr, size, 4, 88);
    cout << "----------------" << endl;
    display(arr, n);
    return 0;
}