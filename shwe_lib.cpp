inline long long gcd(long long a, long long d)
{
    long long t;
    while (d) {
        t = a % d;
        a = d;
        d = t;
    }
    return a;
}

inline long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}

inline bool is_power_of_two(long x)
{
    return (x != 0 && (x & (x - 1)) == 0);
}
