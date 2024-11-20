#include <stdio.h>

int main() {
    // Khai báo và khởi tạo biến kiểu int
    int soNguyen = 5;   // Kiểu int lưu trữ giá trị số nguyên,
    printf("soNguyen = %d\n", soNguyen);  // In giá trị biến soNguyen

    // Khai báo và khởi tạo biến kiểu float
    float soThuc = 3.14f;   // Kiểu float lưu trữ số thực (thập phân)
    printf("soThuc = %.2f\n", soThuc);  // In giá trị biến soThuc với 2 chữ số thập phân

    // Khai báo và khởi tạo biến kiểu double
    double soThucChinhXac = 3.14159265359;  // Kiểu double cho số thực với độ chính xác cao hơn float
    printf("soThucChinhXac = %.10lf\n", soThucChinhXac);  // In giá trị biến soThucChinhXac

    // Khai báo và khởi tạo biến kiểu char
    char kyTu = 'A';  // Kiểu char lưu trữ một ký tự duy nhất, 
    printf("kyTu = %c\n", kyTu);  // In giá trị của ký tự kyTu

  
    return 0;
}
