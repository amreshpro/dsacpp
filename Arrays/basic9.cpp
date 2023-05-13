//Write a program to add two integer using pointer

#include <iostream>
using namespace std;

void add(int* ptr1,int* ptr2,int* ptr3){
    *ptr3 = *ptr1 + *ptr2;
}

int main(){    
   
   int a,b;cin>>a>>b;
   int *ptr1,*ptr2;
   ptr1 = &a;
   ptr2 = &b;
   int c;
   int *ptr3 = &c;

*ptr3 =  (*ptr1) + (*ptr2);
cout<<*ptr3<<endl;
add(&a,&b,&c);
cout<<"C = "<<c<<endl;
   
    return 0;
}
