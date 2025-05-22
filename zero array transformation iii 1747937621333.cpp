sort(queries.begin(), queries.end());
priority_queue<int> available;
priority_queue<int, vector<int>, greater<int>> assigned;
int count = 0;