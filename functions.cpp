
#include"functions.h"
#include<iostream>
#include<sstream>
using namespace std;

vector<string> split(const string &str, char delim){
  istringstream iss(str); string tmp; vector<string> res;
  while(getline(iss, tmp, delim)) res.push_back(tmp);
  return res;
}

string join(vector<string> v, char sp){
	
	std::stringstream ss;
	for(size_t i = 0; i < v.size(); ++i)
	{
	  if(i != 0)
	    ss << sp;
	  ss << v[i];
	}
	return ss.str();
}


int parseInt(string numstr){
	istringstream iss(numstr);

	int ret = 0;
	iss >> ret;

	return ret;
}

string toString(int num){
	ostringstream oss;
	oss << num;
	
	return oss.str();
}



