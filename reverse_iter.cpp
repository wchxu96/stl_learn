/*************************************************************************
	> File Name: reverse_iter.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Feb 2017 10:19:17 AM
 ************************************************************************/

#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,4,5};
    vector<int>::reverse_iterator ritr = find(vec.rbegin(),vec.rend(),3);
    cout << (*ritr) << endl;
    vector<int>::iterator itr = ritr.base();
    cout << (*itr) << endl;
}
