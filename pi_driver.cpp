#include "pi.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  estimating_pi k;
    k.calculate_pi(10000000);
    
    return 0;
}

