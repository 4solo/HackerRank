/*
Sky Wang
B.S. Computer Science
University of California, Los Angeles
Class of 2016
*/
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int number;
	cin >> number;
	int *arr;
	arr = new int[number+1];
	int *arr1;
	arr1 = new int[number+1];
	bool case1, case2;
	case1 = true;
	case2 = true;
	int number2;
    arr[0]=-999;
    arr1[0]=-999;
	for (int i = 1; i < number+1; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i < number+1; i++)
	{
		arr1[i] = arr[i];
	}
	int posindex = 1;
	int negindex = 1;
	int max = 0;
	for (int i = 1; i <= number-1; i++)
	{
		if (arr[i]>arr[i + 1])
		{
			posindex = i;
			max = arr[i];
			break;
		}
	}
	negindex = number ;
	for (int i = posindex + 1; i <= number ; i++)
	{
		if (arr[i] > max)
		{
			negindex = i - 1;
			break;
		}
	}
	swap(arr[posindex], arr[negindex]);
	reverse(arr1 + posindex, arr1 + negindex+1);
	for (int i = 1; i < number ; i++)
	{
		if (arr[i]>arr[i + 1])
		{
			case1 = false;
			break;
		}
	}
	for (int i = 1; i < number ; i++)
	{
		if (arr1[i]>arr1[i + 1])
		{
			case2 = false;
			break;
		}
	}
	if (case1)
	{
		cout << "yes" << endl;
		cout << "swap " << posindex  << " " << negindex  << endl;
	}
	else if (case2)
	{
		cout << "yes" << endl;
		cout << "reverse " << posindex  << " " << negindex << endl;
	}
	else
	{
		cout << "no" << endl;
	}

}