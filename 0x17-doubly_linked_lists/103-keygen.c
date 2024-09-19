#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Finds the char with highest ASCII value and returns a derived value */
int find_max_char(char *input, int size)
{
	int max, i;
	unsigned int result;

	max = *input;
	for (i = 0; i < size; i++)
	{
		if (max < input[i])
			max = input[i];
	}
	srand(max ^ 14);
	result = rand();
	return (result & 63);
}

/* Calculates sum of squared ASCII values and returns a derived value */
int sum_of_squares(char *input, int size)
{
	int sum = 0, i;

	for (i = 0; i < size; i++)
		sum += input[i] * input[i];
	return (((unsigned int)sum ^ 239) & 63);
}

/* Generates a pseudo-random number based on input */
int generate_random(char *input)
{
	int result = 0, i;

	for (i = 0; i < *input; i++)
		result = rand();
	return (((unsigned int)result ^ 229) & 63);
}

/* Main function: generates key based on username */
int main(int argc, char **argv)
{
	char key[7];
	int len, sum, i;
	long lookup[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850
	};

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}

	len = strlen(argv[1]);
	key[0] = ((char *)lookup)[(len ^ 59) & 63];

	for (sum = i = 0; i < len; i++)
		sum += argv[1][i];
	key[1] = ((char *)lookup)[(sum ^ 79) & 63];

	for (sum = 1, i = 0; i < len; i++)
		sum *= argv[1][i];
	key[2] = ((char *)lookup)[(sum ^ 85) & 63];

	key[3] = ((char *)lookup)[find_max_char(argv[1], len)];
	key[4] = ((char *)lookup)[sum_of_squares(argv[1], len)];
	key[5] = ((char *)lookup)[generate_random(argv[1])];
	key[6] = '\0';

	printf("%s\n", key);
	return (0);
}
