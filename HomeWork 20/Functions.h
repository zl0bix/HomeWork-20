#pragma once
#include<iostream>
#include<ctime>
#include<cstdlib>
#include"Functions.h"

void fill_arr(int arr[], int length, int left, int right);
void print_arr(int arr[], int length);
int search_index(int arr[], const int length, int search, int index = 0);
int arr_min(int arr[], const int length);
int arr_max(int arr[], const int length);
double mean_value(int arr[], const int length);
void range(int arr[], const int length, int num1, int num2);
int counter(int arr[], const int length, int num1);