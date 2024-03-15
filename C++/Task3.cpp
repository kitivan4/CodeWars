/*
Напишіть функцію, яка обчислює середнє арифметичне чисел у заданому списку.
Порожні масиви повинні повертати 0.
*/
#include<iostream>
#include<vector>

double calcAverage(const std::vector<int>& values){

    double sum_arr = 0.0;
    int size_arr = 0;

    for (int value : values){
        sum_arr += value;
        size_arr++;
    }

    double average;

    average = sum_arr / size_arr;

    return size_arr > 0 ? average : 0;
}

int main(){
    
    std::vector<int> values = {};

    std::cout << calcAverage(values) << std::endl;

    return 0;
}
