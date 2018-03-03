/*
 * geeksforgeeks.cpp
 *
 *  Created on: 3 mar. 2018
 *      Author: Rafael
 */

#include "GeeksForGeeks.h"

GeeksForGeeks::GeeksForGeeks() {
	// TODO Auto-generated constructor stub

}

GeeksForGeeks::~GeeksForGeeks() {
	// TODO Auto-generated destructor stub
}


/*	Trapping Rain Water
*	--------------------------
*	Given n non-negative integers representing an elevation map where the width of each bar is 1,
*	compute how much water it is able to trap after raining.
*/
//{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}
//{3, 0, 0, 2, 0, 4}
//{2, 0, 2}
int GeeksForGeeks::trappingRainWater(int *arr, int n){

	int total_water = 0;
	vector<int> vHills(arr, arr + n);
	vector<int>::iterator max_left, max_right, max_hill;

	max_left = max_element(vHills.begin(), vHills.begin() + n/2 - 1);
	max_right = (max_element(vHills.rbegin(), vHills.rbegin() + n/2) + 1).base();
	max_hill = (max_left <= max_right) ? max_left : max_right;

	for(vector<int>::iterator it = max_left; it != max_right; ++it) {
		total_water += abs(*it - *max_hill);
	}

	return total_water;
}
