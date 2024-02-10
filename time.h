#include<bits/stdc++.h>
using namespace std;

auto getTime()
{
    // Get the current time point
    auto now = std::chrono::system_clock::now();

    // Get the duration since the epoch (Jan 1, 1970) until now
    auto duration = now.time_since_epoch();

    // Convert the duration to milliseconds
    auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration);

    // Extract the count of milliseconds
    auto millis_count = millis.count();

    // Output the current time in milliseconds
    // std::cout << "Current time in milliseconds: " << millis_count << std::endl;
    return millis_count;
}