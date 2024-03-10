#include <stdlib.h>
#include <stdio.h>

/**
 * is_space - function
 * @c: input
 * Return: count
 */
int is_space(char c)
{
return (c == ' ');
}

/**
 * count_words - function
 * @str: input
 * Return: count
 */
int count_words(char *str)
{
int count = 0;
int in_word = 0;
while (*str)
{
if (is_space(*str))
{
in_word = 0;
}
else if (!in_word)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}

/**
 * strtow - function
 * @str: input pointer
 * Return: NULL
 */
char **strtow(char *str)
{
int num_words, word_length, i, word_index, in_word;
char **words;
char *start;
if (str == NULL || *str == '\0')
return (NULL);

num_words = count_words(str);
words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

word_index = 0;
in_word = 0;
start = str;

while (*str)
{
if (is_space(*str))
{
if (in_word)
{
word_length = str - start;
words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[word_index] == NULL)
{
for (i = 0; i < word_index; i++)
free(words[i]);
free(words);
return (NULL);
}
for (i = 0; i < word_length; i++)
words[word_index][i] = start[i];
words[word_index][word_length] = '\0';
word_index++;
in_word = 0;
}
}
else if (!in_word)
{
start = str;
in_word = 1;
}
str++;
}
if (in_word)
{
word_length = str - start;
words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[word_index] == NULL)
{
for (i = 0; i < word_index; i++)
free(words[i]);
free(words);
return (NULL);
}
for (i = 0; i < word_length; i++)
words[word_index][i] = start[i];
words[word_index][word_length] = '\0';
word_index++;
}
words[word_index] = NULL;
return (words);
}
