#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and_ = 0, or_ = 0, xor_ = 0, andMid, orMid, xorMid;
  for(int i = 1; i <= n; i ++)
  {
      for(int j = i + 1; j <= k; j ++)
      {
      	printf("{%d : %d}\n",i,j);
          andMid = i & j;
          orMid = i | j;
          xorMid = i ^ j;
          if (andMid < k && and_ <= andMid) 
          {
              and_ = andMid;
          }
          if (orMid < k && or_ <= orMid) 
          {
              or_ = orMid;
          }
          if (xorMid < k && xor_ <= xorMid) 
          {
              xor_ = xorMid;
          }
          printf("{%d : %d}\t",i,j);
          printf("a&b = %d\ta|b = %d\ta^b = %d\n",andMid,orMid,xorMid);
      }
  }
  printf("%d\n%d\n%d",and_, or_, xor_);
}

int main() {
    int n=5, k=4;
  
    // scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

