/*************************************************************************
	> File Name: bind_learn.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Feb 2017 08:10:44 AM
 ************************************************************************/

#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
#include<iterator>
#include<set>
using namespace std;

int main()
{
    vector<int> coll;
    for(int i = 1 ; i <= 10;++i)
    {
        coll.push_back(i);
    }
    //int res = count_if(coll.begin(),coll.end(),[](int x){return x > 10;});
    //int res = count_if(coll.begin(),coll.end(),bind1st(less<int>(),10));
    //int res = count_if(coll.begin(),coll.end(),bind1st(greater<int>(),10));
    //cout << res;
    /*set<int> myset = {2,3,4,5};
    vector<int> vec;
    int x = multiplies<int>()(3,4);
    transform(myset.begin(),myset.end(),back_inserter(vec),bind(multiplies<int>(),placeholders::_1,10));
    copy(vec.begin(),vec.end(),ostream_iterator<int>(cout," "));*/

    return 0;
}


