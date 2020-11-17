#include <iostream>

using namespace std;

int main()
{
    int N = 5;

    int T[N];
    int ST[N];
    int OT[N];

    for (int i = 0; i < N; i++)
    {
        cin >> T[i];
    }
    for (int i = 0; i < N; i++)
    {
        int temp = T[i];
        int j = i - 1;

        while (j >= 0 && temp <= T[j])
        {
            ST[j + 1] = ST[j];
            j = j - 1;
        }
        ST[j + 1] = temp;
    }

 
    cout << "Max " << ST[N - 1] << endl;
    cout << "Min " << ST[0] << endl;

    int x = N - 1;
    int y = 0;
    while (x >= 0)
    {
        OT[x] = T[y];
        x--;
        y++;
    }

    for (int i = 0; i < N; i++)
    {
        cout << OT[i] << endl;
    }
}
