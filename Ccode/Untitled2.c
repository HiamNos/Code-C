/*
#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao n:");
	scanf("%d",&n);
	//khai bao con tro kieu in
	int *pn;
	//cho bien pn chi den bien n
	pn = &n;
	printf("%d.\n",n);
	printf("%d.\n",&n);
	printf("%d.\n",pn);
	n=100;
	printf("%d.\n",n);
	printf("%d.\n",&n);
	printf("%d.\n",pn);
	*pn=1000;
	printf("%d.\n",n);
	printf("%d.\n",&n);
	printf("%d.\n",pn);
	printf("%d.\n",*pn);
}
*/
//Tong 2 so dung con tro
//1. khai bao 2 bien con tro kieu int,2 con tro kieu int chi den 2 bien nay
//2. khai bao bien sum kieu int 
//3. bien sum nhan ket qua la gia tri tai vung nho ma 2 bien con tro chi den
/* #include<stdio.h>
int tong(int *a, int *b);
int main(){
	int n,m;
	int *a,*b;
	printf("Nhap 2 so vao:");
	scanf("%d%d",&n,&m);
//	a = &n;
//	b = &m;
//	int sum = *a + *b;
    int sum = tong(&n,&m);
	printf("Sum=%d\n",sum);
	
}
int tong(int *a, int *b){
	int kq = *a + *b;
	return kq;
}*/
//#include<stdio.h>
//int main(){
//	int n=7,m=8;
//	int*p1=&n,*p2=&m;
//	*p1 +=12-m+(*p2);
//	*p2 = m+n-2*(*p1);
//	printf("%d",m+n);
//	
//	
//}
#include<stdio.h>
void swap1(int *x,int *y){
	int t = *x;
	*x = *y;
	*y = t;
}
int main(){
	int a = 5, b = 7;
	printf("a=%d, b=%d\n",a,b);
	swap1(&a,&b);
	printf("a=%d, b=%d\n",a,b);
	getchar();
	return 0;
}
