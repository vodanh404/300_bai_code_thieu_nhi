#include <stdio.h>

int main() {
    long long sin;
    printf("Nhap so SIN (9 chu so): ");
    scanf("%lld", &sin);

    int a[9];
    for (int i = 8; i >= 0; i--) {
        a[i] = sin % 10;
        sin /= 10;
    }

    int s1 = 0, s2 = 0;
    // Duyệt từ trái qua phải, bỏ qua chữ số cuối cùng (index 8)
    for (int i = 0; i < 8; i++) {
        if ((i + 1) % 2 != 0) {
            // Vị trí lẻ (tính từ trái, 1-based: 1, 3, 5, 7)
            s1 += a[i];
        } else {
            // Vị trí chẵn (2, 4, 6, 8) nhân đôi
            int tich = a[i] * 2;
            if (tich >= 10) {
                s2 += (tich / 10) + (tich % 10);
            } else {
                s2 += tich;
            }
        }
    }

    int tong_trong_so = s1 + s2;
    int so_kiem_tra = a[8];

    // Kiểm tra tính hợp lệ
    if ((tong_trong_so + so_kiem_tra) % 10 == 0) {
        printf("SIN hop le.\n");
    } else {
        printf("SIN khong hop le.\n");
    }

    return 0;
}