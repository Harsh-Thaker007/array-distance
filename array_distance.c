#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100];
    int n,i,sum,min,max,lag;
    printf("Enter the size:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the numebr:");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <= n; i++)
    {
        printf("%d\n",a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<=n;i++)
    {
        if(min>a[i])
        {
        min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
        lag=max-min;
    }
    printf("The smallest:%d\n",min);
    printf("the largest number:%d\n",max);
    printf("the distance between largest number:%d\n",lag);
 getch();   
}