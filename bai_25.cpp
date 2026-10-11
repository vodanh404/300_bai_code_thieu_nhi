#include <stdio.h>

// Hàm tính Ước số chung lớn nhất (sử dụng thuật toán Euclid)
long tim_uscln(long a, long b) {
    while (b != 0) {
        long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Hàm tính Bội số chung nhỏ nhất
long tim_bscnn(long a, long b, long uscln) {
    return (a * b) / uscln;
}

int main() {
    long a, b;

    printf("Nhap cap (a, b): ");
    if (scanf("%ld %ld", &a, &b) != 2 || a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong a va b!\n");
        return 0;
    }

    long uscln = tim_uscln(a, b);
    long bscnn = tim_bscnn(a, b, uscln);

    printf("USCLN (a, b): %ld\n", uscln);
    printf("BSCNN (a, b): %ld\n", bscnn);

    return 0;
}