#ifndef TIMER_HPP
#define TIMER_HPP

#include <chrono>
#include <iostream>
#include <iomanip>

class Timer {
    private:
        std::chrono::high_resolution_clock::time_point start_time;
    public:
        void start();
        void stop();
};

extern Timer timer;

#endif  //TIMER_HPP