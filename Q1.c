#include<stdio.h>
int main()
{
    int m,i;
    printf("ENter the month number:");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7: 
        case 8:
        case 10:
        case 12:
        {
            printf("The number of days is 31");
            break;
        } 
        case 4:
        case 6:
        case 9:
        case 11:
        {
            printf("The number of days is 30");
            break;
        }
        case 2:
        {
            printf("The number of days is either 28 or 29");
            break;
        }
        default:
        {
            printf("The month number is wrong");
            break;
        }
    }
    return 0;
}
