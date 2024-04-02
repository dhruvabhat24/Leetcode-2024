func isIsomorphic(s string, t string) bool {
    s2t := [128]byte{}
    t2s := [128]byte{}
    for i, end := 0, len(s); i < end; i++ {
        if s2t[s[i]] != t2s[t[i]] {
            return false
        }
        s2t[s[i]], t2s[t[i]] = byte(i+1), byte(i+1)
    }
    return true
}
