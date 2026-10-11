#include <stdio.h>

int main() {
    int a1,a2,b1,b2,c1,c2;
    printf("nhap a1,b1,c1 :");
    scanf("%d %d %d",&a1,&b1,&c1);
    printf("nhap a2,b2,c2 :");
    scanf("%d %d %d",&a2,&b2,&c2);
    int d = a1*b2-a2*b1;
    int dx = c1*b2-c2*b1;
    int dy = a1*c2-a2*c1;
    if (d==0){
        if (dx==0 && dy==0){printf("he phuong trinh co vo so nghiem");}
        else{printf("he phuong trinh vo nghiem");}
    }
    else{printf("he phuong trinh co nghiem duy nhat: x=%d, y=%d",dx/d,dy/d);
    }
    
    return 0;
}