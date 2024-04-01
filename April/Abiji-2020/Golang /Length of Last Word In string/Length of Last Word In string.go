func lengthOfLastWord(s string) int {
    var lens int =0
    var prev int =0
    for _, v := range s{
        if v == ' '{
            lens =0
            continue;
        } else {
            lens++;
        }
        prev = lens
    }
    if lens == 0 {
        return prev
    }
    return lens
}
