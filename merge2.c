#include <stdio.h>
int main()
{
int a[5],b[50],c[100];
int n1,n2,i;
printf("enter the numbers of elements of the first array:\n");
scanf("%d",&n1);
printf("enter the elements of first array:\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
printf("enter the numbers of elements of the second array:\n");
scanf("%d",&n2);
printf("enter element of second array;\n");
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
c[n1+i]=b[i];
}
printf("merged array:\n");
for(i=0;i<n1+n2;i++)
{
printf("%d",c[i]);
}
return 0;
}

