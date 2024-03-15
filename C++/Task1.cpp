//Code as fast as you can! You need to double the integer and return it.
#include<iostream>
#include <cstdint>

int32_t double_integer(int32_t n)
{
  return n+=n;// We need solution fast !!!
}

int main()
{
    int32_t n = 5;
    double_integer(n);
}