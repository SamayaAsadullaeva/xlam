// spiral.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>;
using namespace std;
int main()
{
	int i, j, d, c, n, k, top, end;
	cin >> n;
	int m[10000][10000];
	if (n % 2 == 0)
	{
		d = n / 2;
		c = n / 2 + 1;
	}
	else
	{
		c = (n / 2)+1;
		d = (n / 2)+1;
	};
	top = 0;
	end = n-1 ;
	i = 0;
	j = 0;
	k = 1;
	//while (m[c][d]!=(n*n)) {//((i!=c)and(j!=d))
		if ((i == top) and (j == top)) {
			for (j = top; j<end; j++) {
				m[top][j] = k;
				k++;
			};
			top++;
			i++;
		};
		if ((j == (end)) and (i == top)) {
			for (i = top; i<end+1; i++) {
				m[i][end] = k;
				k++;
			};
			end--;
			j--;
		};
		if ((j == (end)) and (i == end)) {//i end
			for (j = end; j>(top - 1); j--) {
				m[end][j] = k;
				k++;
			};
		};
		if ((i == (end)) and (j == (top - 1))) {// i end
			for (i = end; i>top; i--) {
				m[i][top-1] = k;
				k++;
			};
		};
	//};
	cout << m[2][3] << endl;
	for (i = 0; i<n; i++) {
		for (j = 0; j<n; j++) {
			cout << m[i][j];
		};
		cout<<endl;
	};
	system ("pause");
	return 0;
};
