#include<stdio.h>
#define N 3
struct GOODS
{
  int code;                      //code
  char name[20];                  //name
  float price;                   //price
};
void input(struct GOODS *p,int n);
void sort(struct GOODS *p,int n);
void display(struct GOODS *p,int n);
int main(void)
{
  struct GOODS meat[N];     //define 3 goods.
  
  input(meat,N);           //input the detail of 3 goods.
  display(meat,N);          //show the detail of 3 goods.
  sort(meat,N);             //sort the 3 goods by price.
  display(meat,N);           //show the detail of 3 goods.
  
  return 0;
}
void input(struct GOODS *p,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    scanf("%d",&p[i].code);
    scanf("%s",(p+i)->name);
    scanf("%f",&p[i].price);
  }
}
void sort(struct GOODS *p,int n)
{
  int i,j;
  struct GOODS t;
  for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    {
      if(p[i].price<p[j].price)
      {
	t=p[i];
	p[i]=p[j];
	p[j]=t;
      }
    }
}
void display(struct GOODS *p,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d\t",p[i].code);
    printf("%s\t",p[i].name);
    printf("%f\t",p[i].price);
    printf("\n");
  }
}
  
  