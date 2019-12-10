#include<stdio.h>
int mainn(){
int a,b;
int tong,hieu,tich;
float thuong;
printf("Nhap vao so a: ");
scanf("%d",&a);
printf("Nhap vao so b: ");
scanf("%d",&b);
tong = a + b;
printf("Tong = %d", tong);
hieu = a - b;
printf("\nHieu = %d", hieu);
tich = a*b;
printf("\nTich = %d", tich);
thuong = a/(b*1.0f);
printf("\nThuong = %.3f", thuong);
return 0;
}
