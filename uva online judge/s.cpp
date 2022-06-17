#include <iostream> 
//using namespace std;
int main()
{
    int sum1 = 100 + 150;
    int sum2 = sum1 + 250;
    int sum3 = sum2 + sum2;
    std::cout << sum1 << std::endl ;
    std::cout << sum2 << std::endl;
    std::cout << sum3 << std::endl;
    
    return 0;
}