#include <string>
#include "matha.h"
#include "node.h"
#include "functions.h"


#include<iostream>
using namespace std;

Matha::Matha(string exp)
	:exp(exp)
{ }


void Matha::execute(){
	vector<string> terms = this->lex(exp);
	
	Node node = parse(terms);
	
	Node retnode = node.execute();

	cout << retnode <<endl;
}

//OK
vector<string> Matha::lex(string exp){

	vector<string> ret = split(exp, ' ');;

	return ret;
}

Node Matha::parse(vector<string> exp){
	
	return Node(exp);
}


