# The problem 
  We have to calculate the subarrays of the array passed to it. The subarray should contain only 3 elements in which the difference between the final element in the subarray and the first element in the subarray should be equal to or less than the given value `k` .

# Approach

 In this program we are first sorting the array and then we are pushing the elements to a new vector and for every three elements in vector `vec` we are checking the constraing `nums[i] - vec[0] <=k` so that then if the condition is satisfied we are pushing the elements to the back of the array. 

 ## Variables

 - `result` is the variable used to store the subarrays that are divided and the final solution is stored in it .

 - `vec` is the temporary vector which stores the three elements from the sorted array which satisfies the condtion.

## Looping
  The `for` looping is used to iterate the element from `index 0` to the element at `index n` (The last element).

 - In the looping we check the condition ` if vec is empty` then `push` the values of the `nums` array in the iteration and continue with the next iteration.
-  If the condition fails we check again for `vec.size() = 3` that is the temporary vector holds exactly 3 values. Then we have to push the `temporary vector vec` to the `result vector`.
-  If both the condition fails then we are checking whether the next elements should be pushed in the temporary vector vec `nums[i] - vec[0] <=k`. This condition checks wheter the difference in  values in the sorted array and the value at the first element in the temproray array `vec` and if the value is not satisfied then we have return empty array

  ## Returning
  
  When the loop ends there will be values in the temproary vector `vec` so they have to be pushed to the `result vector`.

  Then the `result vector` holds the subarrays  with maximum difference. It is returned. 

  
