#include<stdio.h>
#define I 2
#define J 3
int main(void)
{
  int u[I][J],(*p)[J]=u;
  int i,j;
  
  for(i=0;i<I;i++)
  {
    for(j=0;j<J;j++)
      scanf("%d",(u[i]+j));
  }
  for(i=0;i<I;i++)
  {
    for(j=0;j<J;j++)
      printf("%d\t",*(*(u+i)+j));
  }
  printf("\n");
  for(i=0;i<I;i++)
  {
    for(j=0;j<J;j++)
      printf("%d\t",(*(p+i)+j));
  }
  
  return 0;
}