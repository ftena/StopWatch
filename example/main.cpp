#include <iostream>
#include <unistd.h>
#include "StopWatch.h"

int main(int argc, char** argv)
{
    StopWatch s;
    std::cout << s.getTimeElapsed() << std::endl;
    
    s.tick();
    std::cout << s.getTimeElapsed() << std::endl;

    usleep(1000);
    s.tick();
    std::cout << s.getTimeElapsed() << std::endl;

    usleep(1000);
    s.tick();
    std::cout << s.getTimeElapsed() << std::endl;
}
