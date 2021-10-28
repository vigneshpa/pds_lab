#include <iostream>
using namespace std;
class linear
{
	int arr[10], item;

public:
	linear(int n)
	{
		cout << "Enter the Array Elements : ";
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cout << "Enter the Item : ";
		cin >> item;
		int pos = search(arr, n, item);
		if (pos > n)
		{
			cout << "Invalid Search";
		}
		else
		{
			cout << pos;
		}
	}
	int search(int a[], int n, int data)
	{
		for (int i = 0; i < n; i++)
			if (a[i] == item)
				return i + 1;
		return n + 1;
	}
};
int main()
{
	int n;
	cout << "Enter the Size of the Array : ";
	cin >> n;
	linear l(n);
	return 0;
}
