/*The cost of stock on each day is given in an array A[] of size N. Find all the segments 
of days on which you buy and sell the stock so that in between those days your profit 
is maximum.
*/
#include<stdio.h>
//Calcuat max profite when prise is low then buy and prise is high then sell

int main(){
	int n,i,q;
	printf("Enter the number how many prise want to enter : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the prise of the share in a day : ");
	for(i=0; i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the no. of quentity : ");
	scanf("%d",&q); 
	int min = arr[0];
	for(i=0;i<n;i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	int buy = min * q;
	printf("Buying prise %d Buy amount : %d\n",min,buy);
	int max = arr[0];
	for(i=0;i<n;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	int sell = max * q;
	printf("Selling prise %d Sell amount : %d\n",max,sell);
	int pl = sell - buy;
	if(pl > 0){
		printf("Profit : +%d\n",pl);
	}
	else{
		printf("Loss : -%d\n",pl);
	}
	return 0;
}
