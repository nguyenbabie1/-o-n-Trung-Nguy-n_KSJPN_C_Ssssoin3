#include <stdio.h>

int main(){
	float toan,van,anh,sum,ave;
    // nhap diem toan
	printf("Diem toan : ");
	scanf("%f",&toan);
	// nhap diem van
	printf("Diem van : ");
	scanf("%f",&van);
	// nhap diem anh
	printf("Diem anh : ");
	scanf("%f",&anh);
	sum = toan+van+anh;
	ave = sum/3;
	printf("Tong diem ba mon toan van anh la %.2f\n",sum);
	printf("Trung binh diem ba mon toan van anh la %.2f\n",ave);
	return 0;
}
