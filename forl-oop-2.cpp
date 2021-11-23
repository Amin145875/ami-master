#include <iostream>
using namespace std;
int main()
{
    int start = 21;
    int end = 24;
    int sum = 0;
    for (int start = 0; start < end; start++)
    {
        sum += start;
    }
    
   cout << "The sum is " << sum;

    return 0;
}
