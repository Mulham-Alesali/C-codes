#include "header.h"
#include <stdbool.h>
#include <stdio.h>



//return the length of the string
int stringLength(const char * str) {
	int l = 0, i = 0;
	while (str[i] > '\0')
	{
		l++;
		i++;
	}

	return l;
}

int s2n(char str[], int* a, int* b, int* e)
{
	//select the last char
	int lindex = stringLength(str) - 1;;

	//if the last char == $ then Dollar else if "" o then Euro
	if (str[lindex] == '$')
	{
		*e = 1;
		//select the first digit from the right side
		lindex--;
	}
	else if (str[lindex] == 'o') {
		*e = 2;
		//select the first digit from the right side
		lindex -= 4;
	}
	else {
		//otherwise it the format is false => exit
		return 0;
	}
	//get the second digit after the comma
	*b = str[lindex] - '0';
	lindex--;
	//get the first digit after the comma
	*b += ((str[lindex] - '0') * 10);
	lindex -= 2;

	//read the digits before the comma
	int t = 1;
	*a = 0;
	while (lindex >= 0)
	{
		*a += ((str[lindex] - '0') * t);
		t *= 10;
		lindex--;
	}

	return 1;
}

