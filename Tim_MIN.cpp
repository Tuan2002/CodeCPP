//Khai bao thu vien
#include <stdio.h>
#include <math.h>
//Khai bao bien
int a, b, c, min=0;
int main () 
{
    printf("Ban hay nhap mot so nguyen tuy y vao nhung tuy chon phia duoi nhe!\n"); 
    printf("So thu nhat = ");
    scanf("%d", &a);
    printf("So thu hai = ");
    scanf("%d", &b);
    printf("So thu ba = ");
    scanf("%d", &c);
    // Thuc hien so sanh 3 so
            if (a<b) min=a;
        else if (b<c) min=b;
    else min=c;
    printf("Gia tri cua so be nhat la %d\n",min);
    printf("====================================\n");
    printf("Copyright by Tuan Nguyen 62K1 CNTT ");
    return 0;
}
