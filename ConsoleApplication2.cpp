#include <iostream>
#include<time.h>
using namespace std;

int main()
{
    int n, set[100];
    cout << "Enter the number of digits: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; ++i) 
    {
        set[i] = rand() % 101;
        cout << set[i] << "\t";
    }
    return 0;
}