//Khai bao thu vien
#include <stdio.h>
#include <math.h>
//Khai bao bien
float r, cv, dt;
//Khai bao hang
const float PI = 3.14;
int main()
{
    //Nhap du lieu
    printf("Xin hay nhap ban kinh ");
    scanf("%f", &r);
    //Tinh chu vi
    cv = 2*r*PI;
    printf("Chu vi cua duong tron ban kinh = %f la %.2f\n",r ,cv);
    //Tinh dien tich
    dt = r*r*PI;
    printf("Dien tich cua duong tron ban kinh = %f la %.2f\n",r ,dt);
    return 0;
}