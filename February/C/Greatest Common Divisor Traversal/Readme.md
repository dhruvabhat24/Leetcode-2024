# Approach

If two numbers share a prime factor, we can traverse between these numbers.

So, we first collect prime factors for each number.

We only need factors till sqrt(100000) - 65 primes from 2 to 313. We can use Sieve of Eratosthenes - or a static pre-computed array.
Note that if, after removing all primes, nums[i] > 1, then nums[i] is some large prime.
