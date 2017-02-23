/*************************************************************************
	> File Name: iter_learn.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 20 Feb 2017 02:05:12 PM
 ************************************************************************/

#include<iostream>
//using namespace std;
//
//1.Random access Iterator : vector,deque,array
//vector<int> itr;
//itr = itr + 5;
//itr = itr - 4;
//if(itr2 > itr1)
//++itr;
//--itr;
//
//2.Bidirectional Iterator: list,set/multiset,map/multimap
//list<int> itr;
//++itr;
//--itr;
//
//3.Forward Iterator:forward_list
//forward_list<int> itr;
//++itr;
//
//4.Input Iterator:read and process values while iterating forward
//int x = *itr;
//
//5.output Iterator:output values while iterating forward
//*itr = 100;
//
//--every container has a iterator and a const_iterator
//set<int>::iterator itr;
//set<int>::const_iterator citr
//
//advancence(itr,5) move itr forward 5 spots
//distance(itr1,itr2);// measure the distance between itr1 and itr2
//
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<string> vec4;
    //vec4.push_back("blue");
    //vec4.push_back("red");
    //vec4.push_back("yellow");
    //copy(istream_iterator<string>(cin),istream_iterator<string>(),back_inserter(vec4));
    //copy(istream_iterator<string>(cin),istream_iterator<string>(),ostream_iterator<string>(cout," "));
    vector<int> vec = {4,2,5,1,3,9};
    vector<int>::iterator itr = min_element(vec.begin(),vec.end());
    cout << *itr << endl;
    return 0;
}

//reverse_iterator:
//vector<int> vec = {4,5,6,7};
//reverse_iterator<vector<int>::iterator> ritr;
//for(ritr = vec.rbegin(); ritr != vec.rend();ritr++)
//{
//cout << *ritr << endl;
//}
//
//
//
//
