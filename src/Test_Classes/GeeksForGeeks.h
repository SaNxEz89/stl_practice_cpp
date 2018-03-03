/*
 * geeksforgeeks.h
 *
 *  Created on: 3 mar. 2018
 *      Author: Rafael
 */

#ifndef TEST_CLASSES_GEEKSFORGEEKS_H_
#define TEST_CLASSES_GEEKSFORGEEKS_H_

#include <vector>
#include <algorithm>

using namespace std;

class GeeksForGeeks {

public:
	GeeksForGeeks();
	virtual ~GeeksForGeeks();

	//Trapping Rain Water
	int trappingRainWater(int *arr, int n);

};

#endif /* TEST_CLASSES_GEEKSFORGEEKS_H_ */
