/*
problem link: https://www.hackerrank.com/challenges/tree-huffman-decoding/problem
problem name: Tree: Huffman Decoding
status:accpted ;
author : mohand sakr; 
*/


/*  
	class Node
		public  int frequency; // the frequency of this tree
    	public  char data;
    	public  Node left, right;
    
*/ 

    void decode(String s, Node root) {


 StringBuilder answer= new StringBuilder();
 char [] x=s.toCharArray();
            
            Node currentNode=root;
            for(int i=0;i<x.length;i++){
                if (currentNode.data==0){
                    
                    if(x[i]=='0'){
                       currentNode=currentNode.left; 
                    
                    }
                    else if(x[i]=='1') {
                    currentNode=currentNode.right; 
 
                    }
                    if(currentNode.data!=0){
                         answer.append(currentNode.data);
                        currentNode=root;
                    }
                    
                }
                else {
                    answer.append(currentNode.data);
                    currentNode=root;
                    
                }
                
                
                
                
            }
            
            
        System.out.println(answer);

    }
