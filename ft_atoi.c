int		ft_atoi(const char *str)
{
	int i;
	int status;
	int result;

	i = 0;
	status = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		status = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + (str[i++] - '0');
	if (i >= 20)
	{
		if (status == 1)
			return (-1);
		else if (status == -1)
			return (0);
	}
	return (result * status);
}
