#include <stdio.h>

int main() {
    int num, i;
    printf("Nhap so nguyen : ");
    scanf("%d", &num);
    printf("Cac uoc cua so %d là:\n", num);
    for (i = 1; i <= num ; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

