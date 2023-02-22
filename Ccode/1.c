#include<stdio.h>

/*void giaiThua(){Ham ko co tham so, khong co gttv.

int n,i,tich =1;
printf("nhap so");
scanf("%d",&n);
for(i=1;i<=n;i++){
  tich = tich *i;}
  printf("%d!=%d",n,tich);
} 

int main(){
	giaiThua();
	return 0;
	
}*/

/*int giaiThua(int n){//Ham co tham so,ko có gia tri tra ve.
	int i,tich =1;
	for(i=1;i<=n;i++){
  tich = tich *i;}
  printf("%d!=%d",n,tich);
} 
int main(){
	int n;
	printf("nhap n");
	scanf("%d",&n);
	giaiThua(n);
	}*/

int giaithua(){//Ham ko co tham so, co gttv.
	int n,t=1 ; 
	printf("moi ban nhap n");
	scanf("%d", &n);
	int i ; 
	for(i=1; i<=n; i++) 
	{
		t*=i; }
	printf("giai thua cua %d la %d\n", n, t ); 
	return t; }
	int main(){
		giaithua();
	}


/*int giaiThua(int n){//Ham co tham so,co gttv.
    int i,tich =1;
	for(i=1;i<=n;i++){
  tich = tich *i;}
  printf("%d!=%d",n,tich);
  return tich;
} 
int main(){
	int n;
	printf("nhap n ");
	scanf("%d",&n);
	giaiThua(n);
	}*/
