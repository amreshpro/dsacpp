//Write a program to print the element of 2D array


#include <iostream>
using namespace std;

void display(int x,int y,int *arr)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j<y; j++)
        {
            cout << *((arr+i*y)+j)<<" ";
        }
        cout<<endl;
    }
}


int main(){
int x,y;
cout<<"Enter the capacity arr[x][y] =  : ";
cin>>x>>y;
int arr[x][y];
cout<<"Enter the elements  ";
for (int i = 0; i < x; i++)
{
       for (int j = 0; j<y; j++)
       {
        
              printf("arr[%d][%d] = ",i,j);
              cin>>arr[i][j];
       }
       
}


display(x,y,&arr[0][0]);
    return 0;
}