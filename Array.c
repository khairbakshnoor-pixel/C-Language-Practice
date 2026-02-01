#include <stdio.h>
#include <stdlib.h>

int main()
{
       int pin,count=1;

    do{
        if(count==1)
        {
            printf("\n\tEnter your pincode : ");
            scanf("%d",&pin);
            count++;
        }
        else if(count>1 && count<=3)
        {
            printf("\n\tRE-Enter your pincode : ");
            scanf("%d",&pin);
            count++;
        }
        else{
            printf("\n\t CARD IS BLOCKED...VISIT YOUR NEAREST BRANCH...!");
            return;
        }

    }
    while(pin!=1234);

    printf("\n\t***********WElCOME TO Dashboard********");
    printf("\n\t*\t 1. Withdraw\t\t      *");
    printf("\n\t*\t 1. Withdraw\t\t      *");
    printf("\n\t*\t 1. Withdraw\t\t      *");
    printf("\n\t*\t 1. Withdraw\t\t      *");
    printf("\n\t*\t 1. Withdraw\t\t      *");
    printf("\n\t*\t 1. Withdraw\t\t      *");
    printf("\n\t***************************************");
    return 0;
}
