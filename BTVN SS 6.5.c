#include <stdio.h>

int main() {
    int month, year;
    printf("Nhap nam : ");
    scanf("%d", &year);
    printf("Nhap so thang: ");
    scanf("%d", &month);
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d co 31 ngay.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d co 30 ngay.\n", month);
            break;
        case 2:
        	if(year%400==0 || year%4==0 && year!=0){
        		printf("Thang %d co 29 ngay .\n", month);
			}else {
			printf("Thang %d co 28 ngay .\n", month);
			}
            break;
        default:
            printf("So thang khong hop le.\n");
            break;
    }
    return 0;
}

