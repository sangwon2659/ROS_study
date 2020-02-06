#include <iostream>
#include <cstdlib>
#include <cmath>
#include "mysqrt.h"

using namespace std;

int main (int argc, char *argv[]){

	if (argc<2){
		cout<<"Usage: "<<argv[0]<<"number"<<endl;
		return 1;
	}

	double inputValue = atof(argv[1]);
	cout<<"The square root of "<<inputValue<<" is "<<mysqrt(inputValue)<<endl;
	return 0;
}
