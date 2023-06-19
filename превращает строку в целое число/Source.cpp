/* ���������� ������ � ����� ����� � �������� � ��������� */
int stoi(char string[], int* intptr)
{
	int sign = 1; /* ��������� ������� ����� + ��� - */
	int index = 0;
	if (string[index] == '-' || string[index] == '+')
		sign = (string[index++] == '-') ? -1 : 1; /* ���������� ���� */
	*intptr = 0; /* ��������� �������� */
	while (string[index] >= '0' && string[index] <= '9')
		*intptr = 10 * (*intptr) + string[index++] - '0';
	if (string[index] == '\0')
	{
		*intptr = sign * (*intptr);
		return(YESNUM);
	}
	else /* ������ ������, �������� �� �����, ����� ��� ' \0' */
		return(NONUM);
}


