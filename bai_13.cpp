#include <stdio.h>

// Hàm kiểm tra năm nhuận
int laNamNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// Hàm trả về số ngày của một tháng trong năm
int soNgayTrongThang(int thang, int nam) {
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return laNamNhuan(nam) ? 29 : 28;
        default:
            return 0; // Tháng không hợp lệ
    }
}

// Hàm kiểm tra tính hợp lệ của ngày, tháng, năm
int kiemTraNgayThang(int ngay, int thang, int nam) {
    if (nam < 1 || thang < 1 || thang > 12) {
        return 0;
    }
    if (ngay < 1 || ngay > soNgayTrongThang(thang, nam)) {
        return 0;
    }
    return 1;
}

// Hàm tính thứ trong tuần theo công thức Zeller
int tinhThuTrongTuan(int d, int m_in, int y_in) {
    int a = (14 - m_in) / 12;
    int y = y_in - a;
    int m = m_in + 12 * a - 2;
    
    int dayofweek = (d + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
    return dayofweek;
}

int main() {
    int ngay, thang, nam;
    
    printf("Nhap ngay, thang va nam: ");
    if (scanf("%d %d %d", &ngay, &thang, &nam) != 3) {
        printf("Du lieu nhap khong hop le!\n");
        return 1;
    }
    
    if (kiemTraNgayThang(ngay, thang, nam)) {
        printf("Hop le\n");
        
        int thu = tinhThuTrongTuan(ngay, thang, nam);
        if (thu == 0) {
            printf("Chu nhat\n");
        } else {
            printf("Thu %d\n", thu + 1);
        }
    } else {
        printf("Khong hop le\n");
    }
    
    return 0;
}