/*************************************************************************
	> File Name: stream_learn.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Feb 2017 09:27:29 AM
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<bitset>
using namespace std;
int main()
{
    ofstream of("MyLog.txt");
    of << "Experience is the mother of wisdom" <<endl;
    of << 234 << endl;
    of << 2.3 << endl;
    of << bitset<8>(14) << endl;
    //of << complex<int>(2,3) << endl;
}
