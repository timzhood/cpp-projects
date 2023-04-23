/**
 * Copyright 2023 tim.z.hood@gmail.com
 * 21/04/2023
 */

#include <iostream>

using std::cout;
using std::endl;

void SwapPointers(int *x_number, int *y_number)
{
    // auto timpy = *x;

    const int temp = *x_number;
    *x_number = *y_number;
    *y_number = temp;
}

// void swap_references(int &x, int &y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

auto main() -> int
{
    cout << "hello world" << endl;
    printf("hello world \n");

    // pointer to an "int", currently unassigned, actually now assign to "null"
    int *int_ptr = nullptr;

    // declare "int" variable "total" and initialise to zero
    int total = 0;
    printf("total=%d \n", total);
    cout << "total=" << total << endl;

    // use "address-of" operator, assign the address of "total" to "ip", now "ip" points to "total"
    int_ptr = &total;

    // use "dereference" operator, get what "ip" points at, i.e.: the value of "total"
    printf("*int_ptr=%d \n", *int_ptr);
    cout << "*int_ptr=" << *int_ptr << endl;

    // change "total" directly and see what "ip" points at
    const int INITIAL_VALUE = 123;
    total = INITIAL_VALUE;
    cout << "*int_ptr=" << *int_ptr << endl;

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
    (*int_ptr)++;
    cout << "after increment via pointer, total=" << total << endl;
    (*int_ptr)--;
    cout << "after decrement via pointer, total=" << total << endl;

    cout << "goodbye world" << endl;

    return 0;
}
