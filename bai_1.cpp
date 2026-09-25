// khai báo thư viện
#include <stdio.h>  // đây là thư viện chứa các hàm nhập xuất
#include <math.h>   // đây là thư viện chứa các hàm tính toán

int main() {        // Hàm chính của chương trình
    double S;                                                                    // khai báo biến S kiểu double để lưu diện tích
    printf("Nhap dien tich S: ");                                                // in ra màn hình yêu cầu người dùng nhập diện tích
    scanf ("%lf", &S);                                                           // đọc giá trị diện tích từ bàn phím và lưu vào biến S
    printf("The tich V = %g\n", (4 * M_PI * pow(sqrt(S / (4 * M_PI)), 3)) / 3);  // tính thể tích V của hình cầu từ diện tích S và in ra màn hình
    return 0;                                                                    // trả về 0 để báo hiệu chương trình kết thúc thành công
}