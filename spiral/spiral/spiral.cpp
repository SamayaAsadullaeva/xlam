﻿// spiral.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>;
using namespace std;
int main()
{
	int i, j, d, c, n, k, top, end;
	cin >> n;
	int m[100][100];
	if (n % 2 == 0){
		d = n / 2;
		c =d+1;
	}
	else{
		c = (n / 2) + 1;
		d = c;
	};
	top = 0;
	end = n - 1;
	i = 0;
	j = 0;
	k = 1;
	while ((i != c) and (j != d)) {
		for (j = top; ((i == top) and (j >= top)), j < (end + 1); j++) {
			m[top][j] = k;
			k++;
		};
		top++;
		i++; 
		for (i = top; ((j == (end + 1)) and (i >= top)),i<(end + 1); i++) {
			m[i][end] = k;
			k++;
		};
		end --;
		j --;
		for (j = end; ((j <= (end + 1)) and (i == (end + 2))),j>(top - 2); j--) {
				m[end + 1][j] = k;
				k++;
		};
		for (i = end; ((i <= (end + 2)) and (j == (top - 2))),i>(top - 1); i--) {
			m[i][top - 1] = k;
			k++;
		};
		i = top;
		j = top;
	};
	for (i = 0; i<n; i++) {
		for (j = 0; j<n; j++) {
			cout << m[i][j] << ' ';
		};
		cout << endl;
	};
	system("pause");
	return 0;
};
