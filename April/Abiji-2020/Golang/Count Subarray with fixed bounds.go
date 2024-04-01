func countSubarrays(nums []int, minK int, maxK int) int64 {
    n:= len(nums)
    j:=0
    i:=-1
    prevMaxK :=-1
    prevMinK :=-1
    var ans int64 
    ans = 0
    for j<n{
        if (nums[j]< minK || nums[j]> maxK){
            i=j
        }
        if (nums[j] == minK){
            prevMinK = j
        }
        if(nums[j]==maxK){
            prevMaxK = j
        }
        ans = ans+ int64(math.Max(0,float64( math.Min(float64(prevMaxK),float64(prevMinK)))-float64(i)))
        j++
    }
    return ans
}
