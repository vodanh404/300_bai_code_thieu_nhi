#include <stdio.h>

int main() {
    float diem_chuan;
    float d1, d2, d3;
    char khu_vuc;
    int doi_tuong;

    // Nhập dữ liệu
    printf("Nhap diem chuan: ");
    if (scanf("%f", &diem_chuan) != 1) return 0;

    printf("Nhap diem 3 mon thi: ");
    if (scanf("%f %f %f", &d1, &d2, &d3) != 3) return 0;

    printf("Nhap khu vuc (A, B, C, X): ");
    scanf(" %c", &khu_vuc); // Khoảng trắng trước %c để xóa bộ nhớ đệm (newline)

    printf("Nhap doi tuong (1, 2, 3, 0): ");
    scanf("%d", &doi_tuong);

    // Tính điểm ưu tiên theo khu vực
    float diem_kv = 0;
    switch (khu_vuc) {
        case 'A': case 'a': diem_kv = 2.0; break;
        case 'B': case 'b': diem_kv = 1.0; break;
        case 'C': case 'c': diem_kv = 0.5; break;
        default: diem_kv = 0.0; break; // 'X' hoặc khu vực khác
    }

    // Tính điểm ưu tiên theo đối tượng
    float diem_dt = 0;
    switch (doi_tuong) {
        case 1: diem_dt = 2.5; break;
        case 2: diem_dt = 1.5; break;
        case 3: diem_dt = 1.0; break;
        default: diem_dt = 0.0; break; // 0 hoặc đối tượng khác
    }

    // Tính tổng điểm
    float tong_diem = d1 + d2 + d3 + diem_kv + diem_dt;

    // Kiểm tra điều kiện đậu/rớt (Không môn nào bị 0 và Tổng điểm >= Điểm chuẩn)
    if (d1 == 0 || d2 == 0 || d3 == 0) {
        printf("Rot [%.1f] (Do co mon 0 diem)\n", tong_diem);
    } else if (tong_diem >= diem_chuan) {
        printf("Dau [%.1f]\n", tong_diem);
    } else {
        printf("Rot [%.1f]\n", tong_diem);
    }

    return 0;
}