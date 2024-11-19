/**
 * Copyright 2023 tim.z.hood@gmail.com
 * 24/05/2023
 */

#include <exception>
#include <fstream>
#include <iostream>

using std::cerr;
using std::cout;
using std::streamoff;

namespace
{

    void bob()
    {
        try
        {
            std::ifstream inputFile;

            inputFile.open("c:\\temp\\jim.bin", std::ifstream::binary);
            if (inputFile.good())
            {
                cout << "file is good" << '\n';

                // get length of file:
                inputFile.seekg(0, std::ios::end);
                const streamoff length = inputFile.tellg();
                inputFile.seekg(0, std::ios::beg);

                // allocate memory:
                char *buffer = new char[length];

                // read data as a block:
                inputFile.read(buffer, length);

                cout << "read " << length << " bytes from file" << '\n';

                inputFile.close();

                // print content
                // std::cout.write(buffer, length);

                // must remember to recover memory
                delete[] buffer;
            }
            else
            {
                cerr << "file is bad" << '\n';
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }

} // anonymous namespace

auto main() -> int
{
    try
    {
        cout << "hello world" << '\n';

        bob();

        cout << "goodbye world" << '\n';
    }
    catch (const std::exception &)
    {
        // dummy exception handler to shut clang up
        ;
    }

    return 0;
}
