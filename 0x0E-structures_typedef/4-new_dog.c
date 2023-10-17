#include "dog.h"

/**
 * _strlen - string length
 * @s: string
 * Return: length
*/
int _strlen(char *s)
{
	int ln = 0;

	while (*s != '\0')
	{
		ln++;
		s++;
	}
	return (ln);
}

/**
 * _strdup - dublicate
 * @str: string
 * Return: pointer
*/
char *_strdup(char *str)
{
	int i = 0;
	char *dp;

	if (str == NULL)
		return (NULL);
	dp = (char *)malloc(sizeof(char) * (_strlen(str) + 1));
	if (dp == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dp[i] = str[i];
	dp[i] = str[i];
	return (dp);
}

/**
 * new_dog - store new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Ndog;

	if (!name || !owner || age < 0)
		return (NULL);

	Ndog = malloc(sizeof(dog_t));
	if (Ndog == NULL)
		return (NULL);

	Ndog->name = _strdup(name);
	if (Ndog->name == NULL)
	{
		free(Ndog);
		return (NULL);
	}

	Ndog->owner = _strdup(owner);
	if (Ndog->owner == NULL)
	{
		free(Ndog->name);
		free(Ndog);
		return (NULL);
	}
	Ndog->age = age;

	return (Ndog);
}
