#include "binary_search.hpp"
#include <math.h>

int binary_search(const std::vector<int>& v, int val)
{
	int search_done = 0; //element exist or not in array
	int val_position = -1; // value position (чем-то определить надо все равно но чем...??)
	double middle_position;
	int vector_size = v.size();
	
																cout<<"Array:\n";
																for(int i = 0; i < v.size(); i++)
																{
																	cout<<v[i]
																		<<' ';
																}
																cout<<"\nvector_size: ";
																cout<<vector_size;

	int array_el_min = 0;
	int array_el_max = vector_size-1;
	if((v[array_el_min]>val) || (v[array_el_max]<val))
	{
		
		cout<< "\nElement was not find!\n";
	}
	else
	{
	do
	{
	middle_position = (array_el_max + array_el_min)/2; //??
	//middle_position = ceil(middle_position); //??
																cout<<"\nmiddle_position: ";
																cout<<middle_position
																	<<"\nelenent in middle position: "
																	<<v[middle_position];
    
	if (v[middle_position] > val)
	{
		//v[0 .. middle_position]
		array_el_min = 0;
		array_el_max = middle_position;
	}
	else if (v[middle_position] < val)
	{
		//v[middle_position .. end]
		array_el_min = middle_position;
		array_el_max = array_el_max;
	} 
	else if (v[middle_position] == val)
	{
		val_position = middle_position;
		search_done=1;
		cout<< "\nElement was find! It position is:\n"
	    <<val_position;
	}
	
	}while(search_done!=1);
	}
    return val_position;
}

