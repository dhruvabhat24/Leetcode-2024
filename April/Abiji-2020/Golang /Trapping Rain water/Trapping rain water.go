func trap(height []int) int {
    n:= len(height)
    if n==0{
        return 0
    }
    left := make([]int,n)
    right:= make([]int,n)
    trapwatter :=0
    left[0] = height[0]
    for i:=1;i<n;i++{
        left[i]= int(math.Max(float64(left[i-1]),float64(height[i])))
    }
    right[n-1] = height[n-1]
    for i:=n-2;i>=0;i--{
        right[i] = int(math.Max(float64(height[i]),float64(right[i+1])))
    }
    for i:=0;i<n;i++{
        trapwatter+=int(math.Min(float64(left[i]),float64(right[i]))) - height[i]
    }
    return trapwatter
}
