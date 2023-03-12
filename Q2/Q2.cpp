#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int start_hour, start_minute, end_hour, end_minute;
    int duration_hour, duration_minute;
    int total_fee = 0;

    /*輸入開始時間*/
    cout << "";
    cin >> start_hour >> start_minute;

    /* 輸入結束時間*/
    cout << "";
    cin >> end_hour >> end_minute;

    /*計算停車時間（以半小時為單位）*/ 
    duration_hour = end_hour - start_hour;
    duration_minute = end_minute - start_minute;
    if (duration_minute < 0) {
        duration_hour--;
        duration_minute += 60;
    }
    int duration_half_hour = ceil((duration_hour * 60 + duration_minute) / 30.0);

    /*根據費率計算停車費*/ 
    if (duration_half_hour <= 4) {
        if (duration_half_hour <= 4) {
            total_fee = duration_half_hour * 30;
        }
        else {
            total_fee = 2 * 30 + (duration_half_hour - 2) * 40;
        }
    }
    else {
        total_fee = 2 * 30 + 2 * 40 + (duration_half_hour - 4) * 60;
    }

    // 輸出停車費
    cout << "停車費為：" << total_fee << " 元\n";

    return 0;
}