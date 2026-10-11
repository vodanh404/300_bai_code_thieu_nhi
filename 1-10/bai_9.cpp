#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    double x_phut;
    printf("Nhap so do x cua goc (phut): ");
    scanf("%lf", &x_phut);

    // Đổi phút ra độ
    double do_goc = x_phut / 60.0;
    
    // Quy về góc trong khoảng [0, 360)
    double goc_chuan = fmod(do_goc, 360.0);
    if (goc_chuan < 0) {
        goc_chuan += 360.0;
    }

    // Xác định góc vuông thứ mấy
    int goc_vuong = (int)(goc_chuan / 90.0) + 1;
    printf("x thuoc goc vuong thu %d\n", goc_vuong);

    // Tính cos(x) với x đổi sang radian
    double radian = goc_chuan * M_PI / 180.0;
    printf("cos(x) = %.6f\n", cos(radian));

    return 0;
}