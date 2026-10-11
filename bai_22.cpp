#include <stdio.h>

int main() {
    int n;
    int dem = 0;
    long tong = 0;

    printf("Nhap n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Vui long nhap so nguyen duong n!\n");
        return 0;
    }

    printf("Cac uoc so: ");
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            dem++;
            tong += i;
        }
    }

    printf("\nCo %d uoc so, tong la: %ld\n", dem, tong);

    return 0;
}