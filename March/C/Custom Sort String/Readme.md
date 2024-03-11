# Approach
<br> Step 1: I created a string named sCount to keep track of the count of letters in the array s. <br>
Step 2: I counted the letters in the array s using a while loop. <br>
Step 3: In the first for loop, I examined the letters specified in the order array. <br>
If they were also present in the s array, I wrote these letters to the s array as many times as their count. <br> 
Step 4: At the end of the if statement, with the expression sCount[temp - 'a'] = 0; , I reduced the count of the written letter to 0. (To be able to write the letters in the s array that are in order but not in the order array in the last for loop.) <br>
Step 5: In the final for loop that runs 26 times, which you see at the end, I wrote the letters in the s array that are in order but not in the order array to the end of the array. At the end of the process, I returned the s array.
