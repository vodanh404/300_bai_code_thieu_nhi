#include <stdio.h>
#include <math.h>

// Hàm tính diện tích tam giác khi biết tọa độ 3 đỉnh
double tinhDienTich(double xA, double yA, double xB, double yB, double xC, double yC) {
    return 0.5 * fabs(xA * (yB - yC) + xB * (yC - yA) + xC * (yA - yB));
}

// Sai số cho phép khi so sánh số thực
#define EPS 1e-6

int main() {
    double xA, yA, xB, yB, xC, yC, xM, yM;

    // Nhập tọa độ các đỉnh tam giác ABC và điểm M
    printf("Nhap toa do dinh A (xA yA): ");
    scanf("%lf%lf", &xA, &yA);
    printf("Nhap toa do dinh B (xB yB): ");
    scanf("%lf%lf", &xB, &yB);
    printf("Nhap toa do dinh C (xC yC): ");
    scanf("%lf%lf", &xC, &yC);
    printf("Nhap toa do diem M (xM yM): ");
    scanf("%lf%lf", &xM, &yM);

    double S_ABC = tinhDienTich(xA, yA, xB, yB, xC, yC);
    double S_MAB = tinhDienTich(xM, yM, xA, yA, xB, yB);
    double S_MBC = tinhDienTich(xM, yM, xB, yB, xC, yC);
    double S_MCA = tinhDienTich(xM, yM, xC, yC, xA, yA);

    // Kiểm tra xem M có nằm trong, trên cạnh hay ngoài tam giác ABC
    if (fabs((S_MAB + S_MBC + S_MCA) - S_ABC) < EPS) {
        // Kiểm tra xem M có nằm trên cạnh hay không (nếu có một diện tích tam giác con bằng 0)
        if (S_MAB < EPS || S_MBC < EPS || S_MCA < EPS) {
            printf("Diem M nam tren canh tam giac ABC\n");
        } else {
            printf("Diem M nam trong tam giac ABC\n");
        }
    } else {
        printf("Diem M nam ngoai tam giac ABC\n");
    }

    return 0;
}