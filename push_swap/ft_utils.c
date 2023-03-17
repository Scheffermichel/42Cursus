#include "push_swap.h"

int	ft_atoimod(const char *nptr)
{
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	while (*nptr == '\f' || *nptr == ' ' || *nptr == '\r'
		|| *nptr == '\n' || *nptr == '\t' || *nptr == '\v')
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			sign *= -1;
		}
		nptr++;
	}	
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - '0';
		nptr++;
	}
	if ((res*sign) > 2147483647 || (res*sign) < -2147483647)
		ft_error();
	return (res * sign);
}
