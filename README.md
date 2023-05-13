# dsacpp

## Arrays
```c

int findSmallest(int *arr,int n){
    int smallest = *arr;
for (int i = 0; i < n; i++)
{
    if(*(arr+i)<smallest) 
      smallest = *(arr+i);
}
return smallest;
    
}


```
