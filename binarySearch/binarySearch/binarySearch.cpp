// binarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

int binarySearch(int ordered_list[], int target, int length)
{
	int left_ix = 0;
	int right_ix = length;

	int mid_ix = floor((left_ix + right_ix) / 2);
	while (abs(right_ix - left_ix) >= 2)
	{
		//std::cout << ordered_list[mid_ix] << '\n';
		if (ordered_list[mid_ix] == target)
		{
			return true;
			//return ordered_list[mid_ix];
		}
		if (ordered_list[mid_ix] < target)
		{
			left_ix = mid_ix;
		}
		if (ordered_list[mid_ix] > target)
		{
			right_ix = mid_ix;
		}
		mid_ix = floor((left_ix + right_ix) / 2);
	}
	return false;
}


int main()
{
	const int targ = 3;
	const int n = 5;
	int list[n] = { 1, 3, 5, 7, 9};

	int found = binarySearch(list, targ, n-1);

	if (found == 1)
	{
		std::cout << "Number found" << '\n';
	}
	else 
	{
		std::cout << "Number not found" << '\n';
	}
}

