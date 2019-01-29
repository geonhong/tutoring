#include <stdio.h>

int main(void)
{
	char fullname[] = "GEONHONG KIM";

	char surname[10] = {};
	char givname[10] = {};

	int i=0;

	for (i=0; i<20; i++)
	{
		if (fullname[i] == ' ')
		{
			break;
		}
		else
		{
			givname[i] = fullname[i];
		}
	}

	int j=0;
	i++;

	for (;i<20; i++)
	{
		if (fullname[i] == '\0')
		{
			break;
		}
		else
		{
			surname[j++] = fullname[i];
		}
	}

	printf(	"Surname: %s\n"
			"Given name: %s\n",
			surname, givname);
}
