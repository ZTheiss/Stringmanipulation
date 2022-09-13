#include <iostream>
#include "stringconcat.h"
using namespace std;


void StringConcat::setStringList(vector<string> stringList) {
	for (int i = 0; i < stringList.size(); i++){
		string temp_str = stringList[i];
		if ((temp_str.length() % 2) == 1){
			temp_str = temp_str.substr(0, (temp_str.length()/2) + 1);
		}
		else {
			temp_str = temp_str.substr(0, temp_str.length()/2);
		}
		new_string += temp_str;
	}
	cout << "Your new string is: " << StringConcat::getStringList() << endl;
}


