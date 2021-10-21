//Khai bao thu vien
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include <unistd.h>
//Khai bao bien
int a, b, c;
float Delta, X1, X2;
char Option;
//Chuong trinh chinh
    int main() 
{
        printf("Hay nhap he so cho phuong trinh \n");
        printf("He so a: "); scanf("%d", &a);
    //Kiem tra dieu kien can cua phuong trinh bac 2
    if (a != 0)
    {
        printf("He so b: "); scanf("%d", &b);
        printf("He so c: "); scanf("%d", &c);
        system("clear");
        printf("Phuong trinh bac hai can giai la: (%dx2) + (%dx) + (%d) = 0\n",a,b,c);
        printf("Neu dung, nhap (Y) de tiep tuc. Neu sai, nhap (N) de huy: ");
        scanf("%s", &Option);
            switch (Option)
        {
            case 'Y': case 'y':
            {
                //Kiem tra dieu kien co nghiem cua phuong trinh
                Delta=(b*b)-(4*a*c);
                if (Delta > 0)
                {
                    X1= (-b-sqrt(Delta))/(2*a);
                    X2= (-b+sqrt(Delta))/(2*a);
                    printf("=========================================\n");
                    printf("Phuong trinh co hai nghiem phan biet: \n");
                    printf("X1 = %.2f, X2 = %.2f\n", X1, X2);
                }
                else if (Delta < 0)
                {
                    printf("=========================================\n");
                    printf("Phuong trinh khong co nghiem hoac co vo so nghiem \n");
                }
                else
                {
                    X1=X2= (-b)/(2*a);
                    printf("=========================================\n");
                    printf("Phuong trinh co mot nghiem kep: X1 = X2 = %.2f\n", X1);
                }

                break;
            }
            case 'N': case 'n':
            {
                printf("=========================================\n");
                printf("Ban hay nhap lai phuong trinh cho chinh xac nhe! \n");
                break;
            }
            default:
            {
                printf("=========================================\n");
                printf("Khong the xac minh phuong trinh, vui long thu lai sau \n");
            }
        }
    }
    else
    printf("Loi phuong trinh, he so a trong PTB2 phai khac 0 \n");
    printf("=========================================\n");
    printf("Ban quyen thuoc ve Tuan Nguyen 62K1 - CNTT - Truong Dai hoc Vinh ");
    return 0;
}
