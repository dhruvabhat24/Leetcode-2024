Iterate through the input string 's' and count the frequency of each character using an unordered map 'hm'.
Use a priority queue 'pq' to store pairs of characters and their frequencies, sorted in decreasing order of frequency.
Define a lambda function 'cmp' to compare pairs based on the second element (frequency).
Iterate through the hashmap entries and push each pair into the priority queue.
Pop elements from the priority queue and append characters to the result string according to their frequency.
Complexity
