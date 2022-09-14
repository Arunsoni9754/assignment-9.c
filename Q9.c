#include<stdio.h>
int main()
{
    int e,o=0;
    printf("Enter the number");
    scanf("%d",&e);
    switch(e%2==0)
    {
        case 1:
        e=e+1;
        printf("The nearest odd number is %d",e);
        break;
        case 0:
        printf("%d is an odd number",e);
        break;
    }
    return 0;
}
