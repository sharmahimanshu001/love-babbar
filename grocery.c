#include<stdio.h>
int main()
{
    float rice,sugar;
    printf("enter rate of rice=");scanf("%f",&rice);
    printf("enter rate of sugar=");scanf("%f",&sugar);
    printf("\n\n*** LIST OF ITEMS***");
    printf("\nItem\tPrice");
    printf("\nRice\tRs %.2f",rice);
    printf("\nSugar\tRs %.2f",sugar);

}