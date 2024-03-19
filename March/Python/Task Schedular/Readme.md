## Task Scheduler

This Python code implements a task scheduler algorithm that minimizes the idle time between tasks. The algorithm is based on the "least interval" approach.

### Method:

1. **Initialization:**
    - Count the occurrences of each task using `Counter`.
    - Create a max heap (`maxHeap`) with negative counts of task occurrences.
    
2. **Main Loop:**
    - Initialize time counter.
    - Use a queue (`q`) to keep track of tasks that need to be scheduled after the cooling period (`n`).
    - Loop while there are tasks in the max heap or queue.
    
3. **Task Scheduling:**
    - Increment time.
    - If the max heap is not empty:
        - Pop the task with the highest count from the max heap.
        - If the count is non-zero, add it to the queue with the scheduled time after the cooling period.
    - If the queue is not empty and the scheduled time for the first task in the queue has arrived, push it back into the max heap.
    
4. **Return:**
    - Return the total time taken to schedule all tasks without any idle time.
