#include <stdio.h>

int main(void)
{
	char name[100];
	char idno[15];

	printf("Please input your name:");
	fgets(name, sizeof(name), stdin);

	printf("Please input your identification number:");
	scanf("%s", idno);

	char sex = 'F';

	if (idno[6] == '-')
	{
		if (idno[7]=='1' || idno[7]=='3')
		{
			sex = 'M';
		}
	}
	else
	{
		if (idno[6]=='1' || idno[6]=='3')
		{
			sex = 'M';
		}
	}

	int i = 0;

	char sur[100];
	char given[100];
	for (; i<100; i++)
	{
		if (name[i] == ' ')
		{
			break;
		}
		given[i] = name[i];
	}

	i++;

	int j=0;
	for (; i<100; i++)
	{
		if (name[i]=='\0' || name[i]=='\n')
		{
			break;
		}
		sur[j++] = name[i];
	}

	printf(	"Surname   : %s\n"
			"Given name: %s\n"
			"Sex : %c\n",
			sur, given, sex);
}
