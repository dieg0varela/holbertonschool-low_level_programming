/**
* _strlen - Entry point
* @s: Char array
*
* Description: Say the length of a string
* Return: The length
*/
int _strlen(const char *s)
{
	int length = 0;

	char flag = 0;

	while (!flag)
	{
		if (s[length] == '\0')
			flag = 1;
		else
			length++;
	}
	return (length);
}
