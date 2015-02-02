#ifndef NODE
#define NODE

#include<string>
#include<vector>
using namespace std;

class Node{
	string expression;

	vector<Node> children;
public:
	Node(vector<string> terms);
	Node(string term);
	void setSingle(string term);

	vector<Node> getChildren() const{
		return children;//all copy
	}

	string getExpression() const{
		return expression;
	}
	
	Node execute();
};

ostream& operator<<(ostream& os, const Node& node);

#endif //NODE
