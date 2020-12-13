#pragma once
#include <iostream>
#include <math.h>
#define findHours 3600
#define findMinutes 60

using namespace std;
class Time{
    public:
    int hh, mm, ss;

    void ConvertTime(int ss)
    {
        hh = trunc(ss / findHours);
        mm = trunc((ss % findHours) / findMinutes);
        ss = trunc(mm % findMinutes);
        cout << hh << ":" << mm << ":"<< ss << endl;
    }

    void ConvertTime(int hh, int mm, int ss)
    {
        cout << hh * findHours + mm * findMinutes + ss << endl;
    }
};