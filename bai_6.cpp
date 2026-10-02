#include <iostream>
int main() {
    int a,b,c;
    printf("Nhap a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    // Dãy theo thứ tự tăng dần
    if (a<b && b<c) {printf("\nDay theo thu tu tang dan la: %d %d %d", a, b, c);}
    else if (a<c && c<b) {printf("\nDay theo thu tu tang dan la: %d %d %d", a, c, b);}
    else if (b<a && a<c) {printf("\nDay theo thu tu tang dan la: %d %d %d", b, a, c);}
    else if (b<c && c<a) {printf("\nDay theo thu tu tang dan la: %d %d %d", b, c, a);}
    else if (c<a && a<b) {printf("\nDay theo thu tu tang dan la: %d %d %d", c, a, b);}
    else {printf("\nDay theo thu tu tang dan la: %d %d %d", c, b, a);}
    return 0;
}