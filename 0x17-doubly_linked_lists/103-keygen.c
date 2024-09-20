#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * find_max_char - Finds the char with highest ASCII value
 * @input: Input string to search
 * @size: Length of the input string
 *
 * Return: A derived value based on the maximum character
 */
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

/**
 * sum_of_squares - Calculates sum of squared ASCII values
 * @input: Input string to process
 * @size: Length of the input string
 *
 * Return: A derived value based on the sum of squares
 */
int sum_of_squares(char *input, int size)
{
	int sum = 0, i;

	for (i = 0; i < size; i++)
		sum += input[i] * input[i];
	return (((unsigned int)sum ^ 239) & 63);
}

/**
 * generate_random - Generates a pseudo-random number based on input
 * @input: Input string to use as seed
 *
 * Return: A derived random value
 */
int generate_random(char *input)
{
	int result = 0, i;

	for (i = 0; i < *input; i++)
		result = rand();
	return (((unsigned int)result ^ 229) & 63);
}

/**
 * main - Generates key based on username
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on failure
 */
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
