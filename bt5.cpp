#include <stdio.h>

int main() {
    
    float chieudai = 5.0;  
    float chieurong = 7.0;
    
  
    float chuVi = (chieudai + chieurong) * 2;      
    float dienTich = chieudai * chieurong; 

    //print  
    printf("chieu dai : %.2f\n", chieudai);
    printf("chieu rong : %.2f\n", chieurong);
    printf("Chu vi cua hinh chu nhat  la : %.2f\n", chuVi);
    printf("Dien tich cua hinh chu nhat la  : %.2f\n", dienTich);

    return 0;
}
