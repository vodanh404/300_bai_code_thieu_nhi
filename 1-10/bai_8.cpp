#include <iostream>
#include <math.h>

int main(){
    int a, b,c;
    printf("Nhap a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a==0){printf("Phuong trinh khong phai la phuong trinh bac hai");}
    else {
        double delta = b*b - 4*a*c;
        if (delta < 0){printf("Phuong trinh vo nghiem");}
        else if (delta == 0){printf("Phuong trinh co nghiem kep: x1 = x2 = %.2lf", -b/(2*a));}
        else {
            double x1 = (-b + sqrt(delta)) / (2*a);
            double x2 = (-b - sqrt(delta)) / (2*a);
            printf("Phuong trinh co hai nghiem phan biet: x1 = %.2lf, x2 = %.2lf", x1, x2);}
    }
    return 0;
}