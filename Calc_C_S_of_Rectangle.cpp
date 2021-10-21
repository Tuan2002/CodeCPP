//Khai bao thu vien
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
//Khai bao bien
float a, b, c, s;
short int language;
int main()
{
        printf("To start program, please select one of the following languages\n");
        printf("1. English\n");
        printf("2. Tieng Viet\n");
        printf("Select your language to use: ");
        scanf("%hd", &language);
        system("clear");

    switch (language)
    {
        case 1:
        {
            //input data
            printf("Enter the height of rectangle = ");
            scanf("%f", &a);
            printf("Enter the width of rectangle = ");
            scanf("%f", &b);
            //The Circumference
            c = (a+b)*2;
            printf("The Circumference of rectangle with height = %f and width = %f is %.2f\n",a ,b ,c);
            //Area
            s = a*b;
            printf("The Area of rectangle with height = %f and width = %f is %.2f\n",a ,b ,s);
            break;
        }
        case 2:
        {
            //Nhap so lieu
            printf("Xin hay nhap chieu dai cua hinh chu nhat ");
            scanf("%f", &a);
            printf("Xin hay nhap chieu rong cua hinh chu nhat ");
            scanf("%f", &b);
            //Tinh chu vi
            c = (a+b)*2;
            printf("Chu vi cua hinh chu nhat co chieu dai = %f va chieu rong = %f la %.2f\n",a ,b ,c);
            //Tinh dien tich
            s = a*b;
            printf("Dien tich cua hinh chu nhat co chieu dai = %f va chieu rong = %f la %.2f\n",a ,b ,s);
            break;
        }
                default:
        {
            printf("failed to start, please try again. (error: invaid language selection)");
        }
    }
return 0;
}
