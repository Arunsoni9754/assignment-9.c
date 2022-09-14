#include<stdio.h>
int main()
{int c,a,b,r;
 while(1){
    printf("press 1 for addition\n");
     printf("press 2 for substraction\n"); 
     printf("press 3 for multiplication\n");
     printf("press 4 for division\n");
      printf("press 5 for exit\n");
    
      scanf("%d",&c);
     
      switch(c)
      {
        case 1:
       { printf("Enter the two integer:-");
        scanf("%d %d",&a,&b);
        r=a+b;
        printf("The addition of %d and %d is %d\n",a,b,r);
        break;
      }
        case 2:
        {
            printf("Enter two integer:-");
            scanf("%d %d",&a,&b);
            r=a-b;
            printf("The substraction of %d from %d is %d\n",a,b,r);
            break;
        }
            case 3:
        {
            printf("Enter two integer:-");
            scanf("%d %d",&a,&b);
            r=a*b;
            printf("The multplication of %d with %d is %d\n",a,b,r);
            break;
        }
            case 4:
        {
            printf("Enter two integer:-");
            scanf("%d %d",&a,&b);
            r=a/b;
            printf("The division of %d by %d is %d\n",a,b,r);
            break;
        }
            case 5:
                break;
        default:
            printf("Invalid choice\n");
      }
            if(c==5)
            break;
      
      }
    return 0;
}
