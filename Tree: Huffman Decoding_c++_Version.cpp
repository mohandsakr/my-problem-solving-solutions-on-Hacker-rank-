/*
problem link:https://www.hackerrank.com/challenges/tree-huffman-decoding/problem
problem name: Tree: Huffman Decoding
status:accpted ;
author : mohand sakr; 
*/

/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/



void decode_huff(node * root, string s) {
    
    string answer="";
    int sLength=s.length();
    
    
   node currentNode=* root;
   
            for(int i=0;i<sLength;i++){
                if (currentNode.data==0){
                    
                    if(s[i]=='0'){
                       currentNode=* currentNode.left; 
                    
                    }
                    else if(s[i]=='1') {
                    currentNode= *currentNode.right; 
 
                    }
                    if(currentNode.data!=0){
                         answer+=currentNode.data;
                        currentNode=* root;
                    }
                    
                }
                else {
                    answer+=currentNode.data;
                    currentNode= * root;
                    
                }
                
                
                
                
            }
            
            
      cout<<answer<<endl;
    
    
}
