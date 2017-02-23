/*************************************************************************
	> File Name: containers_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 20 Feb 2017 10:39:36 AM
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<set> //set and multiset
#include<map>//map and multimap
#include<unordered_set>
#include<unordered_map>
#include<iterator>
#include<algorithm>
#include<numeric>
#include<functional>
using namespace std;

int main()
{
    /*vector<int> vec;// vec.size()==0
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8);//4.1.8->
    cout << vec[2] << " ";
    cout << vec.at(2)<< " ";
    for(int i; i < vec.size();i++)
    cout << vec[i] << " ";
    for(vector<int>::iterator itr = vec.begin();itr!=vec.end();++itr)
    {
        cout << *itr << " ";
    }
    for(it : vec)
        cout << it << " ";
    deque<int> deq = {4,6,7};
    cout << deq[1];
    */
    list<int> mylist = {5,2,9};
    mylist.push_back(6);
    mylist.push_front(4);
    list<int>::iterator itr = find(mylist.begin(),mylist.end(),2);
    mylist.insert(itr,8);
    cout << "#################" << endl;
    itr++;
    cout << *itr << endl;
    //mylist.erase(itr);
    cout << endl;//4 8 5 2 6
    cout <<"*************************************" <<endl;
    list<int> l;
    l.push_back(1);
    l.push_back(0);
    mylist.splice(itr,l);
	for(list<int>::iterator iter = mylist.begin();iter != mylist.end();iter++)
    {
        cout << *iter << endl;
    }
   // cout << l.size() << endl;
    //cout << mylist.size() << endl;

}

