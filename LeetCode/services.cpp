#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(int maxRequestsPerService, const vector<int>& serviceRequests, int totalRequests) {
    int extraRequests = 0;  // Requests exceeding maxRequestsPerService
    int availableSlots = 0; // Free space in underloaded services

    for (int requests : serviceRequests) {
        if (requests > maxRequestsPerService) {
            extraRequests += (requests - maxRequestsPerService);
        } else {
            availableSlots += (maxRequestsPerService - requests) / 2;
        }
    }

    return availableSlots >= extraRequests;
}

int findMinimumTime(int numServices, vector<int>& requestCache) {
    vector<int> serviceRequests(numServices, 0);

    // Count requests per service
    for (int request : requestCache) {
        serviceRequests[request - 1]++;
    }

    int low = 1, high = *max_element(serviceRequests.begin(), serviceRequests.end());

    while (low < high) {
        int mid = (low + high) / 2;
        if (isPossible(mid, serviceRequests, requestCache.size())) {
            high = mid; // Try for a smaller possible time
        } else {
            low = mid + 1; // Increase time since mid was too small
        }
    }

    return low;
}

int main() {
    int numServices = 3;
    vector<int> requestCache = {1, 2, 2, 3, 3, 3, 3}; 

    cout << "Minimum time to process all requests: " << findMinimumTime(numServices, requestCache) << endl;
    return 0;
}
