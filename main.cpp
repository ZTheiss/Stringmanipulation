#include <iostream>
#include <string>
#include <vector>
#include "stringconcat.h"
/*
An application to concatenate two strings together and create a new "word".
The words submitted will be cut in half (rounded up) and then combined.
This project focuses on tokenizing strings into vectors
*/

vector<string> tokenizer(string s, string del = " ")
{
    vector<string> each_word;
    int start, end = -1 * del.size();
    do {
        start = end + del.size();
        end = s.find(del, start);
        each_word.push_back(s.substr(start, end - start));
    } while (end != -1);
    return each_word;
}

int main()
{
    StringConcat sc;
    string user_input{};
    cout << "Please enter as many strings as you want to combine them (separate by comma ','):" << endl;
    cin >> user_input;
    vector<string> entered_list = tokenizer(user_input, ",");

    sc.setStringList(entered_list);
    sc.getStringList();
}
