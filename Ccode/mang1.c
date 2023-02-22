//#include<stdio.h>
//int main(){
//	//khai bao 1 mang
//	int ages[5];
//	int i;
//	printf("Nhap mang :");
//	for(i=0;i<5;i++){
//		scanf("%d",&ages[i]);
//	}
//	//truy cap phan tu mang bang vong lap
//	printf("phan tu cua mang:");
//	for( i =0;i<5;i++){
//		printf("%d  ",ages[i]);
//	}
//}
//#include <stdio.h>
//
//int main() {
//  int i;
//  int numbers[5] = {32 , 14};
//  for(i = 0; i < 5; ++i) {
//    printf("%d\n", numbers[i]);
//  }
//  return 0;
//}
//#include <stdio.h>
//
//// hàm tr? v? giá tr? l?n hon
//int findLarger(int age1, int age2) {
//  if (age1 > age2) {
//    return age1;
//  }
//  else {
//    return age2;
//  }
//}
//
//int main() {
//  int ages[5] = {25, 31, 30, 17, 39};
//  // g?i hàm v?i hai ph?n t? c?a m?ng
//  int result = findLarger(ages[1], ages[4]);
//  printf("%d", result);
//  return 0;
//}
#include<stdio.h>
//#define MAX 100
void inputArray(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("enter A[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void outputArray(int a[], int n){
	int i;
	printf(" Array: \n");
	for(i=0;i<n;i++){
		printf("[%d] = %d\n",i,a[i]);
	}
	printf("\n");
}
/*void daoChieu(int a[],int n){
	int i;
	printf("New array : \n");
	for(i=n-1;i>=0;i--){
	 printf("[%d] = %d\n",i,a[i]);
	}
}*/
void daoChieu(int a[],int n){
	int i;
	for(i=0;i<n/2;i++){
		int t = a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	
}
int main(){
	int n,a[n];
	printf("nhap vao size n:");
	scanf("%d",&n);
	inputArray(a,n);
	outputArray(a,n);
	daoChieu(a,n);
	outputArray(a,n);
	return 0;
}
