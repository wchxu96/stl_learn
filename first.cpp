/*************************************************************************
	> File Name: first.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 20 Feb 2017 10:24:30 AM
 ************************************************************************/

#include<iostream>
using namespace std;

template <typename T>
T square(T x){
    return x * x;
}

int main(){
    cout << square(5) << endl;
    cout << square(5.5) << endl;
}
