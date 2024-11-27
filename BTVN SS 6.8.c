#include <stdio.h>
#include <math.h>

int main() {
    double tiengui, rate, tongtien;
    int months;
    printf("Nhap so tien gui ban dau (VND): ");
    scanf("%lf", &tiengui);
    printf("Nhap lai suat thang (%%): ");
    scanf("%lf", &rate);
    printf("Nhap so thang gui: ");
    scanf("%d", &months);
    rate = rate / 100; 
    tongtien = tiengui * pow(1 + rate, months);
    double interest = tongtien - tiengui;
    printf("\nKet qua:\n");
    printf("So tien lai: %.3lf VND\n", interest);
    printf("Tong so tien nhan duoc: %.3lf VND\n", tongtien);

    return 0;
}

