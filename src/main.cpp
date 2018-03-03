#include "Test_Classes/GeeksForGeeks.h"
#include <string>
#include <iostream>
#include <chrono>

using namespace std;

int main() {

	GeeksForGeeks * geeks_tests = new GeeksForGeeks();
	int user_input;
	bool bExit = false;
	auto start = std::chrono::system_clock::now(), end = std::chrono::system_clock::now();
	std::chrono::duration<double> diff;

	cout << "===================================" << endl;
	cout << "= [1] Trapping Rain Water.        =" << endl;
	cout << "= [0] Exit.                       =" << endl;
	cout << "===================================" << endl;

	do {
		cout << "Select test to run: ";
		cin >> user_input;
		cout << endl;

		switch(user_input) {
		case 0:
			bExit = true;
			break;
		case 1: {
			int total_hills = 0;
			cout << "Enter number of montains: ";
			cin >> total_hills;

			int arr[total_hills]= {0};
			for(int i=0; i<total_hills; ++i) {
				cout << "Mountain[" << i << "]: ";
				cin >> arr[i];
			}
			start = std::chrono::system_clock::now();	//Start Time
			cout << "The total water is: " << to_string(geeks_tests->trappingRainWater(arr, total_hills)) << endl;
			end = std::chrono::system_clock::now();	//End Time
			bExit = true;
			break;
		}
		default:
			bExit = false;
			break;
		}
	}while(!bExit);

	//Calculate Duration
	diff = end-start;
	std::cout << "Time: "<< diff.count() << endl;

	//Free Memory
	delete geeks_tests;
	return 1;
}
