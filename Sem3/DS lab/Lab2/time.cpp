#include <iostream>
#include <cmath>
using namespace std;
class Time
{
public:
    int hour;
    int min;
    int sec;
    void read()
    {
        cout << "enter the hour:";
        cin >> hour;
        cout << "enter the minute:";
        cin >> min;
        cout << "enter the second:";
        cin >> sec;
    };
    void display()
    {
        cout << "the time is : " << hour << " hours ," << min << " minutes ," << sec << " seconds" << endl;
    };
};
Time add(Time t1, Time t2)
{
    Time t;
    int counth = 0, countm = 0;
    int hour, min, sec;
    sec = t1.sec + t2.sec;
    if (sec >= 60)
    {
        sec -= 60;
        countm++;
    }
    min = t1.min + t2.min + countm;
    if (min >= 60)
    {
        min -= 60;
        counth++;
    }
    hour = t1.hour + t2.hour + counth;
    t.hour = hour;
    t.min = min;
    t.sec = sec;
    return t;
}
Time difference(Time t1, Time t2)
{
    Time t;
    int counth = 0, countm = 0;
    int hour, min, sec;
    if (t2.sec > t1.sec)
    {
        countm--;
        sec = 60 + t1.sec - t2.sec;
    }
    else
    {
        sec = t1.sec - t2.sec;
    }
    if (t2.min > (t1.min + countm))
    {
        counth--;
        min = 60 + t1.min - t2.min + countm;
    }
    else
    {
        min = t1.min - t2.min + countm;
    }
    hour = t1.hour - t2.hour + counth;
    t.hour = hour;
    t.min = min;
    t.sec = sec;
    return t;
}
int main()
{
    Time t1, t2;
    t1.read();
    t2.read();
    Time t = add(t1, t2);
    cout << "after adding ";
    t.display();
    Time t3 = difference(t1, t2);
    cout << "after subtracting ";
    t3.display();
    return 0;
}
