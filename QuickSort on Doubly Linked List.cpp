class Solution{
public:
         
    void swap(Node* m,Node* n){
       int temp=m->data;
       m->data=n->data;
       n->data=temp;
    }
    Node* partition(Node *l, Node *h){
        //Your code goes here
          Node* N=l;
       for(Node* i=l ; i!=h ; i=i->next){
           if(i->data < h->data){
               swap(N,i);
               N=N->next;
           }
       }
       swap(N,h);
       return N;
   }

};
