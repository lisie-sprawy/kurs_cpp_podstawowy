#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
        if(command == "add")
        return std::to_string(first + second);
        if(command == "subtract")
        return std::to_string(first - second);
        if(command == "multiply")
        return std::to_string(first * second);
        if(command == "divide"){
    	    if(second == 0)
            return "Division by 0";
        return std::to_string(first/second);
         }
        return "Invalid data";
}