#include <iostream>
#include <vector>
#include <math.h>
#include <string.h>

using namespace std;

void dectobin(int a)
{
    vector<int> arr;
    int temp = a;
    while (temp > 0)
    {
        arr.push_back(temp);
        temp /= 2;
    }
    for (int x = arr.size() - 1; x >= 0; x--)
    {
        cout << (arr[x] % 2);
    }
    cout << endl;
}

void bintodec(string a)
{
    int x = 0;
    for (int i = 0; i <= a.size() - 1; i++)
    {
        x += (static_cast<unsigned __int64>(a[i]) - 48) * pow(2, (a.size() - 1) - i);
    }
    cout << x << endl;
}

int main(int argc, char* argv[])
{
    if (argc <= 1)
    {
        cout << "-b <number> (binary to decimal)" << endl
            << "-d <number> (decimal to binary)" << endl;
    }

    else if (argc == 3)
    {
        if (strcmp(argv[1], "-b") == 0)
        {
            bintodec(string(argv[2]));
        }
        if (strcmp(argv[1], "-d") == 0)
        {
            //char *p;
            dectobin(strtol(argv[2], NULL, 10));
        }
    }
    else
    {
        cout << "-b <number> (binary to decimal)" << endl
            << "-d <number> (decimal to binary)" << endl;
    }
}
