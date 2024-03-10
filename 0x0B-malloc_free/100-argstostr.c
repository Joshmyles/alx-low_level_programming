#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: The array of arguments
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j;
int total_length = 0;
int index = 0;
char *concatenated_str;

/* Check if ac == 0 or av == NULL */
if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
total_length++;
j++;
}
total_length++; /* For newline character */
}
/* Allocate memory for the concatenated string */
concatenated_str = (char *)malloc((total_length + 1) * sizeof(char));
if (concatenated_str == NULL)
return (NULL);
/* Concatenate the arguments into the string */
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
concatenated_str[index] = av[i][j];
index++;
j++;
}
concatenated_str[index] = '\n'; /* Add newline character */
index++;
}
concatenated_str[index] = '\0'; /* Add null terminator */
return (concatenated_str);
}
