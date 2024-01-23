#include "../../../includes/aferron.h"

long long int my_atoi(char *str) {
	int	i = 0;
	int	n = 0;
	int	a = 0;
	while (str[i] == 32 || str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12 || str[i] == 13)
		i++;
	while (str[i] == 43 || str[i] == 45) {
		if (str[i] == '-')
			n++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57) {
		a = a * 10 + str[i] - 48;
		i++;
	}
	if (n % 2 == 1)
		a = -a;
	return (a);
}