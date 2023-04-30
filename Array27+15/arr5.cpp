// Write a program to enter n number of digits and form a number using these digits .
#include <iostream>
using namespace std;
long formNumber(int *arr, int n)
{
    long number = 0;
    for (int i = 0; i < n; i++)
    {
        number = number * 10 + arr[i];
    }

    return number;
}
int main()
{
    int n;
    cout << "Enter the no. of digits : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d digits:  = ", i + 1);
        cin >> arr[i];
    }
    long ourNumber = formNumber(arr, n);
    cout << "Our Generated Number: " << ourNumber << endl;
    return 0;
}