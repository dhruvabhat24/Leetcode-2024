func countStudents(students []int, sandwiches []int) int {
    
    count := [2]int{}
    
    for _, student := range students {
        count[student]++
    }

    for i, sandwich := range sandwiches {
        if count[sandwich] == 0 {
            return len(sandwiches) - i
        }
        
        count[sandwich]--
    }

    return 0
}
