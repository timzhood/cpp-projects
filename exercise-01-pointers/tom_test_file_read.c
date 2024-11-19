
#include <stdio.h>

const int MAX_FILE_SIZE = 2048;

int main()
{
    FILE *inputFile;
    unsigned char buffer[2048];
    size_t number;

    inputFile = fopen("c:\\temp\\jim.bin", "rb");
    if (inputFile)
    {
        number = fread(buffer, MAX_FILE_SIZE, 1, inputFile);
        printf("number=[%zu]\n", number);
    }
    else
    {
        printf("error opening file\n");
    }
}
