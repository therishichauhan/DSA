/*Given an integer X, find its square root. If X is not a perfect square, then return floor(√x).*/


/*Naive Approach: To find the floor of the square root, try with all-natural numbers starting from 1.

 Continue incrementing the number until the square of that number is greater than the given number.*/

#include<bits/stdc++.h>
 using namespace std;

int floorSqrt(int x)
{
	// Base cases
	if (x == 0 || x == 1)
		return x;

	// Starting from 1, try all numbers until
	// i*i is greater than or equal to x.
	int i = 1, result = 1;
	while (result <= x) {
		i++;
		result = i * i;
	}
	return i - 1;
}

 int main(){


    int x = 11;
	cout << floorSqrt(x) << endl;

    return 0;
 }