char	*ft_strrchr(const char *s, int c)
{
	int	i;
	const char *in;

	*in = s;
	i = ft_strlen(s);
	s = s + i;
	while (*s != *in && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
