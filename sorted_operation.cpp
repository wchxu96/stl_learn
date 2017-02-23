/*************************************************************************
	> File Name: sorted_operation.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2017 01:11:37 PM
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;
//1.binary search,the methods follow only can be used when sorted.
int main()
{
    vector<int> vec = {8,9,9,9,45,87,90};
    vector<int>::iterator itr;
    pair<vector<int>::iterator,vector<int>::iterator> pair_of_itr;
    vector<int> s = {9,9,45};
    bool found = binary_search(vec.begin(),vec.end(),9);
    bool found2 = includes(vec.begin(),vec.end(),s.begin(),s.end());
    itr = lower_bound(vec.begin(),vec.end(),9);
    cout << (itr - vec.begin()) <<endl;
    itr = upper_bound(vec.begin(),vec.end(),9);
    cout << (itr - vec.begin()) << endl;
    pair_of_itr = equal_range(vec.begin(),vec.end(),9);
    cout << (pair_of_itr.first-vec.begin()) << " " << (pair_of_itr.second-vec.begin()) << endl;
    //cout << found << endl;
    //cout << found2 << endl;
    vector<int> vec3 = {8,9,9,10};
    vector<int> vec4 = {7,9,10};
    vector<int> merge_vec = {0,0,0,0,0,0,0};
    merge(vec3.begin(),vec3.end(),vec4.begin(),vec4.end(),merge_vec.begin());
    //copy(merge_vec.begin(),merge_vec.end(),ostream_iterator<int> (cout,"  "));
    //cout << endl;
    //set_union
}
