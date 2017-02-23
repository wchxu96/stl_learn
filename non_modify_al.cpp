/*************************************************************************
	> File Name: non_modify_al.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 21 Feb 2017 09:29:31 PM
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec = {9,60,90,8,45,87,90,69,55,7};
    vector<int>::iterator itr;
    //1.COunting 
    //
    int n = count(vec.begin(),vec.end(),69);
    //2.min and max
    itr = max_element(vec.begin(),vec.end());
    cout <<"max:" << *itr << endl;
    cout << n << endl;
    itr = min_element(vec.begin(),vec.end());
    cout << "min:"<< *itr << endl;
    //3.linear searching (when not sorted)
    itr = find(vec.begin(),vec.end(),55);
    cout << (itr == vec.end())<< endl;
    itr = find_if(vec.begin(),vec.end(),[](int x) {return x>80;});
    cout << *itr << endl;
    // search subrange
    vector<int> sub = {45,87,90};
    itr = search(vec.begin(),vec.end(),sub.begin(),sub.end());
    //search any_of
    vector<int> items = {87,90};
    itr = find_first_of(vec.begin(),vec.end(),items.begin(),items.end());
    //search adjacent
    itr = adjacent_find(vec.begin(),vec.end());
    //comparing ranges
    if(equal(vec.begin(),vec.end(),vec2.begin()))
        cout <<"vec1 and vec2 are the same" <<endl;
    //check attribute
    bool b = is_sorted(vec.begin(),vec.end());
    cout << b << endl;
    itr = is_sorted_untl(vec.begin(),vec.end());
}
