using namespace std;
#include <iostream>
#include <algorithm>


void Print_Oposite_Array(int* arr, int size)
{
	for (int i = 1; i <= size; i++)
	{
		cout << arr[size - i] << " ";
	}

}
int* Oposite_Array(int* arr, int  size)
{

	int* arr_2 = new int[size];
	for (int i = 1; i <= size; i++)
	{
		arr_2[i - 1] = arr[size - i];
	}
	return arr_2;															
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int const size = 10;
	int arr[size] = { 1,2,3,4,5,6,7,8,9,10,};

	Oposite_Array(arr, size);
}
