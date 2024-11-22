#include <stdio.h>

int main(){
	int a,h;
	float dientich;
	printf("Nhap do dai canh thu nhat : ");
	scanf("%d",&a);
	printf("Nhap chieu cao cua tam giac : ");
	scanf("%d",&h);
	dientich = a/2 * h;
	printf("Dien tich tam giac bang %.2fcm^2 ", dientich);
	return 0;
}
