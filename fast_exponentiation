// exponentiation normally done takes n steps (multiplying each number with each other n times). It can be shortened to a great 
// extent using fast_exponentiation (logn steps).

#include <iostream>
int fast_expo(int base,int exponent) {
    if (exponent == 0) 
        return 1;
    else if (exponent == 1) 
        return base;
    else  {
        int intermediate = fast_expo(base,exponent/2);
            if (exponent&1) 
                return intermediate*intermediate*base;
            else 
                return intermediate*intermediate;
    }    
}

int quick_expo(int base,int expo) {   //same version, just using while loop instead of recursion  
    int result = 1;
    while (expo > 0) {
        if (expo&1) 
            result = base*result;
        base = base*base;
        expo = expo/2;
    }
    return result;
    
}


int main() {
    int a = 2;int b = 5;
    std::cout << fast_expo(a,b) << "\n";
    std::cout << quick_expo(a,b);
}
