//Khai bao thu vien (Library)
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//Khai bao bien (Variable)
int a, b, c, min;
short int language;
int main ()
{
    printf("To start program, please select one of languages\n");
    printf("1. English\n");
    printf("2. Tieng Viet\n");
    printf("Select your language to use: ");
    scanf("%hd", &language);
    system("clear");
    switch (language)
    {
        case 1:
        {
            printf("Please enter a integer number in each requestion below:\n"); 
            printf("First number = ");
            scanf("%d", &a);
            printf("Second number = ");
            scanf("%d", &b);
            printf("Third number = ");
            scanf("%d", &c);
            // Comparision
                    min=a;
                if (min>b) min=b;
                if (min>c) min=c;
            printf("Minimum value of smallest number you was enter %d\n",min);
            printf("====================================\n");
            printf("Copyright by Tuan Nguyen 62K1 - CNTT - Vinh University ");
            break;
        }
        case 2:
        {
            printf("Ban hay nhap mot so nguyen tuy y vao moi yeu cau phia duoi nhe!\n"); 
            printf("So thu nhat = ");
            scanf("%d", &a);
            printf("So thu hai = ");
            scanf("%d", &b);
            printf("So thu ba = ");
            scanf("%d", &c);
            // Thuc hien so sanh 3 so
                    min=a;
                if (min>b) min=b;
                if (min>c) min=c;
            printf("Gia tri cua so be nhat ban da nhap vao la %d\n",min);
            printf("====================================\n");
            printf("Ban quyen thuoc ve Tuan Nguyen 62K1 CNTT - Truong Dai hoc Vinh");
            break;
        }
        default:
        {
            printf("failed to start, please try again. (error: invaid language selection)");
        }
    }
    return 0;
}
