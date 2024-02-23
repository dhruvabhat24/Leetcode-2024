# Approach
1.Initialize an array dp of size n to store the minimum cost to reach each city.
<br> 2.Set the cost to reach the source city as 0 and all other cities' costs as Integer.MAX_VALUE.
<br>3.Iterate through each possible number of stops from 0 to k:
<br>4.Create a copy of the dp array for each iteration.
<br>5.Update the minimum cost for each destination city based on the current flight.
<br>6.Finally, return the minimum cost to reach the destination city (dp[dst]).
## Complexity
### Time complexity: O(k⋅∣flights∣)O(k \cdot |flights|)O(k⋅∣flights∣), where |flights| is the number of flights.
### Space complexity: O(n)O(n)O(n), where n is the number of cities.
