#include <stdio.h>

int main() {
    
    const float PI = 3.14;
    
   
    float banKinh = 9.0;  
    
    
    float chuVi = 2 * PI * banKinh;  
    float dienTich = PI * banKinh * banKinh;
    
    
    printf("Ban kinh : %.2f\n", banKinh);
    printf("Chu vi hinh tron : %.2f\n", chuVi);
    printf("Dien tich hinh tron : %.2f\n", dienTich);
    
    return 0;
}

