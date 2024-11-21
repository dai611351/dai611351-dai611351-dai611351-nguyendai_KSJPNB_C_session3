#include <stdio.h>

int main() {
    float r, chuvi, dientich;
	
	const float PI = 3.14;

    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);

    chuvi = 2 * PI * r; 
    dientich = PI * r * r; 

    printf("Chu vi hinh tron: %.2f\n", chuvi);
    printf("Dien tich hinh tron: %.2f\n", dientich);

    return 0;
}
