#include <iostream>
#include <vector>
#include <string>

void zero_array(int numberes[])
{
    for(size_t i = 0; i < 5; i++)
    {
        numberes[i] = 0;
    }
}
int main()
{
    int my_numbers[5] = {1, 2, 3, 4, 5};
    zero_array(my_numbers);
    for(size_t i = 0; i < 5; i++)
    {
        std::cout << my_numbers[i] << std::endl;
    }
    return 0;
}