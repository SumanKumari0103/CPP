#include<bits/stdc++.h>
using namespace std;

void pypart(int n)
{
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {

            // Printing stars
            cout << "* ";
        }

        // Ending line after each row
        cout << endl;
    }
}

int main()
{
    int n = 5;
    pypart(n);
    return 0;
}