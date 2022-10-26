// 5! = 1 * 2 * 3 * 4 * 5 = (5-0) * (5-1) * (5-2) * (5-3) * (5-4) = 
//    = 4! * 5
// 5! / 5 = 4!

// 0! = 1 (operation of factorial is related to the data sets and combinations
//         quaetion 0! - means - how many sets could be created from empty set
//         [] - the answer is - one  - one empty set :-) )

#include<stdio.h>

int main()
 {
 int i,n,fact;
 printf("Dear user, please, enter one natural number: ");
 scanf("%d",&n);

 //i = 0;
 fact = 1;
 //for(i=1,fact=1;;)
 for(i=1 ; i<=n ; i++)
  {
  fact = fact * i;
  printf("%3d! = %15d\n",i,fact);
  }

 return 0;
 }
