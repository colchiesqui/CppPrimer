#include <iostream>

int printHelloWorld();
int multiply(int v1, int v2);

int main()
{
    std::cout << "Enter 2 numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
        << " is " << v1 + v2 << std::endl;

    printHelloWorld();
    multiply(v1, v2);

    return 0;
}

int printHelloWorld() 
{
        std::cout << "Hello World" << std::endl;

        return 0;
}

int multiply(int v1, int v2) 
{
    int result = v1 * v2;
    std::cout << "The multiplication of " << v1 << " and " << v2
        << " is " << result << std::endl;

    return result;
}
