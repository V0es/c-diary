
/*
#include <iostream>
#include <string>
#include <algorithm>
int find_psu(string str, int pos)
{	
	string temp = "PSU";
	int num = 0;
	bool flag;
	if (pos == 1)
		pos = 2;
	for (int i = pos; i >= pos - 2; i--)
	{
		flag = true;
		for (int j = 0; j < (int)temp.length(); j++)
		{
			if (str[j + i] != temp[j])
				flag = false;		
		}
		if (flag)
			num += 1;
	}

	return num;

}
int find_psu(string str, bool first)
{
	string temp = "PSU";
	int num = 0;
	bool flag;
	for (int i = 0; i < (int)str.length() - 2; i++)
	{
		flag = true;
		for (int j = 0; j < (int)temp.length(); j++)
		{
			if (str[j + i] != temp[j])
				flag = false;
		}
		if (flag)
			num += 1;
	}

	return num;

}


int main()
{
	string str;
	int n, q, pos;
	
	
	char chan;
	cin >> n;
	cin >> str;
	cin >> q;
	int a = 0;
	int* buf = (int*)malloc(sizeof(q) * (q + 1));
	if (buf == NULL)
	{
		return 1;
	}
	buf[a++] = find_psu(str, true);

	while (q--)
	{
		cin >> pos >> chan;
		str[pos - 1] = chan;
		buf[a] = find_psu(str, pos);
		a++;
	}
	
	for (int i = 0; i < a; i++)
	{
		cout << buf[i] << endl;
	}
	free(buf);
	

	 



	 


	return 0;
}

#include <vector>
using  namespace std;
int main()
{
	int a = 5;
	int b = 6;
	vector<vector<int>> mat;
	vector<vector<int>> mat1;
	vector<vector<int>> mat2;
	mat = mat1 + mat2;

	return 0;
}
*/