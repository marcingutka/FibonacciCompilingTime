template <int X>
struct Fib
{
    static constexpr int value = Fib<X-1>::value + Fib<X-2>::value;
};

template<>
struct Fib<1>
{
    static constexpr int value = 1;
};

template<>
struct Fib<2>
{
    static constexpr int value = 1;
};


