/*
problem link:https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem
problem name: Binary Search Tree : Lowest Common Ancestor
status:accpted ;
author : mohand sakr; 
*/



    /*
    class Node 
        int data;
        Node left;
        Node right;
    */
static int   arr[]= new int[26];
    public static  List<Node> findValuePath(Node root,int target){
         List<Node> data=new ArrayList<Node>();
         
         while(root.data!=target){
             if(root.data>target){
                 root=root.left;
                 data.add(root);
                 ++arr[root.data];
             }
             else if(root.data<target){
                  
                 root=root.right;
                 data.add(root);
                 ++arr[root.data];
                 
             }
         }
         
         return data;
         
    }
    
    public static Node lca(Node root, int v1, int v2) {
        
         List<Node> v1Data=findValuePath(root,v1);
         List<Node> v2Data=findValuePath(root,v2);
         int minsize=Math.min(v1Data.size(),v2Data.size());
         Node answer=root;
         
         if(v1Data.size()>v2Data.size()) {
             int dataSize=v1Data.size();
         for(int i=dataSize-1;i>=0;i--){
             Integer v1ParentValue=v1Data.get(i).data;
             if(arr[v1ParentValue]==2){
                  answer= v1Data.get(i);
                  break;
             }
           
         }
         }
         else {
             int dataSize=v2Data.size();
             for(int i=dataSize-1;i>=0;i--){
                 Integer v2ParentValue=v2Data.get(i).data;

                 if(arr[v2ParentValue]==2){
                     answer= v2Data.get(i);
                     break;
                 }
             }
             
         }
         
         return answer;
         
       
    }
