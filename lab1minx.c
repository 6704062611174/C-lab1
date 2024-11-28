#include <stdio.h>

int main() {
	int n1;
	int n2;
	printf("input num1 and num2: ");
	scanf("%d %d", &n1,&n2);
	if (n1 > n2){
		printf("n1 is n2 more than %d",n1 - n2);
	}
	else{
		printf("n2 is n1 more than %d",n2 - n1);
	}
}


