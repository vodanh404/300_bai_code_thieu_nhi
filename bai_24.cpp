#include <stdio.h>

int main() {
    unsigned long n;

    printf("Nhap n: ");
    if (scanf("%lu", &n) != 1) {
        printf("Vui long nhap so tu nhien hop le!\n");
        return 0;
    }

    // Trường hợp n = 0
    if (n == 0) {
        printf("0 co 1 chu so\n");
        printf("Chu so cuoi cung la: 0\n");
        printf("Chu so dau tien la: 0\n");
        printf("Tong cac chu so la: 0\n");
        printf("So dao nguoc la: 0\n");
        return 0;
    }

    int dem = 0;
    int chu_so_cuoi = n % 10;
    int chu_so_dau = 0;
    long tong_chu_so = 0;
    unsigned long so_dao = 0;

    unsigned long temp = n;
    while (temp > 0) {
        int chu_so = temp % 10;
        
        dem++;
        tong_chu_so += chu_so;
        so_dao = so_dao * 10 + chu_so;
        
        if (temp < 10) {
            chu_so_dau = temp;
        }
        
        temp /= 10;
    }

    // In kết quả
    printf("%lu co %d chu so\n", n, dem);
    printf("Chu so cuoi cung la: %d\n", chu_so_cuoi);
    printf("Chu so dau tien la: %d\n", chu_so_dau);
    printf("Tong cac chu so la: %ld\n", tong_chu_so);
    printf("So dao nguoc la: %lu\n", so_dao);

    return 0;
}