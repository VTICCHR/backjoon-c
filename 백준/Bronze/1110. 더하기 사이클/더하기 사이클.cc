#include <stdio.h>

int main() {
  int a, b, c, d, sum=0, i, r=0;
  scanf("%d", &a); 
  sum=a;
  b=sum/10;
  c=sum%10;
  d=(b+c)%10;
  sum=(c*10)+d;
    i++;
    r+=i;
  
  while(a!=sum)
  {
  b=sum/10;
  c=sum%10;
  d=(b+c)%10;
  sum=(c*10)+d;
    i++;
    r+=i;
    }
     printf("%d", i);
    return 0;
}
  