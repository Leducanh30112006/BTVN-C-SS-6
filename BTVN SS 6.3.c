#include <stdio.h>

int main() {
    int mk = 69; 
    int nhap;
    do {
        printf("Nhap mat khau: ");
        scanf("%d", &nhap);
        if (nhap != mk) {
            printf("Sai roi\n");
        }
    } while (nhap != mk);
    printf("Dung roi\n");
    return 0;
}

