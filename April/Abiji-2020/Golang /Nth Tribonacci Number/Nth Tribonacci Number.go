func tribonacci(n int) int {
    var F [38]int
    F[0] = 0
    F[1] = 1
    F[2] = 1
    if n<3{
        return F[n]
    } 
    for i:=3;i<=n;i++{
        F[i] = F[i-1]+F[i-2]+F[i-3]
    }
    return F[n]
}
