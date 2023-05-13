// Write a program to find the second largest of n numbers using array

#include <iostream>
using namespace std;
int secondLargestNumber(int *arr, int n)
{

    int largest = arr[0], secondLargest = 0 [arr];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (largest != arr[i])
        {
            if (arr[i] > secondLargest)
            {
                secondLargest = arr[i];
            }
        }
    }

    return {secondLargest};
}
int main()
{

    int n;
    cout << "Enter the capacity:  ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements  ";
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        cin >> arr[i];
    }

    int res = secondLargestNumber(arr, n);
    cout << "Second Largest Number  : " << res << endl;
    return 0;
}