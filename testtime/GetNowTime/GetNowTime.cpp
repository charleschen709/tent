#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    time_t new_time, offset_time;
    int cnt = 0;
    int Delta = 2;
    int MAXNUM = 10;

    new_time = time( NULL );
    cout << new_time << endl;

    offset_time = new_time + Delta;
    cout << offset_time << endl;



    while( cnt != MAXNUM )
    {
        new_time = time( NULL );
        if( new_time == offset_time )
        {
            cout<< cnt << "----" << new_time << endl;
            offset_time = new_time + Delta;
            cnt++;
        }
    }

    return 0;
}
