void printInOrder(node* root){
    if(root==NULL){
        return;
    }
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
}
void printPostOrder(node* root){
    if(root==NULL){
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
}
void printPreOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPostOrder(root->left);
    printPostOrder(root->right);
    
}
