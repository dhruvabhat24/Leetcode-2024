func maxDepth(s string) int {
    ans :=0
    prev :=ans
    for _,ch := range s{
        if ch=='('{
            ans++
        }
        if ch==')'{
            ans--
        }
        prev = int(math.Max(float64(ans),float64(prev)))
    }
    return prev
}
