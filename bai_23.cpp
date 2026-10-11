#include <stdio.h>

// Hàm kiểm tra số hoàn hảo
int kiem_tra_hoan_hao(int x) {
    if (x <= 1) return 0;
    
    int tong_uoc = 0;
    for (int i = 1; i <= x / 2; i++) {
        if (x % i == 0) {
            tong_uoc += i;
        }
    }
    
    return (tong_uoc == x);
}

int main() {
    int n;

    printf("Nhap n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Vui long nhap so nguyen duong n!\n");
        return 0;
    }

    printf("Cac so hoan hao nho hon %d: ", n);
    for (int i = 1; i < n; i++) {
        if (kiem_tra_hoan_hao(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}