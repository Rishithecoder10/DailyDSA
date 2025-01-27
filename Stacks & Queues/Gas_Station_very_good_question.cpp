 int startStation(vector<int> &gas, vector<int> &cost) {
    int n = gas.size();
    int totalGas = 0, totalCost = 0;
    int currentTank = 0;
    int start = 0;

    // Calculate total gas and total cost
    for (int i = 0; i < n; ++i) {
        totalGas += gas[i];
        totalCost += cost[i];
    }

    // If total gas is less than total cost, it's impossible to complete the circuit
    if (totalGas < totalCost) {
        return -1;
    }

    // Find the starting station
    for (int i = 0; i < n; ++i) {
        currentTank += gas[i] - cost[i];
        if (currentTank < 0) {
            start = i + 1; // Reset starting station
            currentTank = 0; // Reset gas tank
        }
    }

    return start;
}
