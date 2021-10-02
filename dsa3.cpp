void printLevelOrderTreeFashion(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp = q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();
            
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        
        }
}
    int knapsack(int W,Item k[],int n){
    sort(k,k+n,comp);
    
    double final=0.0;
    int cur=0;
    
    for(int i=0;i<n;i++){
        if(cur+k[i].weight<=W){
            cur = cur + k[i].weight;
            final = final + k[i].value;
        }
        
        // if there is still some capacity in the bucket, we take a fractio of the next item
        else{
            int rem = W-cur;
            final = final + ((double)k[i].value/(double)k[i].weight)*(double)rem;
            break;
        }
    }
    return final;
}
