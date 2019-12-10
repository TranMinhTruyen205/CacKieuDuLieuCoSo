#include<stdio.h>
int main__() {
int nut,soXe,soDu;
int sum = 0;
printf("Nhap vao so xe cua ban: ");
scanf("%d", &soXe);
while(soXe > 0){
    soDu = soXe % 10 ;
    soXe = soXe / 10 ;
    sum += soDu;
} nut = sum % 10;
printf("xe cua ban co %d nut", nut);



}
