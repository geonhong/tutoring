#include <stdio.h>

int main(void)
{
	char idno[15] = {};

	printf("Your ID Number?");
	scanf("%s", idno);

	// Get year information
	int year = (idno[0]-48)*10 + (idno[1]-48);

	if (year>20)
	{
		year = 1900 + year;
	}
	else
	{
		year = 2000 + year;
	}

	// Get month information
	int month = (idno[2]-48)*10 + (idno[3]-48);

	// Get day information
	int day = (idno[4]-48)*10 + (idno[5]-48);

	// Identify gender
	int genderAt = 7;
	if (idno[6] == '-')
	{
		genderAt = 8;
	}

	// Print out results
	printf(	"Year : %d\n"
			"Month: %d\n"
			"Day  : %d\n",
			year, month, day);
	printf("dd/mm/yyyy: %d/%d/%d\n", day, month, year);

	// Print out the gender
	if (idno[genderAt]=='1' || idno[genderAt]=='3')
	{
		printf("Gender: male\n");
	}
	else if (idno[genderAt]=='2' || idno[genderAt] == '4')
	{
		printf("Gender: female\n");
	}
	else
	{
		printf("*** Wrong ID number ***\n");
	}
}

