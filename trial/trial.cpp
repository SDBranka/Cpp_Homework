#include <iostream>
#include <string.h>
#include <stdlib.h>

int sumf(long int x)
{
	int s;
	for (s = 0; x > 0; s += x % 10, x /= 10)
		return s;
}

int main()
{
	long int sum = 0;
	int a[99], i, k;
	char s[99];

	cout << "\n Enter your name without spaces:";
	gets(s);
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			a[i] = s[i] + 32;
		else
			a[i] = s[i];
	}
	for (i = 0; i < strlen(s); i++)
	{
		if (a[i] < 97 || a[i] > 122)
		{
			cout << "\n Invalid Character Please Try again";
			goto l1;
		}
	}
	for (i = 0; s[i] != '\0'; i++)
		sum = sum + a[i] - 96;
	while (sum >= 10)
		sum = sumf(sum);
	k = sum;
	cout << "\n\n\n\n\n\t Your lucky number\n\n\t according to the name is : "
		<< sum;
	cout << "\n\n Enter your date of birth : ";
	cin >> sum;
	cout << "\n\n D.O.B : " << sum;
	while (sum >= 10)
		sum = sumf(sum);
	cout
		<< "\n\n\n\n\n\t Your lucky number\n\n\t according to the date of birth is : "
		<< sum;
	if (k == sum)
		cout << "\n\n\t You are the Luckiest Person";
	char ch;
	cout << "\n\n\n\t Do you want to continue...[Y/N]  :  ";
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
		goto l1;
	else
		exit(0);
}
