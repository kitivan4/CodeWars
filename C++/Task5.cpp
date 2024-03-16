/*
Годинник показує h годин, m хвилин і s секунд після півночі.
Ваша задача - написати функцію, яка повертає час з опівночі у 
мілісекундах.
Приклад:
h = 0
m = 1
s = 1
result = 61000
Вхідні обмеження:
0 <= h <= 23
0 <= m <= 59
0 <= s <= 59
*/

#include<iostream>

using namespace std;

int past(int h, int m, int s) {
    if ((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59)) {
        return (h*3600+m*60+s)*1000;
    } else
        return 0;
}
  

int main(){
    int h = 0, m = 60, s = 1;
    cout << past(h, m, s) << endl;
    
    return 0;
}
