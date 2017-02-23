/*************************************************************************
	> File Name: modify_al.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2017 08:44:08 AM
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
void output(vector<int> v);
int main()
{
    vector<int> vec = {9,60,70,8,45,87,90};
    vector<int> vec2 = {0,0,0,0,0,0,0,0,0,0,0};
    vector<int>::iterator itr,itr2;
    pair<vector<int>::iterator,vector<int>::iterator> pair_of_itr;
    //output(vec);
    copy(vec.begin(),vec.end(),vec2.begin());
    //output(vec2);
    fill(vec2.begin(),vec2.end(),0);
    copy_if(vec.begin(),vec.end(),vec2.begin(),[](int x){return x>80;});
    output(vec2);
    //2.move
    fill(vec2.begin(),vec2.end(),0);
    //move(vec.begin(),vec.end(),vec2.begin());
    //output(vec);
    //output(vec2);
    //3.transform
    //transform(vec.begin(),vec.end(),vec2.begin(),[](int x){return x-1;});
    //output(vec);
    //output(vec2);
   /* vector<int> vec3 = {1,2,3,4,5,6,7};
    transform(vec3.begin(),vec3.end(),vec.begin(),vec2.begin(),[](int x,int y){return x + y;});
    output(vec2);*/
    //4.swap
    //5.generate,generate_n
    vector<int> vec4 = {0,0,0,0,0};
    generate(vec4.begin(),vec4.end(),rand);
    //output(vec4);
    //6 replace
    //7.remove,remove_copy
    //8.unique
   // vector<int> vec6 = {3,2,5,7,8,9,1,2};
    //output(vec6);
    //sort(vec6.begin(),vec6.end());
    //auto v7 = unique(vec6.begin(),vec6.end());
    //output(vec6);
    //output(v7);
   // cout << (v7 == vec6.end()) << endl;
    //9.reverse
    output(vec);
    reverse(vec.begin(),vec.end());
    output(vec);
    //10.rotate
    //11.permute,next_permutation,prev_permutation
    //12.shuffle
    //random_shuffle(vec.begin(),vec.end());
    //shuffle(vec.begin(),vec.end(),default_random_engine())
}
void output(vector<int> v)
{
    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
    cout << endl;
}

