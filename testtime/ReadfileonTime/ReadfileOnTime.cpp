/// @file ReadfileOnTime.cpp

#include <iostream>
#include <ctime>
#include <fstream>
#include <stdlib.h>

using namespace std;

/// ��ǰ��������
void ReadFile();

int main()
{
    cout << "��ʱ��ȡ�ļ�!" << endl;
    time_t new_time, offset_time;
    int cnt = 0;
    int Delta = 4;
    int MAXNUM = 30;

    new_time = time( NULL );
    //cout << new_time << endl;

    offset_time = new_time + Delta;
    //cout << offset_time << endl;

    while( cnt != MAXNUM )
    {
        new_time = time( NULL );
        if( new_time == offset_time )
        {
            cout<< cnt << "----" << new_time << endl;
            ReadFile();
            offset_time = new_time + Delta;
            cnt++;
        }
    }
    return 0;
}

/// ��ȡ�ļ�
void ReadFile()
{
    string line;
    ifstream fileInput( "a.txt", ios::in );

    if( fileInput.is_open() != 0 )
    {
        while( getline( fileInput, line ) )
        {
            cout << line << endl;
        }

        fileInput.close();
    }
    else
    {
        cout << "The file could not been opend!" << endl;
        exit( 1 );
    }
}
