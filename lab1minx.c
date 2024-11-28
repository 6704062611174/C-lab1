#include <stdio.h>

int main() {
	int n1;
	int n2;
	scanf("%d", &n1);
	scanf("%d", &n2);
	if (n1 > n2){
		printf("n1 is n2 more than %d",n1 - n2);
	}
	else{
		printf("n2 is n1 more than %d",n2 - n1);
	}
}


