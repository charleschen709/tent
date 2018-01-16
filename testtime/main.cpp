/// @file main.cpp
#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

int main()
{
    struct tm *t_tm, when;
    time_t timer, result;
    time(&timer);
    cout<<timer<<endl;
    t_tm = localtime(&timer);

    cout<<"NOW IS : "
        <<t_tm->tm_year+1900<<"/"
        <<t_tm->tm_mon+1<<"/"
        <<t_tm->tm_mday<<" "
        <<t_tm->tm_hour<<":"
        <<t_tm->tm_min<<":"
        <<t_tm->tm_sec<<endl;

    ///数字变日期信息
    timer = 1063324800;
    cout << timer << endl;
    t_tm = localtime(&timer);

    cout<<"NOW IS : "
        <<t_tm->tm_year+1900<<"/"
        <<t_tm->tm_mon+1<<"/"
        <<t_tm->tm_mday<<" "
        <<t_tm->tm_hour<<":"
        <<t_tm->tm_min<<":"
        <<t_tm->tm_sec<<endl;

    ///日期信息变数字信息
    int year, month, day;
//    unsigned long result;
    cout << "Enter year month day" << endl;
    cin >> year >> month >> day;

    when.tm_year = year - 1900;
    when.tm_mon = month;
    when.tm_mday = day;
    when.tm_hour = 8;
    when.tm_min = 0;
    when.tm_sec = 0;

    result = mktime( &when );
    cout << result << endl;

//    cout << "Enter year-month-day:";
//    scanf( "%d-%d-%d", &year, &month, &day );
//    result =  year;
//    result = month << 12;
//    result = day << 14;
//    cout << "the result \n" << result << endl;

    return 0;
}
