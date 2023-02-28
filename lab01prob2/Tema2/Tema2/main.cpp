#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream fin("date.in.txt");
	string s;
	int len, i = 0;

	if (fin.is_open())
	{
		while (fin)
		{
			getline(fin, s);
		}
	}
	else
	{
		cout << "Error! File not opened!\n";
	}
	len = s.size();

	for (; i < len; ++i)
	{
		if (ispunct(s[i]))
		{
			s.erase(i--, 1);
			len = s.size();
		}
	}

	cout << s << endl;

	for (i = 0; i < s.length(); ++i)
	{
		if (isdigit(s[i]))
		{
			s.erase(i--, 1);
			len = s.size();
		}
	}

	cout << s << endl;

	return 0;
}