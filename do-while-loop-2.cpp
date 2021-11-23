#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
     int start = 12;
    int end = 50;

    do
    {
        /* check for even number */
        if (start % 2 == 0)
        {
            /* if true then the number is even */
            cout << start << "\n";
            
        }
        start++;
        
    } while (start <= end);
    return 0;
}
