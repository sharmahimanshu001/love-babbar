#include<stdio.h>
#include<string.h>
#include<conio.h>

struct xyz
{
    char name[100],month[100];
    int salary;   
};
int main()
{
    int sum=0,count,i;
    struct xyz obj[10];
    for(i=0;i<3;++i)
    {
        printf("Name: ");
        scanf("%s",obj[i].name);
        printf("Month: ");
        scanf("%s",obj[i].month);
        printf("Salary: ");
        scanf("%d",&obj[i].salary);
    }
    for(i=0;i<3;++i)
    {
        for(int j=i;j<3;++j)
        {
            if(strcmp(obj[i].month,obj[j].month)==0)
            {
                sum=sum+obj[i].salary;
                count++;
                printf("Average of %s Month is : %f\n",obj[i].month,(float)sum/count);
            }
            
        }
    }
}
