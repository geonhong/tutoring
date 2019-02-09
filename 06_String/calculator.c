#include "strmanip.h"

int runcal();

int main(void)
{
	while(runcal())
	{}
}

int runcal()
{
	char equation[100] = "";

	// Print prompt and get equation from user
	printf("> ");
	scanf("%s", equation);

	char *p;	// Pointer to string equation
	p = equation;

	// Return 0 if first character is 'x' or 'q'
	if (*p == 'x' || *p == 'q')
	{
		return 0;
	}

	// Index for equation string
	int size = getsize(equation);

	// Multi-dimensional array of strings
	// for storing the numbers
	char nostr[2][10] = {"", ""};
	char *np;	// Pointer to numbers
	np = nostr[0];

	// Start string loop
	char op;	// operator
	int is = 0;
	int in = 0;

	while (*p != '\0')
	{
		if 
		(
		 	*p == '+' || *p == '-' ||
		 	*p == '*' || *p == '/'
		)
		{
			// Get operator information
			op = *p;
			in++;
			np = nostr[1];
		}
		else
		{
			// Get number from equation to number array
			*np = *p;
			np++;
		}

		p++;
	}

	// Calculate the input data
	int ans = 0;
	switch (op){
		case '+' : ans = str2int(nostr[0]) + str2int(nostr[1]); break;
		case '-' : ans = str2int(nostr[0]) - str2int(nostr[1]); break;
		case '*' : ans = str2int(nostr[0]) * str2int(nostr[1]); break;
		case '/' : ans = str2int(nostr[0]) / str2int(nostr[1]); break;
	}

	printf("%d %c %d = %d\n", str2int(nostr[0]), op, str2int(nostr[1]), ans);

	return 1;
}
