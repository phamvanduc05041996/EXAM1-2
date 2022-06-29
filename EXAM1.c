#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int add(int a,int b){
int add= a + b;
return add;
}
int sub(int a, int b)
{
int sub = a - b;
return sub;
}
int mul(int a, int b)
{
	int mul = a * b;
	return mul;
	
}
float chia( float a, float b)
{
	float chia = a / b;
	return chia;
}
int main() 
{
	int a,b;
	int menu;
	printf("Nhap vao so a\n");
	scanf("%d",&a);
	printf("Nhap vao so b\n");
	scanf("%d",&b);
	printf("Nhap vao lua chon:\n");
	printf("1. Tinh tong\n");
	printf("2. Tinh hieu\n");
	printf("3. Phep nhan \n");
	printf("4. Phep chia\n");
	fflush(stdin);
	scanf("%d", &menu);
	switch (menu)
	{
		case 1:
			printf("tong = %d", add(a,b));
			break;
			
		case 2:
			printf("hieu = %d", sub(a,b));
			break;
			
		case 3:
				printf("mul = %d", mul(a,b));
			break;	
		case 4:
			printf(" chia = %.2f", chia(a,b));
			break;
			
		
	}
return 0;
}
