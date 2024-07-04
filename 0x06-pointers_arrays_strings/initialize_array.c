/**
 * initialize_array - initialize an array with a specific character
 * @arr: The array to initialize
 * @size: The size of the array
 * @c: The character to fill the array with
 */
void initialize_array(char *arr, int size, char c)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		arr[i] = c;
	}
	arr[size - 1] = '\0';
}
