#include <iostream>

using namespace std;

class Timer{
public:
    int hours;
    int minutes;
    int seconds;

    Timer() {
    };
    void setter(int h, int m, int s){
        if(s>=60){
            m += s/60;
            s = s%60;
        }
        if(m >= 60){
            h += m/60;
            m = m%60;
        }
        if(h >= 24){
            h = h%24;
        }
        this -> hours = h;
        this -> minutes = m;
        this -> seconds = s;
    }

    void ptime(){
        cout << hours << ":" << minutes << ':' << seconds;
    }
};


int main(){
    int h, m , s; cin >> h >> m >> s;
    Timer a1;
    a1.setter(h, m, s);
    a1.ptime();
    return 0;
};