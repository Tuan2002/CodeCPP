//Khai bao thu vien
#include <stdio.h>
#include <math.h>
//Khai bao bien
float a, b, cv, dt;
int main()
{
    //Nhap so lieu
    printf("Xin hay nhap chieu dai cua hinh chu nhat ");
    scanf("%f", &a);
    printf("Xin hay nhap chieu rong cua hinh chu nhat ");
    scanf("%f", &b);
    //Tinh chu vi
    cv = (a+b)*2;
    printf("Chu vi cua hinh chu nhat co chieu dai = %f va chieu rong = %f la %.2f\n",a ,b ,cv);
    //Tinh dien tich
    dt = a*b;
    printf("Dien tich cua hinh chu nhat co chieu dai = %f va chieu rong = %f la %.2f\n",a ,b ,dt);
    return 0;
}