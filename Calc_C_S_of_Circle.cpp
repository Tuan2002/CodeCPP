//Khai bao thu vien (Library)
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
//Khai bao bien (Variable)
float r, c, s;
short int language;
//Khai bao hang (Const)
const float PI = 3.1415926;

int main()
{
        printf("To start program, please select one of the following languages\n");
        printf("1. English\n");
        printf("2. Tieng Viet\n");
        printf("Select your language to use: ");
        scanf("%hd", &language);
        system("clear");
    //Main code
    switch (language)
    {
        case 1:
        {
            //Input data
            printf("Enter radius ");
            scanf("%f", &r);
            //The Circumference
            c = 2*r*PI;
            printf("The Circumference of circle with radius = %f is %.2f\n",r ,c);
            //The Area
            s = r*r*PI;
            printf("The Area of circle with radius = %f is %.2f\n",r ,s);
            break;
        }
        case 2:
        {
            //Nhap du lieu
            printf("Xin hay nhap ban kinh ");
            scanf("%f", &r);
            //Tinh chu vi
            c = 2*r*PI;
            printf("Chu vi cua duong tron ban kinh = %.2f la %.2f\n",r ,c);
            //Tinh dien tich
            s = r*r*PI;
            printf("Dien tich cua duong tron ban kinh = %.2f la %.2f\n",r ,s);
            break;
        }
        default:
        {
            printf("failed to start, please try again. (error: invaid language selection)");
        }

    }
    return 0;
}
