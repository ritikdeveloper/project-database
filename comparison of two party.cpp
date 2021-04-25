#include<stdio.h>
#include<string.h>

struct party1{
	char itemname[30];
	int quantity;
	int price;
	int peoples;
	int total_amount;
}p1[20];
struct party2{
	char itemname[30];
	int quantity;
	int price;
	int peoples;
	int total_amount;
}p2[20];
int main(){
	int i=0,sum=0,count,sum1=0;
	do{
	printf("item name in party1:");
	scanf("%s",p1[i].itemname);
	printf("quantity per person:");
	scanf("%d",&p1[i].quantity);
		printf("price:");
	scanf("%d",&p1[i].price);
		printf("peoples :");
	scanf("%d",&p1[i].peoples);
	p1[i].total_amount  =p1[i].quantity*p1[i].peoples*p1[i].price;
	sum= sum+ p1[i].total_amount;
	i++;
	printf("for more item press 1:");
	scanf("%d",&count);
}while(count==1);
	printf("expenses in party 1 are:%d\n",sum);
		do{
	printf("item name in party2:");
	scanf("%s",&p2[i].itemname);
	printf("quantity per person:");
	scanf("%d",&p2[i].quantity);
		printf("price:");
	scanf("%d",&p2[i].price);
		printf("peoples :");
	scanf("%d",&p2[i].peoples);
	p1[i].total_amount  =p2[i].quantity*p2[i].peoples*p2[i].price;
	sum1= sum1+ p2[i].total_amount;
	i++;
	printf("for more item press 1:");
	scanf("%d",&count);
}while(count==1);
	printf("expenses in party 2 are:%d",sum1);

	return 0;
}
