// Khai báo thư viện
#include <stdio.h>

int ngay_mai(int d, int t, int n) {
    printf("Nhap ngay, thang, nam: ");
    scanf("%d %d %d", &d, &t, &n);
    int nd = d+1;
    if (nd > 30) {nd = 1;t++;if (t > 12) {t = 1;n++;}}
    if (nd > 31 && (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12)) {nd = 1;t++;if (t > 12) {t = 1;n++;}}
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {if (nd > 29 && t == 2) {nd = 1;t++;if (t > 12) {t = 1;n++;}}}
    else {if (nd > 28 && t == 2) {nd = 1;t++;if (t > 12) {t = 1;n++;}}}
    printf( "Ngay mai la: %d/%d/%d \n", nd, t, n);
    return 0;
}

int hom_qua(int d, int t, int n) {
    printf("Nhap ngay, thang, nam: ");
    scanf("%d %d %d", &d, &t, &n);
    int nd = d-1;
    if (nd < 1) {t--;if (t < 1) {t = 12;n--;}if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12) {nd = 31;}}
    if (nd < 1 && (t == 4 || t == 6 || t == 9 || t == 11)) {nd = 30;}
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {if (nd < 1 && t == 3) {nd = 29;t--;}}
    else {if (nd < 1 && t == 3) {nd = 28;t--;}}
    printf( "Ngay hom qua la: %d/%d/%d \n", nd, t, n);
return 0;
}

int main() {
    ngay_mai(0, 0, 0);
    hom_qua(0, 0, 0);
}