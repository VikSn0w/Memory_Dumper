#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void FileCreations(string Name, string FileSize, int Copies);

main()
{
    system("title Memory Dumper 1.0 - by viksn0w");
    string ByteSize, NomeFile;
    int choice;

    printf("Name of the file: ");
    cin  >> NomeFile;

    printf("\nSize of the file (byte - 1MB =~ 1050000 Bytes): ");
    cin  >> ByteSize;

    printf("\nNumber of copies: ");
    cin  >> choice;

    FileCreations(NomeFile, ByteSize, choice);

    system("pause");
}

void FileCreations(string Name, string FileSize, int Copies)
{
    string Final;
    for(int i = 0; i < Copies; i++)
    {
        if(i == 0) Final = "fsutil file createnew " + Name + " " + FileSize;
        else       Final = "fsutil file createnew " + Name + to_string(i) + " " + FileSize;
        system(Final.c_str());
    }
}
