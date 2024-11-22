#include <stdio.h>

int main(){
	float pi = 3.14;
	float chuvi,dientich;
	int bankinh;
	printf("Nhap ban kinh hinh tron : ");
	scanf("%d", &bankinh);
	chuvi = 2*pi*bankinh;
	dientich = bankinh*bankinh*pi;
	printf("Chu vi hinh tron bang %.2fcm\n", chuvi);
	printf("Dien tich hinh tron bang %.2fcm^2\n", dientich);
	return 0;
}
