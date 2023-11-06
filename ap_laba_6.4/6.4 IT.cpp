#include <iostream>
#include <iomanip>
using namespace std;
void Input(int* a, const int size)
{
	for
		(int i = 0; i < size; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}
void Inputa(int* a, const int size)
{
	for
		(int i = 0; i < size; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
void Printb(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << b[i];
	cout << endl;
}
int Max(int* a, const int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (abs(a[i]) > max)
			max = i;
	return max;
}
int Sum(int* a, const int size, int i)
{
	if (i < size)
	{
		if (a[i] > 0)
			return a[i] + Sum(a, size, i + 1);
		else
			return Sum(a, size, i + 1);
	}
	else
		return 0;
}
void Sort(int* a, int* b, int* c, const int size)
{
	int k, j, n;
	cout << "n = "; cin >> n;
	cout << "a = "; cin >> k;
	cout << "b = "; cin >> j;
	Inputa(a, n);
	for (int i = 0; i < size; i++)
	{
		if (a[i] >= k && a[i] <= j)
		{
			cout << "true " << a[i] << endl;
			b[i] = a[i];
		}
		else
		{
			cout << "false " << a[i] << endl;
			c[i] = a[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (b[i] < size && b[i] != a[i]) {
			b[i] = 0;
		}
		if (c[i] < size && c[i] != a[i])
		{
			c[i] = 0;
		}
	}
}
void Sortb(int* b, const int size) // ����� ������
{
	for (int i = 0; i < size - 1; i++) // ������ ������� �������������� �������
	{
	int min = b[i]; // ����� ���������� ��������
	int imin = i; // �������������� �������
	for (int j = i + 1; j < size; j++)
	if (min > b[j])
	{
	min = b[j];
	imin = j;
	}
	b[imin] = b[i]; // ���� ������ ���������� �� �������
	b[i] = min; // �������� �������������� �������
	}
}
void Sortc(int* c, const int size) // ����� ������
{
	for (int i = 0; i < size - 1; i++) // ������ ������� �������������� �������
	{
	int min = c[i]; // ����� ���������� ��������
	int imin = i; // �������������� �������
	for (int j = i + 1; j < size; j++)
	if (min > c[j])
	{
	min = c[j];
	imin = j;
	}
	c[imin] = c[i]; // ���� ������ ���������� �� �������
	c[i] = min; // �������� �������������� �������
	}
}
int main() {
	const int n = 5;
	int a[n], b[n], c[n];
	Input(a, n);
	Print(a, n);
	cout << "1) max = " << Max(a, n) << endl;
	cout << "2) S = " << Sum(a, n, 0) << endl;
	Sort(a, b, c, n);
	Sortb(b, n);
	Sortc(c, n);
	Printb(b, n);
	Print(c, n);
	return 0;
}