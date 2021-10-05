// I/O stream library from std, for using cin and cout
#include <iostream>
using namespace std;

// function phototype
bool arrayReverse(char* array, int start, int end);

// the starting of program
int main()
{
    // the input array
    char array[100] = "robomaster2022";
    // the input number
    int startingPoint=0, endingPoint=5;

    // call the function
    if (arrayReverse(array, startingPoint, endingPoint)) 
    {
        // output the result
        cout << array << endl;
    }
    else 
    {
        // output the error
        cout << "Error, please check the input" << endl;
    }

    // end of the program
    return 0;
}

/* Write your code under this line, you can define any helper function */
bool arrayReverse(char* array, int start, int end) {
    // return false if the start is larger than end
    // otherwise reverse the array
    if (start > end)
        return false;
    bool marker[end-start+1] = {};
    for (int i = 0; i <= end-start; i++) {
        marker[i] = true;
    }
    for (int i = start; i <= end; i++) {
        if (marker[i-start] && marker[end-start-i]) {
            char x = array[i];
            array [i] = array [end-i];
            array [end-i] = x;
            marker[i-start] = false;
            marker[end-start-i] = false;
        }
    }
    return array;
    return false;
}
