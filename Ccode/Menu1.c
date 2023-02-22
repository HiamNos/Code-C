#include<stdio.h>
#include<math.h>
char ten[50];
void tenNgD(){
	printf("Nhap vao ten nguoi dung:");
	scanf("%s",&ten);
}
void inTND(){
	printf("Ten cua ban la: %s\n",ten);	
}
int checkSoCP(int a){
	int b;
	printf("Nhap so a vao de kiem tra:");
	scanf("%d",&a);
	b = sqrt((double)a);
    if(b*b==a){
    	printf("\nDay la so chinh phuong!\n");
	}else
	   printf("\n day khong phai la so chinh phuong!\n");
}
int checkSoLP(){ //co nghia la input 8 ma 8 = 2^3 =8 la so lap phuong
	int n;
	double m;
	printf("Nhap so vao :");
	scanf("%d",&n);
	m=pow((double)n,1.0/3);
	if(m==(int)m){
		printf("%d la so lap phuong!\n",n);
		
	}else
	printf("%d khong phai la so lap phuong!\n",n);
}
int menu(){
	int luaChon;
	printf("==============Menu===============\n");
	printf("1. Nhap vao ten nguoi dung:\n");
	printf("2. In ra ten nguoi dung:\n");
	printf("3. Kiem tra so chinh phuong:\n");
	printf("4. Kiem tra so lap phuong:\n");
	printf("0.Thoat\n");
	printf("Ban chon chuc nang nao?");
	scanf("%d",&luaChon);
	return luaChon;
}
int main(){
	int a,b;
	char ten[50];
	int luaChon;
	do{
		 nhapLai:
		 luaChon =menu();
		 switch(luaChon){
		 	case 1:
		 	  tenNgD();
			  break;
			case 2:
//			  printf("Nhap ten vao:");
//			  scanf("%s",&ten);
			  inTND();
			  break;
			case 3:
				checkSoCP(a);
				break;
			case 4:
				checkSoLP();
				break;
			default:
				printf("Lua chon khong hop le! xin chon lai!");
				goto nhapLai;
		 }
	} while(luaChon!=0);
}
