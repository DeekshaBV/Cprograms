#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit,i,j,temp;
     scanf("%d",&limit);
     int a[limit];
     for(i=0;i<limit;i++)
     scanf("%d",&a[i]);

for(int i=0;i<limit;i++)
    {
    for(int j=i;j<limit;j++)
        {
            if(a[i]<a[j])
           {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
           }
        }
    }
 for(i=0;i<limit;i=i+2)
        printf("%d ",a[i]);
for(j=limit-1;j>0;j=j-2)
        printf("%d ",a[j]);

}
