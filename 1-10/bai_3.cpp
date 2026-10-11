// Khai báo thư viện
#include <stdio.h>
#include <math.h>

int main() {
    float xA, yA, xB, yB, r;
    printf( "Nhap toa do tam C(xC, yC)? " );
    scanf( "%f%f", &xA, &yA );
    printf( "Nhap ban kinh r? " );
    scanf( "%f", &r );
    printf( "Nhap toa do tam B(xB, yB)? " );
scanf( "%f%f", &xB, &yB );
if (xB >= xA - r && xB <= xA + r && yB >= yA - r && yB <= yA + r) {
    printf( "B nam trong duong tron\n" );
} else {
    printf( "B nam ngoai duong tron\n" );
}
return 0;
}