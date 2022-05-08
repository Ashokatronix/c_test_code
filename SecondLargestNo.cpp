#include <stdio.h>

int sec_largest(int *, int);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    
    //funtion call
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}
