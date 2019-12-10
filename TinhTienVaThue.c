#include<stdio.h>
int mainz(){
    int soLuong,donGia,tien;
    float VAT;
 printf("Nhap so luong: ");
 scanf("%d", &soLuong);
 printf("Nhap don gia: ");
 scanf("%d",&donGia);
 tien = soLuong*donGia;
 VAT = tien * 0.1; // 10% = 0.1
 printf("So tien ban can tra la: %d va tien thue la: %.3f", tien, VAT);

}
