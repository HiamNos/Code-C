//kiem tra 1 so co the bieu thi bang cua tong cua hai so nguyen 0?
#include<stdio.h>
int checkPrime(int n){
	int i, isPrime=1;
	for(i=2;i<=n/2;++i){
		if(n % i ==0){
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}
//ham
int main(){
	int n,i,flag = 0;
	printf("Enter a positive integer:");
	scanf("%d",&n);
	for(i=2;i<=n/2;++i){
		if(checkPrime(i)==1){
			if(checkPrime(n-i)==01){
				printf("%d = %d + %d\n",n,i,n-i);
				flag = 1;
			}
		}
	}
	if(flag == 0)
	printf("%d cannot be expressed as the sum of two prime numbers.",n);
	return 0;
}
