// Khai báo thư viện
#include <stdio.h>

int main() {
    int d, t, n;
    printf("Nhap ngay, thang, nam: ");
    scanf("%d %d %d", &d, &t, &n);
    int sum = (30.42 * (t - 1)) + d;
    if (t >= 2) {
        if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {sum++;}
        else {sum++;}
    }
    
    if(2<t && t<8) {sum--;}
    printf("Ngay thu: %d \n", sum);
    return 0;
} 
