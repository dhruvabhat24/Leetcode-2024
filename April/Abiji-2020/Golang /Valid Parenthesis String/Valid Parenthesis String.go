func checkValidString(s string) bool {
    left:=0
    right:=0
    for _,c:= range s{
        if c=='('{
            left++;
        }else{
            left--;
        }
        if c==')'{
            right--;
        }else{
            right++;
        }
        if (right<0) {
            break;
        }
        left =int( math.Max(float64(left),float64(0)))
    }
    return left==0
}
