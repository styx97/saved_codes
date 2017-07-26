//Here is the Euclidean method of determining the gcd of two numbers

 
#include <iostream>
//with recursion

int gcd(int a,int b) {
    if (a==0) 
        return b;
    else if (b==0) 
        return a;
    else 
        return gcd(b,a%b);
}
    
//using while loop, same method 

int gcd_while(int a,int b) {
    int temporary;  // for swapping 
    while(b>0) {
        t = b;
        b = a%b;
        a = t;
    }
    return a;
}        

//tester 

int main() {
    int x = 36;,int y = 60;
    std::cout << gcd(x,y) << "\n"
    std::cout << gcd_while(x,y);
}
    
    
    
    
    
    
    
        
        
