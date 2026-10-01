#include <iostream>
int main() {
    int a,b,c;
    std::cout << "Nhap a, b, c: ";
    std::cin >> a >> b >> c;
    // Dãy theo thứ tự tăng dần
    if (a<b && b<c) {std::cout << "\nDay theo thu tu tang dan la: " << a << " " << b << " " << c;}
    else if (a<c && c<b) {std::cout << "\nDay theo thu tu tang dan la: " << a << " " << c << " " << b;}
    else if (b<a && a<c) {std::cout << "\nDay theo thu tu tang dan la: " << b << " " << a << " " << c;}
    else if (b<c && c<a) {std::cout << "\nDay theo thu tu tang dan la: " << b << " " << c << " " << a;}
    else if (c<a && a<b) {std::cout << "\nDay theo thu tu tang dan la: " << c << " " << a << " " << b;}
    else {std::cout << "\nDay theo thu tu tang dan la: " << c << " " << b << " " << a;}
    return 0;
}