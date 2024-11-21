#include <stdio.h>

int main() {
    float canhday, chieucao, dientich;

    printf("Nhap do dai canh day: ");
    scanf("%f", &canhday);

    printf("Nhap chieu cao: ");
    scanf("%f", &chieucao);

    dientich = (canhday * chieucao) / 2;

    printf("Dien tich tam giac la: %.2f\n", dientich);

    return 0;
}

