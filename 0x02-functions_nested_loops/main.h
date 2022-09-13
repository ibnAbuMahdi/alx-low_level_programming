int _putchar(char c);

void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;
	for (; i < 27; i++)
	{
		_putchar(c[i]);
	}
}
