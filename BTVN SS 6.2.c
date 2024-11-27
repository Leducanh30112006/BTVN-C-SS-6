#include <stdio.h>

int main() {
    int num, chan = 0, le = 0;
    printf("Nhap 5 so nguyen:\n");
    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
            chan++;
        } else {
            le++;
        }
    }
    printf("So luong so chan: %d\n", chan);
    printf("So luong so le: %d\n", le);
    return 0;
}
