#include <stdio.h>

int main(){
	int C,F;
	printf("Moi ban nhap nhieu do hien tai : ");
	scanf("%d",&C);
	F = ( C * 9/5 ) + 32;
	printf("Nhiet do hien tai la %dC tuong duong voi %dF",C,F);
	return 0;
}
