#include "header.h"
#include <stdbool.h>
int strcomp(const char * string1, const char * string2)
{

	lower_string(string1);
	lower_string(string2);

	printf("\string1: %s", string1);
	printf("\string2: %s", string2);

	bool b = true;
	//int i = 0;
	int result = 0;

	while (b) {
		//i++;
		//printf("\n%i c1: %c\t c2:%c", i, *string1, *string2);
		//printf("\n %c", *string1);
		//printf("\n %c", *string2);


		result = *string1 - *string2;
		if (result != 0) {
			b = 0;
		}
		
			//if (*string1 > *string2)
			//{
			//	b = false;
			//	result = 1;
			//}
		
			//if (*string2 > *string1)
			//{
			////	printf("\n%i c1: %c\t c2:%c", i, *string1, *string2);
			//	b = false;
			//	result = 2;
			//}

		if (*string1 >= 'a' - 1 & *string2 >= 'a' - 1) {
		string1++;
		string2++;
		}
		else {
			b = false;
		}

		
	/*	else
		{

			b = false;
			result = 0;
		}*/
	}

	printf("\n c1: %i\t c2:%i\n", *string1, *string2);
	return result;

}


void upper_string(char s[]) {
	int c = 0;

	while (s[c] != '\0') {
		if (s[c] >= 'a' && s[c] <= 'z') {
			s[c] = s[c] - 32;
		}
		c++;
	}
}


void lower_string(char s[]) {
	int c = 0;

	while (s[c] != '\0') {
		if (s[c] >= 'A' && s[c] <= 'Z') {
			s[c] = s[c] + 32;
		}
		c++;
	}
}
