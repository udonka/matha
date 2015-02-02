#ifndef FUNCTIONS
#define FUNCTIONS

#include<string>
#include<vector>
using namespace std;

vector<string> split(const string &str, char delim);

#endif //FUNCTIONS

string join(vector<string> terms, char sp);

int parseInt(string numstr);
string toString(int num);

