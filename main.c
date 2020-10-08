#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n)
{
	
	int i;
	int res = 1;
	
	for (i=1; i<=n; i++)
		res = res*i;
	
	return res;
}

int combination(int n, int r)
{
	int n1, n2, n3;
	
	n1 = factorial(n);
	n2 = factorial(n-r);
	n3 = factorial(r);
	
		
	return (n1/n2/n3);	
}


int get_integer()
{
	int x; 
	printf("분모 분자 입력 : ");
	scanf("%i", &x);
	return x;
}
int main(int argc, char *argv[]) {
	
	int n;
	int r;
	int result;
	
	n = get_integer();
	
	r = get_integer();
	
	result = combination(n,r);
	
	printf("combination result is %i\n", result);
	
	return 0;
}
