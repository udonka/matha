#include<iostream>
#include<string>
#include<sstream>
#include "matha.h"


using namespace std;

int main(int argc, char *argv[]){
	cout << "----hello matha----" <<endl;

	
	ostringstream oss;

	for(int i = 1; i < argc; i++){

		if(i != 1){
			oss << ' ';
		}

		oss << string(argv[i]) ;
	}

	string line = oss.str() ;
	cout << line << endl;

	Matha matha(line);
	matha.execute();
	
	return 0;
}
