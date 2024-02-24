class Solution {
     private class DisjointSet{
       private int parent[] = null, rank[] = null;
       public DisjointSet(int size){
           parent = new int[size];
           rank = new int[size];
           for(int node = 0; node < parent.length; node++){
               parent[node] = node;
           }
       }
       public int find(int node){
           if(this.parent[node] != node){
               parent[node] = find(parent[node]);
           }
           return parent[node];
       } 
       public void union(int node1, int node2){
           int oneRep = find(node1), twoRep = find(node2);
           if(oneRep == twoRep){
               return;
           }
           if(rank[oneRep] < rank[twoRep]){
               parent[oneRep] = twoRep;
           }else if(rank[twoRep] < rank[oneRep]){
               parent[twoRep] = oneRep;
           }else{
               parent[oneRep] = twoRep;
               rank[twoRep]++;
           }
       }
       public void breakBond(int node){
           this.parent[node] = node;
       } 
       public boolean isConnectedToSecretKnower(int node1){
           int originPer = 0;
           return find(node1) == find(originPer);
       }
    }
    private HashSet<Integer> scrtKnowers = new HashSet<>();
    private DisjointSet dSet = null;
    public List<Integer> findAllPeople(int n, int[][] meetings, int firstPerson) {
        Arrays.sort(meetings, (a, b)-> a[2] - b[2]);
        
        scrtKnowers.add(0);
        scrtKnowers.add(firstPerson); 
        dSet = new DisjointSet(n);
         dSet.union(0, firstPerson);
        haveMeetings(meetings, n);        
        return scrtKnowers.stream().collect(Collectors.toList());
    }
    
     private void haveMeetings(int meetings[][], int totalPersons){
        int len = meetings.length;
        for(int indx = 0; indx<len; indx++){
            int currMeetId = indx, currMeetTime = meetings[indx][2];
            while(currMeetId < len && meetings[currMeetId][2]== currMeetTime){
                int per1 = meetings[currMeetId][0], per2 = meetings[currMeetId][1];
                dSet.union(per1, per2);
                currMeetId++;
            }
            currMeetId = indx;
             while(indx < len && meetings[indx][2] == currMeetTime){
                    int per1 = meetings[indx][0], per2 = meetings[indx][1];
                 if(dSet.isConnectedToSecretKnower(per1) || dSet.isConnectedToSecretKnower(per2)){
                  scrtKnowers.add(per1);
                  scrtKnowers.add(per2);
                 }else{
                     dSet.breakBond(per1);
                     dSet.breakBond(per2);
                 }    
                 indx++;
            }          
            indx--;
        }
    }
}
