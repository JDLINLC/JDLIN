#include<stdio.h>
#include<string.h>
int main(void)
{
  int x,n;
  int l;
  
  scanf("%d %d",&x,&n);
  l=x>>n;
  printf("%d",l);
  return 0;
}