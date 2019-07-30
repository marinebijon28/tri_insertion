#include <unistd.h>
#include <stdio.h>

void	show_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
		printf("%d\n", tab[i++]);
}

void	swap(int *a, int *b)
{
	int	c;
	
	c = *a;
	*a = *b;
	*b = c;
}

void	tri_insertion(int *tab, int size)
{
	int	i;
	int 	j;

	i = 0;
	while (i < (size - 1))
	{
		j = i;
		while (tab[j] > tab[j + 1] && j < (size - 1))
		{
			swap(&tab[j], &tab[j + 1]);
			j++;
		}
		j = i;
		while (tab[j] < tab[j - 1] && (j > 0))
		{
			swap(&tab[j], & (tab[j - 1]));
			j--;
		}
		i++;
	}
	show_tab(tab, size);
}

int	main()
{
	int *tab;

	if ((tab = (int *)malloc(sizeof(int) * 6)) == NULL)
		return (0);
	tab[0] = 5;
	tab[1] = 2;
	tab[2] = 4;
	tab[3] = 6;
	tab[4] = 1;
	tab[5] = 3;
	tri_insertion(tab, 6);
}
