typedef int32_t i32;


inline i32
maximum(i32 x, i32 y)
{
    return x > y ? x : y;
}


i32 rob(i32 *numbers, size_t numbersLength)
{
    i32 prePredecessor  = 0;
    i32 predecessor     = 0;
    i32 current         = 0;

    for (size_t index = 0; index < numbersLength; index += 1)
    {
        prePredecessor  = predecessor;
        predecessor     = current;
        current         = maximum(prePredecessor + numbers[index], predecessor);
    }
    
    return current;
}

