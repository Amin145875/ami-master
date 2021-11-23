
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
      int userInput = 0;// to hold user input
    int sum = 0; //to hold the sum

    do
    {        
        /* ask for user input */
        cout << "Enter a number: ";
        // save user input to userInput variable
        cin >> userInput;
        // add userInput to sum
        sum = sum + userInput;
    } while (userInput != 0);//check if the user input == 0
    // print the sum
    cout << "The sum is " << sum;  
    return 0;
}
