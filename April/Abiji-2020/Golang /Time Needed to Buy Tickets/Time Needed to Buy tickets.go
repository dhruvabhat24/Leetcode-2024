func timeRequiredToBuy(tickets []int, k int) int {
    ans :=0
    i:=0
    for tickets[k]!=0{
        if tickets[i]!=0{
            ans++
            tickets[i]--
        }
        i++
        if i==len(tickets) {
            i=0
        }
    }
    return ans
}
