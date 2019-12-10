#include<stdio.h>
int mainqq() {
int toan,ly,hoa,heSoToan,heSoLy,heSoHoa;
float diemTrungBinh;
printf("Nhap diem mon Toan: ");
scanf("%d",&toan);
printf("Nhap he so Toan: ");
scanf("%d",&heSoToan);
printf("Nhap diem mon Ly: ");
scanf("%d",&ly);
printf("Nhap he so Ly: ");
scanf("%d",&heSoLy);
printf("Nhap diem mon Hoa: ");
scanf("%d",&hoa);
printf("Nhap he so Hoa: ");
scanf("%d",&heSoHoa);
diemTrungBinh = ((toan*heSoToan) + (ly*heSoLy) + (hoa*heSoHoa)) / ((heSoHoa+heSoLy+heSoHoa)*1.0f);
printf("%.2f", diemTrungBinh);

return 0 ;
}
