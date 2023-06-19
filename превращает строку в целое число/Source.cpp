/* превращает строку в целое число и сообщает о состоянии */
int stoi(char string[], int* intptr)
{
	int sign = 1; /* проверяет наличие знака + или - */
	int index = 0;
	if (string[index] == '-' || string[index] == '+')
		sign = (string[index++] == '-') ? -1 : 1; /* установить знак */
	*intptr = 0; /* начальное значение */
	while (string[index] >= '0' && string[index] <= '9')
		*intptr = 10 * (*intptr) + string[index++] - '0';
	if (string[index] == '\0')
	{
		*intptr = sign * (*intptr);
		return(YESNUM);
	}
	else /* найден символ, отличный от цифры, знака или ' \0' */
		return(NONUM);
}


