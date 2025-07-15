#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent a train with arrival and departure times
struct Train {
    int arrival;
    int departure;
};

// Comparison function to sort trains by departure time
bool compareByDeparture(const Train &a, const Train &b) {
    return a.departure < b.departure;
}

int maxTrainsOnTrack(vector<Train> &trains) {
    // Sort trains by departure time
    sort(trains.begin(), trains.end(), compareByDeparture);

    int count = 0;   // Count of trains on the track
    int lastDeparture = 0; // Last departure time of a train considered

    for (const auto &train : trains) {
        // If the train's arrival is after or at the last train's departure
        if (train.arrival >= lastDeparture) {
            count++;
            lastDeparture = train.departure; // Update the last departure time
        }
    }

    return count;
}

int main() {
    int n = 4; // Number of trains
    vector<Train> trains = {
        {1000, 1030},  // Train 1: Arrival 10:00 AM, Departure 10:30 AM
        {1015, 1025},  // Train 2: Arrival 10:15 AM, Departure 10:25 AM
        {1030, 1040},  // Train 3: Arrival 10:30 AM, Departure 10:40 AM
        {1045, 1100}   // Train 4: Arrival 10:45 AM, Departure 11:00 AM
    };

    cout << "Maximum trains on the track in a day: " << maxTrainsOnTrack(trains) << endl;

    return 0;
}
