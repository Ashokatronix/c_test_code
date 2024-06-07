#include<stdio.h>
int main(void)
{
    int marks;
    printf("Enter marks in integer\t");
    scanf("%d",&marks);
    printf("marks = %d\n", marks); 

    char ch;
    printf("Enter a single character\t");
    scanf(" %c", ch);
    // ch = getchar();
    printf("ch = %c\n", ch);
    
    /*
    Can you explain me why its not taking character value the second time. This program works well if i take charcter input first.
    Ans: you are entering space or enter button after integer input, So b is assigned that space/enter. add getchar(); before input b
    */
    
    
    float height;
    printf("Enter a float\t");
    scanf("%f", &height);
    printf("height = %f\n", height);

    char str[30];
    printf("Enter any string\t");
    scanf("%s", str);
    printf("str = %s\n", str);

    /*Here the dlimiter is colon (:). The input data can be entered as - 1500:200.50*/
    int basic;
    float hra;
    printf("Enter data in (int:float) format\t");
    scanf("%d:%f", &basic, &hra);
    printf("basic = %d hra = %f\n",basic, hra);
    /*Similarly we can use (,) (-)*/
}