#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int SIZE = 10;
	int arr[10];
	srand(time(0));
	cout << "Unsorted array:\n";
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20;
		cout << arr[i] << '\t';
	}
	cout << endl;
	for (int i = 1; i < SIZE; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	cout << "\nSorted array:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;

	return 0;
}
