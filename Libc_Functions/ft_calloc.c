void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*st;

	tot_size = size * count;
	if(!(st = malloc(tot_size)))
		return (0);
	ft_memset(st, 0 , tot_size);
	return (st);
}
