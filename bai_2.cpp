// Khai báo thư viện
#include <stdio.h>  // đây là thư viện chứa các hàm nhập xuất
#include <math.h>   // đây là thư viện chứa các hàm tính toán
int main() {                    // Hàm chính của chương trình
float  xA, yA, xB, yB;                          // khai báo các biến xA, yA, xB, yB kiểu float để lưu tọa độ của hai điểm A và B
printf( "A(xA, yA)? " );      // in ra màn hình yêu cầu người dùng nhập tọa độ của điểm A
scanf  ( "%f%f", &xA, &yA );        // đọc giá trị tọa độ của điểm A từ bàn phím và lưu vào các biến xA, yA
printf( "B(xB, yB)? " );        // in ra màn hình yêu cầu người dùng nhập tọa độ của điểm B
scanf  ( "%f%f", &xB, &yB );  // đọc giá trị tọa độ của điểm B từ bàn phím và lưu vào các biến xB, yB
printf( "|AB| = %g\n",// tính khoảng cách giữa hai điểm A và B và in ra màn hình
sqrt( ( xB - xA ) * ( xB - xA ) + ( yB - yA ) * ( yB - yA ) ) );// tính khoảng cách giữa hai điểm A và B bằng công thức khoảng cách Euclid và in ra màn hình
return 0;  // trả về 0 để báo hiệu chương trình kết thúc thành công
}