//reversing  of a number
#include<stdio.h>
 int main(void) {
   int n,rev=0,rem;
   scanf("%d",&n);
   int temp=n;
   while(n>00)
   {
   	rem=n%10;
   	rev=rev*10+rem;
	n=n/10;
   }
  printf("%d",rev);
   return 0;
}
