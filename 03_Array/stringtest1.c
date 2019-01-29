#include <stdio.h>

int main(void)
{
	char fullname[40];

	printf("Please input your full name(Surname + Givname):");
	scanf("%s", fullname);

	int i = 0;
	int j = 0;

	char surname[40] = {};
	char givname[40] = {};

	printf("%s\n", fullname);

	// Divide the full name into surname and given name
	for(i=0; i<40; i++)
	{
		if (fullname[i] == ' ')
		{
			j = i+1;
			break;
		}
		surname[i] = fullname[i];
	}

	printf("%d\t%d]n", i, j);

	for(i=0; i<20; i++)
	{
		printf("%s\n", fullname[i+j]);
		if (fullname[i+j] == '\0')
		{
			break;
		}
		givname[i] = fullname[i+j];
	}

	printf(	"Surname: %s\n"
			"Given name: %s\n",
			surname, givname);
}
