#include <iostream>
#include <vector>
using namespace std;

#include "binary_search.hpp"

int main()
{
	const int N = 5, val = 4;	
	const std::vector<int> v(N);

	binary_search(v, val);
    return 0;
}
