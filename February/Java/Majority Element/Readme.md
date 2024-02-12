**Class Name:**

* `Solution`: This class offers a method to find the majority element within an array.

**Method:**

* `public int majorityElement(int[] nums)`: This method takes an integer array (`nums`) as input and returns the majority element.

**Logic:**

1. **Sort:**
   * `Arrays.sort(nums)`: Sorts the `nums` array in ascending order.

2. **Return Middle Element:**
   * `return nums[nums.length/2]`: Returns the element at the middle index of the sorted array. The majority element is guaranteed to be at this index after sorting.

**Key Points:**

- **Time Complexity:** O(n log n) due to sorting.
- **Space Complexity:** O(1), using constant extra space for sorting.
- **Guaranteed Majority Element:** The problem assumes a majority element (occurring more than n/2 times) always exists in the input array.
