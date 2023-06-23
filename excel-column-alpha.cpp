
#include <bits/stdc++.h>
#define max 50
using namespace std;

void printString(int n)
{
	char str[max];
	int i = 0;

	while (n > 0) {
		int rem = n % 26;

		if (rem == 0) {
			str[i++] = 'Z';
			n = (n / 26) - 1;
		}
		else
		{
			str[i++] = (rem - 1) + 'A';
			n = n / 26;
		}
	}
	str[i] = '\0';

	reverse(str, str + strlen(str));
	cout << str << endl;

	return;
}

int main()
{
int val;
cout<<"enter a value to convert : ";
cin>>val;
printString(val);
}
