#include<iostream>
using namespace std;
void getarray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "enter a[" << i << "]:";
		cin >> a[i];
	}
}
void printarray(int a[], int n)
{
	cout << "a[";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " , ";
	}
	cout << "]" << endl;
}
int findmax(int a[], int n, int& indexmax, int& valuemax)
{
	int temp_max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (temp_max < a[i])
		{
			temp_max = a[i];
			valuemax = a[i];
			indexmax = i;
		}
	}
	cout << "max : ";
	return valuemax;
	cout << endl;
}
int searchArray(int a[], int n, int value)
{
	int index;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == value)
		{
			cout << "index value : ";
			return i;
		}
			
	}
}
int main(int argc, char*argv[])
{
	int n, value, a[10], indexmax, valuemax; 
	cout << "enter a number: ";
	cin >> n;
	cout << "enter value: ";
	cin >> value;
	getarray(a, n);
	printarray(a, n);
	cout << searchArray(a, n, value) << endl;
	cout << findmax(a, n, indexmax, valuemax) << endl;
	return 0;
}