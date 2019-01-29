#include <stdio.h>

int main(void)
{
	char str[20] = "Sorting is easy";

	do
	{
		int sorted = 1;

		int i=0;
		for(;i<19;i++)
		{
			if (str[i+1]=='\0')
			{
				break;
			}

			if (str[i]>str[i+1])
			{
				char tmp = str[i+1];
				str[i+1] = str[i];
				str[i] = tmp;
				sorted = 0;
				break;
			}
		}

		if (sorted)
		{
			break;
		}
	} while (1);

	printf("%s\n", str);
}
