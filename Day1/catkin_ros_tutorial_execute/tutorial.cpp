#include <iostream>
#include <cstdlib>
#include <cmath>

int main (int argc, char *argv[]){

	if(argc<2){
		std::cout << "Usage: " << argv[0] << " number" << std::endl;
		std::cout << argv[0] <<std::endl;
		std::cout << argc << std::endl;
		
		return 1;
	}
	
	double inputValue = atof(argv[1]);
	std::cout << "The square root of " << inputValue <<
	" is " << sqrt(inputValue) << std::endl;
	return 0;

}
