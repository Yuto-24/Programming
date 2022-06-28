#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

typedef struct {
    int hour;  //時間
    int min;   //分
    int from;  //出発駅
    int to;    //到着駅
} route_timetable;

route_timetable a[1000];
// route_timetable a1u[];
// route_timetable a7u[];
// route_timetable a7d[];
// route_timetable a13d[];
// route_timetable b[];

// char a01_a07[];
// char a01_a13[];
// char a07_a01[];
// char a07_a13[] = "6:10";
// char a13_a01[];
// char a13_a07[] = "22:52";

void plus_min(int *h, int *m, int p) {
    *m += p;
    if (*m >= 60) {
        *m %= 60;
        *h += 1;
    }
}

void make_time_table_a() {
    int hour = 5;
    int min = 55;
    int i = 0;
    for (i;; i++) {
        a[i].hour = hour;
        a[i].min = min;
        a[i].from = 1;
        a[i].to = 7;
        plus_min(&hour, &min, 10);
        // min += 10;
        // if (min >= 60) {
        //     min %= 60;
        //     hour++;
        // }
        if (hour >= 23) {
            break;
        }
    }
}

int main(int argc, char **argv) {
    char a_b, station_name[2], up_down, hour;
    cin >> a_b >> station_name >> up_down >> hour;
    cout << hour << ":";
    int station_num = station_name[1] - 48;

    if (a_b == 'A') {
        // code
        make_time_table_a();
        for (int i = 0; i < 1000; i++) {
            if (a[i].from == 1 && a[i].to == 7 && a[i].hour == 13) {
                cout << " " << a[i].min;
                /* code */
            }
        }
    } else {
        // B mode
    }

    cout << endl;
    printf("%d\n", station_num);
    return 0;
}
