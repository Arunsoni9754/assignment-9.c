#include<stdio.h>
int main()
{
    int p,n;
    printf("ENter the number:");
    scanf("%d",&p);
    switch(p>0)
    {
        case 0:
        {
            n=p-(2*p);
            break;
        }
        case 1:
        {n=p-(2*p);
        break;}
    }
    
    printf("The resultant number is %d",n);
    return 0;
}
