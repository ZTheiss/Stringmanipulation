#pragma once
#include <string>
#include <vector>
using namespace std;

class StringConcat {
public:
	//getters
	string getStringList() { return new_string; }

	//setters
	void setStringList(vector<string> stringList);

private:
	string new_string;
};