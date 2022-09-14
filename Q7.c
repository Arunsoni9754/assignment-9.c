#include<stdio.h>
int main()
{
    float amt=0,i,total=0;
    printf("Enter the units generated in electricity:");
    scanf("%f",&i);
    switch(i<=50)
    {
        case 1:
        amt=i*0.5;
        break;
        case 0:
        switch(i<=150) 
        {
        case 1:
        amt=25+(i-50)*0.75;
        break;
        case 0:
        switch(i<=250)  
        {
            case 1:
            amt=100+(i-150)*1.20;
            break;
            case 0:
            amt=220+(i-250)*1.50;
            break;
        }break;
        }break;
    }
     total=amt+amt*0.20;
     printf("Total Amount is %f",total);
 return 0;       
}
