#include <stdio.h>

int main(){
	int temp, x, y;
	char c;

	scanf("%d", &temp);
	scanf("%d %c %d", &x, &c, &y);

	if(c == '+')
		if(x + y <= temp)
			printf("OK\n");
		else
			printf("OVERFLOW\n");
	else
		if(x * y <= temp)
			printf("OK\n");
		else
			printf("OVERFLOW\n");

	return 0;
}
