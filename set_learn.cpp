/*************************************************************************
	> File Name: set_learn.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 20 Feb 2017 01:21:13 PM
 ************************************************************************/

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> myset;
    set<int>::iterator it;
    pair<set<int>::iterator,bool> ret;
    for(int i = 1;i <=5 ; i++) myset.insert(i * 10);
    ret = myset.insert(20);
    if(ret.second == false) it = ret.first;
    myset.insert(25);
    myset.insert(24);
    myset.insert(23);
    int myints[] = {5,10,15};
    myset.insert(myints,myints+3);
    cout << "myset contains:";
    for(it = myset.begin();it != myset.end();it++)
    {
        cout << " " << *it;
    }
    cout << endl;
    return 0;
}
