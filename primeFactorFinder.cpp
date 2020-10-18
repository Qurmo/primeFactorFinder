#include <iostream>
#include <math.h> //needed for the sqrt() function 

int main()
{
    unsigned long long number = 600851475143; //this number will be tested to find the largest prime fraction.
    unsigned long long z = number; //Used for the final text no actions done on this number. 

    for(unsigned long counter=2;counter<=sqrt(number);counter++)
    {
        if(number%counter==0)
        {
            number=number/counter;
            counter--;
        }
    }

if(number>=2)
{
    std::cout << "Largest prime factor of " << z << " is " << number << std::endl;
}

return 0;
}
