#include <iostream>

using namespace std;

int split(string input, char delimiter, string arr[], int arrSize){
    // define a temporary string and helper variables
    string temp = "";
    int size = 0;
    
    // check for empty input
    if(input == "")
    {
        return 0;
    }

    else
    {
        for(unsigned int i = 0; i < input.length(); i++)
        {
            // Check for delimiter
            if(input[i] != delimiter) 
            {
                // If the current character is not a delimeter, add it to the temporary string
                temp = temp + input[i];
            }

            // if the current chracter is a delimeter
            else
            {
                size++;
                // check if size > arrSize
                if (size > arrSize){
                    size = -1;
                    return size;
                }

                // add temporary string to the array
                // set temp to an empty string
                else{
                    arr[size - 1] = temp;
                    temp = "";
                }
            }
        }
        // Account for final string
        size++;
        // check if size > arrSize
        if (size > arrSize){
            size = -1;
            return size;
        }

        // add temporary string to the array
        // Update size, set temp to an empty string
        else{
            arr[size - 1] = temp;
            temp = "";
        }
    }

    return size;
}