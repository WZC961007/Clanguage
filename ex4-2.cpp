#include "stdio.h"
void main()
{
    int i,j,num[3001];
    for(i=2000,j=0;i<=3000;i++)
    {
     num[i]=i;
     if((i%4==0&&i%100!=0)||i%400==0)
     {
      j++;
      printf("%d  ",num[i]);
      if((j%10)==0) putchar('\n');
     }
    }
}