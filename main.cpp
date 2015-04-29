
#include "binary_search.hpp"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int main()
{
	const int N = 6;	
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		v.push_back(i+1);
	}
	vector<int> v0;
	assert(binary_search(v, 1) == 0);
	assert(binary_search(v, 7) == -1);
	assert(binary_search(v, 0) == -1);
	assert(binary_search(v0, 7) == -1);
    return 0;
}
