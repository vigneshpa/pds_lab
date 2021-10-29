#include <iostream>
using namespace std;
class linear
{
	int arr[100], n, item;

public:
	linear(int n)
	{
		item = n = 0;
	}
	int search(int data)
	{
		for (int i = 0; i < n; i++)
			if (arr[i] == item)
				return i + 1;
		return n + 1;
	}
	void read_array()
	{
		cout << "Enter the values of array";
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
	}
};
int main()
{
	int n;
	cout << "Enter the Size of the Array : ";
	cin >> n;
	linear l(n);
	l.read_array();

	int item;
	cout << "Enter the value to search";
	cin >> item;
	int ret = l.search(item);
	cout << "The item is found at " << ret << " position";
	return 0;
}
