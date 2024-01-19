/*The cost of stock on each day is given in an array A[] of size N. Find all the segments 
of days on which you buy and sell the stock so that in between those days your profit 
is maximum.
*/
#include<stdio.h>
//Calcuat max profite when prise is low then buy and prise is high then sell

int main(){
	int n,i,q;
  /*
	printf("Enter the number how many prise want to enter : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the prise of the share in a day : ");
	for(i=0; i<n;i++){
		scanf("%d",&arr[i]);
	} 
  */
	n = 7;
	int arr[7] = {100,180,240,310,40,535,695};
	int maxf = 0,b=0,s=0,j,sj;
	for(i=0;i<n;i++){
		int max = 0,profit;
		for(j=i+1;j<n;j++){
			profit = arr[j]- arr[i];
			if(max > profit){
				max = max;
			}
			else{
				max = profit;
				sj = j;
				if(arr[s]<arr[j]){
				    s = j;
				}
			}
		}
		if(maxf > max){
			maxf = maxf;
		}
		else{
			maxf = max;
			if(arr[b]>arr[i]){
				    b = i;
				}
		}
		printf("buy = %d\tsell = %d\t",arr[i],arr[sj]);
		printf("profit = %d\n",max);
	}
	printf("\nbuy = %d\tsell = %d\t",arr[b],arr[s]);
	printf("max profit = %d",maxf);
	return 0;
}
