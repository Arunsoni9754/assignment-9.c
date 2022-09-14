#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r=0,s=0;
    printf("Enter the value of a,b and c in the quadratic equation ax^2+bx+c=0:-");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    switch(d>0)
    {
        case 1:
        {
            r=(-b+sqrt(d))/2*a;
            s=(-b-sqrt(d))/2*a;
            printf("The roots are %f and %f",r,s);
            break;
        }
        case 0:
        {
            switch(d<0)
            {
            case 1:{
            r=(-b/2*a)+sqrt(4*a*c-b*b);
            s=(-b/2*a)-sqrt(4*a*c-b*b);
            printf("The roots are %fi and %fi",r,s);
            break;}
            case 0:
            {
                r=-b/2*a;
                 printf("The roots are %f",r);
            break;
            }

        }break;
        }
    }
    return 0;

}
