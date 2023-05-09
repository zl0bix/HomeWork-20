#include<iostream>
#include<ctime>
#include<cstdlib>
#include"Functions.h"



int main() {
	int begin,search1;
	const int size = 100;
	int arr1[size];
	fill_arr(arr1, size, -100, 100);
	print_arr(arr1, size);
	std::cout << "Enter a number to search for -> ";
	std::cin >> search1;
	std::cout << "Enter the starting position for the search -> ";
	std::cin >> begin;
	std::cout<<search_index(arr1,size, search1, begin);




	return 0;
}