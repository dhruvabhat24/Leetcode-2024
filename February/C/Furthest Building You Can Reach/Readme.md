# Approach
The basic approach is that we will be checking only those ith building on which i+1th building will have the greater height then ith, then we will be moving the difference value to the min priority, This priority queue will contain our value on which we will be using ladders, if the priority queue size became greater then the number of ladders, then we have to use bricks, hence we will be getting the minimum of the priority queue and poping it from the array and then checking if the we have enough brick to go ahead if not we will be returning that we came till ith building(0-indexed) else we will be subtracting the min value from the bricks.

## Complexity 
### Time Complexity: O(nlogn)
### Space Complexity: O(Ladders) or O(n) 
