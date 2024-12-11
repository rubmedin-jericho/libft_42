#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while(s[i])
	{
		if(c == str[i])
		{
			str = &str[i];
			return (str);
		}
		i++;
	}
	return (str);
}
