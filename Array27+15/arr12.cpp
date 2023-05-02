// Write a program of merge two sorted array

#include <iostream>
using namespace std;

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void mergeTwoSortedArray(int *arr1, int n1, int *arr2, int n2, int *arr3, int n3)
{
    int index3 = 0, index2 = 0, index1 = 0;
    while (index1 < n1 && index2 < n2)
    {

        if (arr1[index1] > arr2[index2])
        {
            arr3[index3] = arr2[index2];
            ++index2;
            ++index3;
        }
        else
        {
            arr3[index3] = arr1[index1];
            ++index1;
            ++index3;
        }

        // if arr1 finish and arr2 element remaining

        if (index1 == n1 - 1)
        {
            while (index2 < n2)
            {
                arr3[index3] = arr2[index2];
                ++index2;
                ++index3;
            }
        }
        // if arr2 finish and arr1 element remaining
        if (index2 == n2 - 1)
        {

            while (index1 < n1)
            {
                arr3[index3] = arr1[index1];
                ++index1;
                ++index3;
            }
        }
    }
}

int main()
{
    int n1, n2, n3;
    cout << "\nEnter the capacity of 1st : ";
    cin >> n1;
    int arr1[n1];
    cout << "\nEnter the elements of 2nd :  ";
    for (int i = 0; i < n1; i++)
    {
        printf("arr[%d] = ", i);
        cin >> arr1[i];
    }

    cout << "\nEnter the capacity of 1st : ";
    cin >> n2;
    int arr2[n2];
    cout << "\nEnter the elements of 2nd :  ";
    for (int i = 0; i < n2; i++)
    {
        printf("arr[%d] = ", i);
        cin >> arr2[i];
    }
    n3 = n1 + n2 -1;
    int arr3[n3];
    display(arr1, n1);
    cout << "--------------------" << endl;
    display(arr2, n2);
    cout << "-------------------" << endl;
    mergeTwoSortedArray(arr1, n1, arr2, n2, arr3, n3);
    display(arr3, n3);
    return 0;
}