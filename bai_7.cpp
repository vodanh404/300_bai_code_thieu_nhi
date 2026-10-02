#include <iostream>
#include <math.h>

int main(){
    int a, b;
    printf("Nhap a,b: ");
    scanf("%d %d", &a, &b);
    int c = -b / a;
    printf("Nghiem cua phuong trinh la: %d\n", c);
    return 0;
}