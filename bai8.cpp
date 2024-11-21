#include <stdio.h>

int main() {
    int so, nghichdao = 0;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);

    nghichdao = (so % 10) * 1000 + ((so / 10) % 10) * 100 + ((so / 100) % 10) * 10 + (so / 1000);

    printf("So nghich dao cua so da nhap la: %d\n", nghichdao);

    return 0;
}

