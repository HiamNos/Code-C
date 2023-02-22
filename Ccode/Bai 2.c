//Hien thi tat ca cac so nguyen to giua 2 khoang?
#include<stdio.h>
int checkSNT(int n){
	int i,flag =1;
	for(i=2;i<=n/2;++i){
		if(n%i==0){
			flag = 0;
			break;
		}
	}
	return flag;
}
int main(){
	int n1,n2,j,flag;
	printf(" Nhap vao 2 so :");
	scanf("%d %d",&n1,&n2);
	printf("so nguyen to giua %d va %d la :",n1,n2);
	for(j= n1 +1;j<n2;++j){
		flag = checkSNT(j);
		if(flag==1)
		  printf("%d\t",j);
	}
	return 0;
}
