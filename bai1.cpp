#include <stdio.h>
int main(){
	char name[50]; 
	
	printf("Vui long nhap ten cua ban: ");
	scanf("%49[^\n]", &name);
	
	printf("Xin chao %s\n",name);
	
	 return 0; 
}
