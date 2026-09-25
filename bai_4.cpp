// khai báo thư viện
#include <stdio.h>
#include <math.h>
// hàm main
int main() {
    float a, b, c;
    printf("Nhap 3 so thuc a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("3 so thuc a, b, c co the tao thanh 1 tam giac\n");
        if (a == b && b == c) {
            printf("Tam giac deu\n");
        } else if (a == b || a == c || b == c) {
            printf("Tam giac can\n");
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Tam giac vuong\n");
        } else {
            printf("Tam giac thuong\n");
        }
        printf("Dien tich tam giac: %g\n", sqrt((a + b + c) / 2 * ((a + b + c) / 2 - a) * ((a + b + c) / 2 - b) * ((a + b + c) / 2 - c)));
    } else {
        printf("3 so thuc a, b, c khong the tao thanh 1 tam giac\n");
    }
    return 0;
}