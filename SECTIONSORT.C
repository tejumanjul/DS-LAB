#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,min,n,temp;
clrscr();
printf("enter the number of elements\n");
scanf("%d",&n);
printf("the elements are\n");
for(i=0;i<n;i++);
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
min=a[i];
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
{
min=j;
}
if(min!=i)
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
printf("the sorted elements are\n",n);
for(i=0;i<n;i++)
{
printf("%d",a[i],a[i+1]);
}
getch();
}