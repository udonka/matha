#ifndef MASAMATHLIB
#define MASAMATHLIB

#include "node.h"

#include<string>
#include<vector>
using namespace std;

class Matha{
	string exp;

public:
	Matha(string exp);
	void execute();

private:

	vector<string> lex(string exp);
	Node parse(vector<string> exp);
		
	
};

#endif //MASAMATHLIB
