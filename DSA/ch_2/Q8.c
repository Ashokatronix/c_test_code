#include<stdio.h>
int main(){
    int i, arr[5] = {1,2,3,4,5},*p=arr;
    for(size_t i = 0; i<5; i++)
    {
        (*p)++;
        printf("%d  ", *p);
        p++;
    }
    return 0;
}