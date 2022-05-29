#include<stdio.h>
#define MAX(FNAME,DTYPE)                             \
                        DTYPE FNAME(DTYPE X, DTYPE Y)\
                        {                            \
                            return X>Y ? X : Y;      \
                        }                           
MAX(max_int, int)
MAX(max_float,float)
MAX(max_double, double)

int main()
{
    int p;
    float q;
    double r;
    p = max_int(3,9);
    q = max_float(7.5,5.7);
    r = max_double(12.34,13.54);
    printf("p=%d,q=%.2f,r=%.21f\n",p,q,r);
    return 0;
}
/* 
The three macro calls written just before main() are expanded as-
MAX(max_int, int)  -->   int max_int(int X, int Y)
                            {
                                return X>y ? X : Y;
                            }

MAX(max_float, float)  -->   float max_float(float X, float Y)
                            {
                                return X>y ? X : Y;
                            }

MAX(max_double, double)  -->   double max_double(double X, double Y)
                            {
                                return X>y ? X : Y;
                            }
*/