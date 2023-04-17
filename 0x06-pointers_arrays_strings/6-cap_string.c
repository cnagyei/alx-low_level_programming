#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str - string
 *
 * Return: pointer to the string
 */
char *cap_string(char *str)
{
	char *p = str;
	int len;

	/* determine length of str */
	while (*p != '\0')
		p++;
	len = p - str;

	/* check firt letter */
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;

	/* loop through the string to the null byte */
	while (*str != '\0')
	{
		/* check for separators */
		if (*str == ' ' || *str == '\t' || *str  == '\n' || 
				*str == ',' || *str == ';' || *str == '.' ||
				*str == '?' || *str == '"' || *str == '(' ||
				*str == ')' || *str == '{' || *str == '}' ||
				*str == '!')
			/* 
			 * if separator, check the next character for 
			 * lowercase and convert
			 */
			if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
				*(str + 1) -= 32;
		str++;
	}
	/* move str to first element and return it */
	str -= len;
	return (str);
}
