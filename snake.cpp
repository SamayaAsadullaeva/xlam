// snake.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n, k, i, j, a, b, d, ipr,jpr;
	int m[100][100];
	cin >> n;
	k = 1;
	j = 0;
	i = 0;
	if (n % 2 == 0) {
		a = n - 1;
		b = 0;
	}
	else {
		a = 0;
		b = n - 1;

	};
	d =(1 + n)*n / 2;
	while (k<=d) {// ((i!=a) and (j!=b))
		m[i][j] = k;
		k++;
		if (i == 0) {
			jpr = j;
			j++;
			m[i][j] = k;
			k++;
		}
		else {
			if (j == 0) {
				ipr = i;
				i++;
				m[i][j] = k;
				k++;
			};
		};
		if ((j>0)and((j>i) or ((ipr==i-1)and(jpr==j+1)))) {
			ipr = i;
			jpr = j;
			i++;
			j--;
		}
		else {
			if (((i>j) or (i==j) or ((ipr == i + 1) and (jpr == j - 1))) and (i>0)) {
				ipr = i;
				jpr = j;
				i--;
				j++;
			};
		};
	};
	i = n - 1;
	j = n - 1;
	k = n * n;
	/*while (k>=d) {
		m[i][j] = k;
		k--;
		if (i == n - 1) {
			jpr == j;
			j--;
			m[i][j] = k;
			k--;
		}
		else {
			if (j == n - 1) {
				ipr = i;
				i--;
				m[i][j] = k;
				k--;
			};
		};
		if (((i>j) or ((ipr == i + 1) and (jpr == j - 1)))and (j<n - 1)) {
			ipr = i;
			jpr == j;
			i--;
			j++;
		}
		else {
			if (((j>i) or (i==j) or ((ipr == i - 1) and (jpr == j + 1))) and (i<n - 1)) {
				ipr = i;
				jpr == j;
				i++;
				j--;
			};
		};
	};*/
	for (i = 0; i<n; i++) {
		for (j = 0; j<n; j++) {
			cout << m[i][j] << ' ';
		};
		cout << endl;
	};
	system("pause");
	return 0;
}