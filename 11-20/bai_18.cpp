#include <stdio.h>

int main(){
    int time;
    printf("Nhap so gio: ");
    scanf("%d", &time);
    int tuan, ngay, gio;
    tuan = time / 168;
    ngay = (time % 168) / 24;
    gio = (time % 168) % 24;
    printf("%d gio, %d ngay, %d tuan", gio, ngay, tuan);
    return 0;
}