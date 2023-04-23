/**
 * Copyright 2023 tim.z.hood@gmail.com
 * 21/04/2023
 */

#include <iostream>

using std::cout;
using std::endl;

void SwapPointers(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// void swap_references(int &x, int &y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

int main()
{
    cout << "hello world" << endl;
    printf("hello world \n");

    // pointer to an "int", currently unassigned, actually now assign to "null"
    int *ip = nullptr;

    // declare "int" variable "total" and initialise to zero
    int total = 0;
    printf("total=%d \n", total);
    cout << "total=" << total << endl;

    // use "address-of" operator, assign the address of "total" to "ip", now "ip" points to "total"
    ip = &total;

    // use "dereference" operator, get what "ip" points at, i.e.: the value of "total"
    printf("*ip=%d \n", *ip);
    cout << "*ip=" << *ip << endl;

    // change "total" directly and see what "ip" points at
    total = 123;
    cout << "*ip=" << *ip << endl;

    // swap some things
    int count = 0;
    cout << "count=" << count << endl;
    cout << "total=" << total << endl;
    SwapPointers(&count, &total);
    cout << "count=" << count << endl;
    cout << "total=" << total << endl;
    // swap_references(count, total);
    // cout << "count=" << count << endl;
    // cout << "total=" << total << endl;

    cout << "before increment via pointer, total=" << total << endl;
    (*ip)++;
    cout << "after increment via pointer, total=" << total << endl;
    (*ip)--;
    cout << "after decrement via pointer, total=" << total << endl;

    cout << "goodbye world" << endl;
}
