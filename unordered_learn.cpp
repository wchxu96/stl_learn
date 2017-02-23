/*************************************************************************
	> File Name: unordered_learn.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 20 Feb 2017 01:42:18 PM
 ************************************************************************/

#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_set<string> myset = {"red","green","blue"};
    unordered_set<string>::const_iterator itr = myset.find("green");
    if(itr != myset.end())
        cout << *itr << endl;
    myset.insert("yellow");
    cout << "load_factor" << myset.load_factor() << endl;
    string x = "red";
    cout << x << "is in bucket# " << myset.bucket(x) << endl;
    cout << "total bucket" << myset.bucket_count() << endl;
    return 0;
}

