#include <stdio.h>

int main() {
    int so, tongchuso;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);

    tongchuso = (so / 1000) + ((so / 100) % 10) + ((so / 10) % 10) + (so % 10);

    printf("Tong cac chu so cua %d la: %d\n", so, tongchuso);

    return 0;
}

