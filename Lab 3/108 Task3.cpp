#include <bits/stdc++.h>
using namespace std;

class Time{
private:
    int hours;
    int minutes;
    int seconds;
public:
    int hour(){
        return hours;
    }
    int minute(){
        return minutes;
    }
    int second(){
        return seconds;
    }
    void reset(int h,int m,int s){
        hours=h;
        minutes=m;
        seconds=s;
    }
    void advance(int h,int m, int s){
        seconds=seconds+s;
        if(seconds>59){
            seconds=60;
            minutes++;
        }
        minutes=minutes+m;
        if(minutes>60){
            minutes=60;
            hours++;
        }
        hours=hours+h;
        if(hours>24){
            hours=(hours+1)%24;
        }
    }
    void print(){
        cout << hours << ':' << minutes << ':' << seconds;
    }
};
int main()
{
    Time t;
    t.reset(10,15,30);
    t.print();
}
