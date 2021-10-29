#include <iostream>
using namespace std;
class linear
{
public:
	int arr[100], n, item;
	linear(int no = 0)
	{
		n = no;
		item = 0;
	}
	int search()
	{
		for (int i = 0; i < n; i++)
			if (arr[i] == item)
				return i + 1;
		return n + 1;
	}
	void read_array()
	{
		cout << "Enter the values of array : ";
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

	cout << "Enter the value to search : ";
	cin >> l.item;
	int ret = l.search();
	cout << "The item is found at " << ret << " position" << endl;
	return 0;
}
