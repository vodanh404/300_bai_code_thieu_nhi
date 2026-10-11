#include <stdio.h>

int main () {
    int g1, p1, s1;
    int g2,p2,s2;
    printf("Nhap gio, phut, giay [1]:");
    scanf("%d %d %d", &g1, &p1, &s1);
    printf("Nhap gio, phut, giay [2]:");
    scanf("%d %d %d", &g2, &p2, &s2);
    int hieu = (g2*3600 + p2*60 + s2) - (g1*3600 + p1*60 + s1);
    int g = hieu / 3600;
    int p = (hieu % 3600) / 60;
    int s = (hieu % 3600) % 60;
    printf("Hieu thoi gian: %d gio, %d phut, %d giay", g, p, s);
    return 0;
}