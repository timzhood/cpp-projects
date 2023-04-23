/**
 * Copyright 2023 tim.z.hood@gmail.com
 * 21/04/2023
 */

#include <iostream>

using namespace std;

void swap_pointers(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_references(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

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

    // using the "address-of" operator, assign the address of "total" to "ip", now "ip" points to "total"
    ip = &total;

    // using the "dereference" operator, get what "ip" points at, i.e.: the value of "total"
    printf("*ip=%d \n", *ip);
    cout << "*ip=" << *ip << endl;

    // ....
    total = 123;
    cout << "*ip=" << *ip << endl;

    // swap some things
    int count = 0;
    cout << "count=" << count << endl;
    cout << "total=" << total << endl;
    swap_pointers(&count, &total);
    cout << "count=" << count << endl;
    cout << "total=" << total << endl;
    swap_references(count, total);
    cout << "count=" << count << endl;
    cout << "total=" << total << endl;

    cout << "goodbye world" << endl;
}
