#include <iostream>
#include <vector>
using namespace std;

#include "binary_search.hpp"

int main()
{
	const int N = 5, val = 4;	
	vector<int> v(N);
	for (int i = 0; i < N; i++)
	{
		v.push_back(i);
	}

	binary_search(v, val);
    return 0;
}
