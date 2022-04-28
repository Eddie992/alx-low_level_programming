int wildmode(char *s1, char *s2);

/**
 * exactmode - Goes to end of found substring
 *
 * @s1: non-wildcarded string we're checking for matches
 * @s2: wildcarded string we're checking the substring from
 *
 * Return: continue wild mode at end of substring if
 * substring found, 0 otherwise
 */
int exactmode(char *s1, char *s2)
{
	if (*s2 == '*')
		return (wildmode(s1, s2 + 1));
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == *s2)
		return (exactmode(s1 + 1, s2 + 1));
	return (0);
}

int wildmode(char *s1, char *s2)
{
	if (*s2 == '*')
		return (wildmode(s1, s2 + 1));
	if (*s2 == 0)
		return (1);
	if (*s1 == 0)
		return (0);
	if (*s1 != *s2)
		return (wildmode(s1 + 1, s2));
	if (!(exactmode(s1 + 1, s2 + 1)))
		return (wildmode(s1 + 1, s2));
	return (1);
}

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (wildmode(s1, s2));
	return (exactmode(s1, s2));
}
