class Solution {
  
  public int maxLength(List<String> arr) {
    if(fillTable(arr)) return 26;
    if(t.size() == 0) return 0;
    DFS(0, 0, 0);
    return maxLen;
  }
  
  
//fill table with words without reapiting letters 
  ArrayList<Integer> t, lens;
  
  private boolean fillTable(List<String> arr){
    t    = new ArrayList<>(arr.size());
    lens = new ArrayList<>(arr.size());
    
    for(String s: arr){
      int letters = 0;
      int i = 0;
      
      for(int mask; i != s.length(); i++)
        if( ((mask = 1 << (s.charAt(i)-'a')) & letters) != 0) break;
        else letters |= mask;
      
      if(i == s.length()){
        if(i == 26) return true;
        t.add(letters);
        lens.add(i);
      }   
    }
    
    return false;
  }
    
//DFS for searching
    int maxLen = 0;
    
    private void DFS(int id, int len, int letters){
      if(maxLen == 26) return;
      if(maxLen < len) maxLen = len;
                                                  
      for(; id != t.size(); id++)
        if( (letters & t.get(id)) == 0)
          DFS(id + 1, len + lens.get(id), letters | t.get(id));
    }
  
}
