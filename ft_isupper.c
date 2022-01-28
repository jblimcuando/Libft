int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 32);
	return (0);
}
