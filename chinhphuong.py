from collections import Counter
import itertools

def prime_factors(n):
    """
    https://stackoverflow.com/a/22808285/12366110
    """
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return Counter(factors)

a = [1,2,3,4]

b = [1,2,3,4]

prime_factors = {i: prime_factors(i) for i in set(a) | set(b)}

rv = set()

for a, b in itertools.product(a, b):
    combined_counts = prime_factors[a] + prime_factors[b]
    if all(v%2 == 0 for v in combined_counts.values()):
        rv.add(tuple(sorted([a, b])))