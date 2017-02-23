/*************************************************************************
	> File Name: sort_learn.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2017 12:01:35 PM
 ************************************************************************/

#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;
template <typename T>
void output(vector<T> v);
int main()
{
    vector<int> vec = {9,60,70,8,45,87,90,69,55,7};
    //partial_sort(vec.begin(),vec.begin()+5,vec.end());
    output(vec);
    //nth_element(vec.begin,vec.begin + 5,vec.end(),greater<int>());
   // partition(vec.begin(),vec.end(),[](int i){return (i<10);});
    //output(vec);
    make_heap(vec.begin(),vec.end());
    sort_heap(vec.begin(),vec.end());
    output(vec);

    return 0;
}

template <typename T>
void output(vector<T> v)
{
    copy(v.begin(),v.end(),ostream_iterator<T>(cout," "));
    cout << endl;
}
