#include<stdio.h>
int main()
{
    int l;
    printf("enter the year");
    scanf("%d",&l);
     int i=l%100;
     if(i==0)
     { i=l%400;
    switch(i)
    {
        case 0:
        {
            printf("it is a leap year");
            break;
        }
        default:
        {
            printf("It is not a leap year");
            break;
        }
    }
    }
     else 
     { i=l%4;
    switch(i)
    {
        case 0:
        {
            printf("it is a leap year");
            break;
        }
        default:
        {
            printf("It is not a leap year");
            break;
        }
    }
    }
}
