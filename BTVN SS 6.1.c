#include <stdio.h>

int main() {
    int num, tongsole = 0;
    printf("Nhap 5 so nguyen:\n");
    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &num);
        if (num % 2 != 0) {
            tongsole += num;
        }
    }
    printf("Tong cac so le la: %d\n", tongsole);
    return 0;
}
