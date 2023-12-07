#include <iostream>
#include <vector>
#include <deque>

template <typename T>

void PrintF( T l , char delim){
	auto iter = l.begin();
	while( iter != l.end()-1) {
		std::cout << *iter << delim << " ";
		++iter;
	}
	std::cout << *iter << ';' << std::endl;
}

int main()
{
	std::vector<int> v = {1,2,3,4};
	std::deque<double> d = {5.6,6.3,7.7,8.9,9};
 	
	PrintF(v , ',');
	PrintF(d , ',');
}
