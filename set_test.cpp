/*************************************************************************
	> File Name: set_test.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 20 Feb 2017 01:16:29 PM
 ************************************************************************/

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> myset;
    myset.insert(3);
    myset.insert(1);
    myset.insert(7);
    set<int>::iterator it;
    it = myset.find(7);

}
