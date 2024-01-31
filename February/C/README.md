<h1> Daily Temperature Solution in C Solving Idea </h1>
<h2> The idea is as follows: </h2>

We're at the i-th day.
We check whether the temperature of the next day (with index i+1) is higher than the temperature on day i or not.
If yes, we're done. We then save the difference between these days in our solution array.
If not, then we can jump to position k, where k is the solution from our previous search starting at position i + 1. This is the next value in our array with a higher temperature than at position i+1.
We now repeat the process, ie. we check whether the value at k is higher than the value at position i or not. We're either done, or keep jumping.

















