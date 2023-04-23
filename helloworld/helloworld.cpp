/**
 * Copyright 2022 Timpy.
 */

#include <iostream>
#include <string>
#include <vector>

using ::std::cout;
using ::std::endl;
using ::std::string;
using ::std::vector;

int main() {
    vector<string> msg{"Hello", "C++",     "World",
                       "from",  "VS Code", "and the C++ extension!"};

    for (const string &word : msg) {
        cout << word << " ";
    }

    cout << endl;

    char a[10];
    a[7] = 't';
    a[8] = '\r';
    a[9] = '\n';
    cout << a[7] << a[8] << a[9];

    return 0;
}
