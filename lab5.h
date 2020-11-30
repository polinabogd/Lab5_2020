#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <tuple>

using namespace std;
class Time{
    public:
    int hh, mm, ss;
    void convert(int ss)
    {
        hh = trunc(ss/3600);
        mm = trunc((ss%3600)/60);
        ss = trunc(mm%60);
        cout<<hh<<":"<<mm<<":"<<ss<<endl; 
    }
    void convert(int hh, int mm, int ss)
    {
        cout<<hh*3600 + mm*60 + ss<<endl;
    }

};