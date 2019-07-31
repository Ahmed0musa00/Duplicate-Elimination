#include <stdio.h>

int main(void)
{
    int size;
    printf("Enter the array size : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the array element\n");
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n the elements without occurrence : ");
       int j;
       for(i=1;i<size;i++)
       {
           for(j=1;j<size;j++)
           {
               if(j<=i)
               {
                  if(a[i]==a[i-j])
                        a[i]=0;
               }
           }
       }
       for(i=0;i<size;i++)
       {
           if(a[i]!=0)
            printf("%d\t",a[i]);
       }

    return 0;
}
