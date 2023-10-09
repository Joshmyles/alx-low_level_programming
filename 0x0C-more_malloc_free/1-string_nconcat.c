#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = (s1 != NULL) ? strlen(s1) : 0;
    unsigned int len2 = (s2 != NULL) ? strlen(s2) : 0;
    
    if (n >= len2)
        n = len2; // Use the entire s2 if n is greater than or equal to its length
    
    char *result = malloc(len1 + n + 1); // +1 for the null terminator
    
    if (result == NULL)
        return NULL; // Allocation failed
    
    if (s1 != NULL)
        strcpy(result, s1);
    else
        result[0] = '\0'; // Empty string
    
    strncat(result, s2, n);
    
    return result;
}
