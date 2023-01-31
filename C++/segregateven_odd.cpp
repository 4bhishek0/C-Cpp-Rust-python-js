#include <iostream>
using namespace std;


void swap(int *a, int *b);

void segregateEvenOdd(int arr[], int size)
{
	/* Initialize left and right indexes */
	int left = 0, right = size-1;
	while (left < right)
	{
		/* Increment left index while we see 0 at left */
		while (arr[left] % 2 == 0 && left < right)
			left++;

		/* Decrement right index while we see 1 at right */
		while (arr[right] % 2 == 1 && left < right)
			right--;

		if (left < right)
		{
			/* Swap arr[left] and arr[right]*/
			swap(&arr[left], &arr[right]);
			left++;
			right--;
		}
	}
}


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int arr[10];
    int arr_size ;
    cout << "Enter the length of array : ";
    cin >> arr_size ;
    for (int i = 0; i < 5; ++i) 
    {
        cin >> arr[i];
    }

	//int arr_size = sizeof(arr)/sizeof(arr[0]);
	int i = 0;

	segregateEvenOdd(arr, arr_size);

	cout <<"Array after segregation ";
	for (i = 0; i < arr_size; i++)
		cout << arr[i] << " ";

	return 0;
}

