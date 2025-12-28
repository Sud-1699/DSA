#include <iostream>
#include <chrono>
#include <ctime>

int main() {
    // Time Point
    std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();

    // Clock
    // Get the current time_point using system_clock
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    // Get the time_point 1 hour from now
    std::chrono::system_clock::time_point one_hour_from_now = now + std::chrono::hours(1);

    // Converting Time Points to Calendar Time
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::cout << "Current time: " << std::ctime(&now_c) << '\n';
    return 0;
}