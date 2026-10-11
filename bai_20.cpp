#include <stdio.h>   
int main (){
    int so_dien;
    printf("Nhap so dien tieu thu: ");
    scanf("%d", &so_dien);
    if (so_dien <= 100){
        printf("So tien phai tra: %d", so_dien * 500);
    } else if (100 < so_dien && so_dien <= 250){
        printf("So tien phai tra: %d", 100 * 500 + (so_dien - 100) * 800);
    } else if (250 < so_dien && so_dien <= 350){
        printf("So tien phai tra: %d", 100 * 500 + 150 * 800 + (so_dien - 250) * 1000);
    }else if (so_dien > 350){
        printf("So tien phai tra: %d", 100 * 500 + 150 * 800 + 100 * 1000 + (so_dien - 350) * 1500);
    }
    return 0;
}