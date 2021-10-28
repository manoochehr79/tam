#include<iostream>
using namespace std;

int main()
{
	int ary[1000], n;
	cout << "tole araye: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "adad ra vared konid: ";
		cin >> ary[i];
	}
	for (int j = 0; j < n; j++) 
	{
		if (ary[j] > ary[j + 1])
		{
			cout << "namoratb.\n";
			break;
		}
		else
		{
			cout << "moratab.\n";
			break;
		}
	}
}