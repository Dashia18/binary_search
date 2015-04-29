#include <iostream>
#include <vector>
using namespace std;

#include "binary_search.hpp"

int main()
{
	const int N = 6, val = 4;	
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		v.push_back(i+1);
	}

	binary_search(v, val);
    return 0;
}
