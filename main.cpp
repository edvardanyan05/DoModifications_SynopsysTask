// The main function retrieves the input string from argv[1].
// The program checks whether the number of arguments passed to main is equal to 2.
// It then calls the create_correct_string function to remove spaces, tabs, and newline characters.
// Next, it validates the processed string.
// If the string passes all validation checks, it is sent for evaluation.
#include "main.hpp"

int main(int argc, char *argv[]){
    
    if (argc != 2) {
        cout << "ERROR!!! Few arguments\n";
        return 1;
    }

    string str = create_correct_string(argv[1]);

    if(!isValidSTR(str)){
        cout << "ERROR!!! You entered wrong string\n";
        return 2;
    }
    cout << "The result is : " << solve(str) << endl;
    return 0;
}