	#include <unistd.h>

	void ft_putchar(char c) {
		write(1, &c, 1);
	}

	void ft_print_alphabet(void) {
		int 	count;

		count = 0;
		while ( count < 26)
		{
		    ft_putchar((char)(97 + count));
			count++;
		 }
	}
	int		main(void) {
		 ft_print_alphabet();
		 return(0);
	}
