int rand()
{
	static int i = 0;

	if (i == 0)
	{
		i++;
		return 8;
	}
	if (i == 1)
	{
		i++;
		return 8;
	}
	if (i == 2)
	{
		i++;
		return 7;
	}
	if (i == 3)
	{
		i++;
		return 9;
	}
	if (i == 4)
	{
		i++;
		return 23;
	}
	if (i == 5)
	{
		i++;
		return 74;
	}
	return (8);
}
