#include"node.h"
#include"functions.h"

#include<iostream>

using namespace std;

ostream& operator<<(ostream& os, const Node& node){
	os << node.getExpression() <<endl;
	vector<Node> children =  node.getChildren();


	for(vector<Node>::iterator it = children.begin(); it != children.end(); it++){
		os << (*it);
	}

	return os;
}


Node::Node(vector<string> terms)
{
	if(terms.size() <= 0){
		cout << "error: no terms" <<endl;
		return;
	}

	if(terms.size() <= 2){
		//single node
		this->setSingle(terms[0]);
		return;
	}
	
	if(terms.size() >= 3){  //multiple node
		expression = join(terms, ' '); // "+ 3 5"

		children.push_back(Node(terms[1]));
		children.push_back(Node(terms[2]));

		return;
	}
}

Node::Node(string term)
{
	this->setSingle(term);
}

void Node::setSingle(string term){
	this->expression = term;

	//children is empty
	//this->children = vector<Node>();
}

Node Node::execute() { 
	
	//!!!!Plus specific code!!!!
	string firstOperand_  = children[0].getExpression();
	string secondOperand_ = children[1].getExpression();
	int firstOperand  = parseInt(firstOperand_);
	int secondOperand = parseInt(secondOperand_);
	
	string result = toString(firstOperand + secondOperand);
	
	return Node(result);
}

