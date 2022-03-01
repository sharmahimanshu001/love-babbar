#include<stdio.h>

struct store
{
    int items,stock;
    int cp,sp;
};

int main()
{
    struct store obj;
    void getdata();
    void getorder();
    void fullfill(int stock,int item);
    int profit();

}
void getdata()
{
    printf("Enter stock: ");
    scanf("%d",&obj.stock);
}
void getorder()
{
    printf("Enter your order: ");
    scanf("%d",&obj.items);
}
void fullfill(int stock,int item)
{
    if(stock<item)
    stock=item;
}
int profit()
{

}