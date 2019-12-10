#include<stdio.h>
#define PI 3.14
int main(){
int banKinh;
float chuVi,dienTich;
printf("Nhap ban kinh duong tron: ");
scanf("%d",&banKinh);
chuVi = 2*banKinh*PI;
printf("Chu vi hinh tron la: %.3f",chuVi);
dienTich = (banKinh*banKinh)*PI;
printf("\nDien tich hinh tron la: %.3f",dienTich);





return 0;
}
