#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i]; //populate the array
    }

    for (int j = N - 1; j >= 0; j--)
    {
        cout << arr[j] << " "; //printing out array in reverse order
    }

    return 0;
}
