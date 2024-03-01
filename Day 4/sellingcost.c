#include<stdio.h>
int main(){
	int selling_price,cost_price;
	printf("Enter the selling price: ");
	scanf("%d",&selling_price);
	printf("Enter the cost price: ");
	scanf("%d",&cost_price);
	selling_price>cost_price?printf("\nSeller made profit"):printf("\nSeller made loss");
	return 0;
}
