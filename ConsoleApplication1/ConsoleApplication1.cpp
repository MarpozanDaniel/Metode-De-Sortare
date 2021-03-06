// Recapitulare sortari.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void BubbleSort(int[], int);
void SelectionSort(int[], int);
void InsertionSort(int[], int);

int main()
{
	//citire vector;
	int n;
	cout << "Cate elemente are vectorul ?"; cin >> n;
	int v[10];
	cout << "Introdu elementele vectorului:" << endl;
	for (int i = 0; i < n; i++)
		cin >> v[i];
	cout << "Vectorul sortat este:" << endl;
	//BubbleSort(v, n
	//SelectionSort(v, n);
	InsertionSort(v, n);
	system("pause");
	return 0;
}

void BubbleSort(int v[], int n) {
	int i = 0;
	int ok;
	do
	{
		ok = 1;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (v[j + 1] < v[j])
			{
				swap(v[j + 1], v[j]);
				ok = 0;
			}
		}
		i++;
	} while (ok == 0 && i<n - 1);
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
}

void SelectionSort(int v[], int n) {
	for (int m = n - 1; m >= 0; m--)
	{
		int nmax = v[0];
		int ind = 0;
		for (int i = 0; i <= m; i++)
		{
			if (v[i] > nmax)
			{
				nmax = v[i];
				ind = i;
			}
		}
		swap(v[m], v[ind]);
	}
	for (int i = 0; i < n; ++i)
		cout << v[i] << " ";
}

void InsertionSort(int v[], int n) {
	for (int i = 1; i < n; i++)
	{
		int a = v[i];
		int ind = i - 1;
		while (v[ind] > a && ind >= 0)
		{
			v[ind + 1] = v[ind];
			ind--;
		}
		v[ind + 1] = a;
	}
	for (int i = 0; i < n; ++i)
		cout << v[i] << " ";
}
void CountingSort(int v[], int n)
{
	int a[10];
	for (int i = 0; i < n; i++)
		a[i] = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (v[i] > v[j])
				a[i]++;
			else
				a[j]++;
		}
	}
	for (int i = 0; i < n; i++)
		v[a[i]] = v[i];
	for (int i = 0; i < n; ++i)
		cout << v[i] << " ";
}