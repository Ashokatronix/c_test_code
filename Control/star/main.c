#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i, j,n = 0;
    printf("Enter Number of Line to print");
    scanf("%d",n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
