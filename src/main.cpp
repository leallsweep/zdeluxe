#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

int main() {
    std::string line;
    
    while (true) {
        std::cout << "Enter expression (or 'exit'): ";
        std::getline(std::cin, line);
        
        if (line == "exit") break;
        if (line.empty()) continue;
        
        double a, b;
        char op;
        
        std::stringstream ss(line);
        ss >> a >> op >> b;
        
        if (ss.fail()) {
            std::cout << "ERROR! Use: number operator number (e.g., 2 + 2)" << std::endl;
            continue;
        }
        
        switch(op) {
            case '+': std::cout << a + b << std::endl; break;
            case '-': std::cout << a - b << std::endl; break;
            case '^': std::cout << pow(a, b) << std::endl; break;
            case '*': std::cout << a * b << std::endl; break;
            case '/': 
                if (b == 0) std::cout << "Cannot divide by zero!" << std::endl;
                else std::cout << a / b << std::endl;
                break;
            default:
                std::cout << "Unknown operator! Use + - * /" << std::endl;
        }
    }
    
    return 0;
}
