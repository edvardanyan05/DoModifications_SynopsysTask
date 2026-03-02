// The main function retrieves the input string from argv[1].
// The program checks whether the number of arguments passed to main is equal to 2.
// It then calls the removeSpaces function to remove spaces, tabs, and newline characters.
// After that, it calls the addMultiplicationOp function to insert '*' where needed.
// Next, it validates the processed string.
// If the string passes all validation checks, it is sent for evaluation.
#include "main.hpp"

int main(int argc, char *argv[]){
    
    if (argc != 2) {
        cout << "ERROR!!! Few arguments\n";
        return 1;
    }

    string str = removeSpaces(argv[1]);
    str = addMultiplicationOp(str);
    
    if(!isValidSTR(str)){
        cout << "ERROR!!! You entered wrong string\n";
        return 2;
    }

    if (findParam(str)){
        for(size_t i = 1 ; i <= 100 ; i++){
            string strArg = setParamValue(str, i, findParam(str));
            cout << "Parameter = " << i << ", ";
            cout << "the result is : " << solve(strArg) << endl;
        }
    }else{
        cout << "The result is : " << solve(str) << endl;
    }

    return 0;
}