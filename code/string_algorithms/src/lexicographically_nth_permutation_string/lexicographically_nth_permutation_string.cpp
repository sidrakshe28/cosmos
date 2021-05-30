
#include <bits/stdc++.h>
using namespace std;


void nPermute(string str, long int n)
{
	
	sort(str.begin(), str.end());

	
	long int i = 1;
	do {
		
		if (i == n)
			break;

		i++;
	} while (next_permutation(str.begin(), str.end()));

	
	cout << str;
}


int main()
{
	string str = "GOODNESS";
	long int n = 100;
	nPermute(str, n);
	return 0;
}
