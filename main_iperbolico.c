#include <stdio.h>

int main()
{
	char stringa[32];
	
	for (int i = 0 ; i < sizeof(stringa) / sizeof(char); i++)
	{
			if (i == 0)
				stringa[i] = 'C';
			if (i == 1 || i == 6)
				stringa[i] = 'i';
			if (i == 2)
				stringa[i] = 'a';
			if (i == 3 || i == 7 || i == 10 || i == 12 || i == 22 || i == 27)
				stringa[i] = 'o';
			if (i == 4)
				stringa[i] = ',';
			if (i == 5 || i == 7 || i == 11 || i == 13 || i == 28)
				stringa[i] = ' ';
			if (i == 9 || i == 26 || i == 25)
				stringa[i] = 's';
	}
	
	printf(stringa); //unaaaaa
	return 0;
}
