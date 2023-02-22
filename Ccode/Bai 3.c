//Kiem tra so doi xung
// ham tim so dao nguoc C*/
#include<stdio.h>
int reverse_num(int n){
	int reverse = 0;
	while(n>0){
		reverse = reverse * 10 +n %10;
		n/=10;
	}
	return reverse;
}
// Ham kiem tra so doi xung trong C
int symmetrical_num(int n){
	int flag = 0;
	if(reverse_num(n)==n) flag=1;
	return flag;
}
int main(){
	int n;
	printf("Nhap so tu nhien :");
	scanf("%d",&n);
	
	int check = symmetrical_num(n);
	check == 1 ? printf("%d la so doi xung\n",n) : printf("%d khong phai la so doi xung\n",n);
	return 0;
}
