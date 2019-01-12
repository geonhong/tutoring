#include <stdio.h>

int main(void)
{
	printf("hello, world!\n");

	int i = 100;
	int j = 99;

	int sum_i_j = i+j;
	int sub_i_j = i-j;
	int mul_i_j = i*j;
	int div_i_j = i/j;

	printf("%d\t%d\t%d\t%d\n", sum_i_j, sub_i_j, mul_i_j, div_i_j);

	printf("What happen if we write the above code like this:\n");
	printf("%d\t%d\t%d\t%d\n", &sum_i_j, &sub_i_j, &mul_i_j, &div_i_j);
	printf("%x\t%x\t%x\t%x\n", &sum_i_j, &sub_i_j, &mul_i_j, &div_i_j);

	// int a = 1235678901234567890;
	// printf("What happend to %d ?\n", a);
}
