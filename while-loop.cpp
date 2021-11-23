#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int start = 20;

    int end = 25;

    int sum = 0;


    while (start <= end)
    {        
        sum = sum + start;
        
        start++;

        // cout << "The subtotal = " << sum << "\n";
    }
    
    cout << "The total = " << sum;
    return 0;
}
