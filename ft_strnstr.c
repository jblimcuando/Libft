char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t st1;
	size_t st2;

	st1 = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[st1] != '\0')
	{
		st2 = 0;
		while (s1[st1 + st2] == s2[st2] && (st1 + st2) < n)
		{
			if (s1[st1 + st2] == '\0' && s2[st2] == '\0')
				return ((char *)&s1[st1]);
			st2++;
		}
		if (s2[st2] == '\0')
			return ((char *)s1 + st1);
		st1++;
	}
	return (0);
}
