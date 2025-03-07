#include "../include/timer.hpp"

Timer timer;

void Timer::start() {
    start_time = std::chrono::high_resolution_clock::now();
    return;
}

void Timer::stop() {

    auto end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end_time - start_time;

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "*** Execution time: " << duration.count() << " sec ***" << std::endl;

    // std::chrono::duration<double, std::milli> duration = end_time - start_time;
    // std::cout << "*** Execution time: " << duration.count() << " ms or " << duration.count()/1000 << " sec ***" << std::endl;
    return;
}