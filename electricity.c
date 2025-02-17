#include <stdio.h> 
struct bill
{
    int id;
    char name[20];
    int units;
}b;
int main()
{
    int n,i,units;
    printf("enter the customer details\n");
    printf("enter the customer id\n");
    scanf("%d",&b.id);
    printf("enter the customer name\n");
    scanf("%s",b.name);
    printf("enter the units of the customers\n");
    scanf("%d",&b.units);
    float base_amount=100.0f;
    float surcharge=0.0f;
    float total_amount=0.0f;
    if(units>100)
    {
        base_amount+=(100.0f*0.05f);
    }
    else
    {
        base_amount+=(units*5.0f);
    }
    if(units>300)
    {
        base_amount+=(units*7.0f);
    }
    else if(units>100&&units<300)
    {
        base_amount+=((units-100.0f)*7.0f);
    }
    if(base_amount>1000)
    {surcharge=((base_amount/100.0f)*5.0f);
    }
    total_amount=surcharge+base_amount;
    printf("the customer bill details are\n");
        printf("customer id:%d\n",b.id);
        printf("customer name:%s\n",b.name);
        printf("the units consumed:%d\n",b.units);
        printf("basebill:rps %.2\n",base_amount);
        if(surcharge>0.0f)
        {
         printf("surcharge= rps%.2f\n",surcharge);
        }
        printf("total_amount=rps%.2f\n",total_amount);
   
 return 0;  
}
}
