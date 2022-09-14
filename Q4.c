#include<stdio.h>
int main()
{
    int i,a,b,c;
    while(1)
    {
    printf("Enter 1 for checking isosceles traingle condition\n"); 
    printf("Enter 2 for checking right angled traingle condition\n"); 
    printf("Enter 3 for checking equilateral traingle condition\n"); 
    printf("Enter 4 for exit\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        {
            printf("Enter the length of triangle\n:-");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b||b==c||a==c)
            {
                printf("It is an isosceles traingle\n");
                break;
            }
            else
            {
                printf("It is not an isosceles triangle\n");
                break;
            }
        }
        case 3:
        printf("Enter the length of triangle:-\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a==b&&a==c)
        {
            printf("It is an equilateral triangle\n");
            break;
        }
        else
        {
            printf("It is not an equilateral triangle\n");
            break;
        }
        case 2:
         printf("Enter the length of triangle:-\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
        {
            printf("It is a right angled triangle\n");
            break;
        }
        else
        {
            printf("It is not a right angled triangle\n");
            break;
        }
        case 4:
        {
            break;
        }

    }
    if(i==4)
    {
        break;
    }
    }

    return 0;
}
