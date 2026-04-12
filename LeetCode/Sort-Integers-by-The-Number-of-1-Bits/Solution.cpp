[](int x, int y){
    if (__builtin_popcount(x)==__builtin_popcount(y))
        return x<y;
    else 
        return __builtin_popcount(x)<__builtin_popcount(y);
}