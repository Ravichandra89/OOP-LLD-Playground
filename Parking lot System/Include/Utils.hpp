#ifndef UTILS_HPP
#define UTILS_HPP

#include <chrono>
#include <string>
#include <random>
#include <sstream>
#include <iomanip>

using namespace std;


namespace Utils {

    // Generate a simple random ID string (e.g., for tickets, spots)
    inline string generateId(const string& prefix = "") {
        static mt19937_64 rng{ random_device{}() };
        static uniform_int_distribution<uint64_t> dist;
        uint64_t v = dist(rng);
        ostringstream oss;
        oss << prefix;
        oss << hex << v;
        return oss.str();
    }

    // Return current time_point
    inline chrono::system_clock::time_point now() {
        return chrono::system_clock::now();
    }

    // Compute duration in hours (as double) between two time_points
    inline double hoursBetween(const chrono::system_clock::time_point& start,
                               const chrono::system_clock::time_point& end) {
        using namespace chrono;
        auto diff = end - start;
        double hrs = duration_cast<duration<double, ratio<3600>>>(diff).count();
        return hrs;
    }

    // Format time_point to string (for logging)
    inline string timePointToString(const chrono::system_clock::time_point& tp) {
        time_t t = chrono::system_clock::to_time_t(tp);
        tm tm{};
#if defined(_WIN32) || defined(_WIN64)
        localtime_s(&tm, &t);
#else
        localtime_r(&t, &tm);
#endif
        ostringstream oss;
        oss << put_time(&tm, "%Y-%m-%d %H:%M:%S");
        return oss.str();
    }
}

#endif
