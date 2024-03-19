int leastInterval(char* tasks, int tasksSize, int n) {
     #define MAX_TASKS 26 // Maximum number of tasks (A-Z)
    
    // Array to store the frequency of each task
    int taskCounts[MAX_TASKS] = {0};
    
    // Count the frequency of each task
    for (int i = 0; i < tasksSize; i++) {
        taskCounts[tasks[i] - 'A']++;
    }
    
    // Find the task with the maximum frequency
    int maxFrequency = 0;
    for (int i = 0; i < MAX_TASKS; i++) {
        if (taskCounts[i] > maxFrequency) {
            maxFrequency = taskCounts[i];
        }
    }
    
    // Count how many tasks have the same maximum frequency
    int maxCount = 0;
    for (int i = 0; i < MAX_TASKS; i++) {
        if (taskCounts[i] == maxFrequency) {
            maxCount++;
        }
    }
    
    // Calculate the minimum intervals required
    // (maxFrequency - 1) * (n + 1) is the number of intervals taken by the most frequent task and its occurrences
    // Add maxCount to account for the tasks with the same maximum frequency
    // If there are more tasks than the intervals taken by the most frequent task, return the length of tasks
    int result = (maxFrequency - 1) * (n + 1) + maxCount;
    return result > tasksSize ? result : tasksSize;
}

