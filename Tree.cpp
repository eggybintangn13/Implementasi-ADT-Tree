#include <iostream>
using namespace std;
struct node{
	int data;
    	node *left;
    	node *right;
};

void inputdata(node **root, int databaru){
	if((*root) == NULL){
	  	node *baru;
        	baru = new node;
        	baru->data = databaru;
        	baru->left = NULL;
        	baru->right = NULL;
        	(*root) = baru;
        	(*root)->left = NULL;
        	(*root)->right = NULL;
        	cout<<"Data bertambah!"<<endl;}
    	else if(databaru<(*root)->data){
        	inputdata(&(*root)->left, databaru);}
    	else if(databaru>(*root)->data){
        	inputdata(&(*root)->right, databaru);}
    	else if(databaru == (*root)->data){
        	cout<<"Data sudah ada!"<<endl;}
}

void preOrder(node *root){
    	if(root != NULL){
        	cout<<root->data;
        	preOrder(root->left);
        	preOrder(root->right);}
}

void inOrder(node *root){
    	if(root != NULL){
        	inOrder(root->left);
        	cout<<root->data;
        	inOrder(root->right);}
}

void postOrder(node *root){
    	if(root != NULL){
        	postOrder(root->left);
        	postOrder(root->right);
        	cout<<root->data;}
}

int main(){
	int x, data;
    	node *tree;
    	tree=NULL;
    	do{
		cout<<"\n====================";
		cout<<"\nPROGRAM TREE C++   |";
            	cout<<"\n====================";
            	cout<<"\nMENU               |";
            	cout<<"\n====================\n";
            	cout<<"1. Tambah          |\n";
            	cout<<"2. Lihat pre-order |\n";
            	cout<<"3. Lihat in-order  |\n";
            	cout<<"4. Lihat post-order|\n";
            	cout<<"5. Exit            |";
            	cout<<"\n====================\n";
            	cout<<"Pilihan : ";
            	cin>>x;
            	switch(x){
            		case 1 :
				cout<<"\nTambah Data : ";
                		cout<<"\n=============";
                		cout<<"\nData baru : ";
                		cin>>data;
                		inputdata(&tree, data);
                	break;     
            		case 2 :
                		cout<<"\nPre Order : ";
                		cout<<"\n===========\n";
                		if(tree!=NULL){
                        		preOrder(tree);}
            			else{
                        		cout<<"Masih kosong!"<<endl;}
                	break;
            		case 3 :
                		cout<<"\nIn Order : ";
                		cout<<"\n==========\n";
                  		if(tree!=NULL){
                        		inOrder(tree);}
                  		else{
                        		cout<<"Masih kosong!"<<endl;}
			break;
            		case 4 :
                		cout<<"\nPost Order : ";
                		cout<<"\n============\n";
                		if(tree!=NULL){
                    			postOrder(tree);}
                		else{
                    			cout<<"Masih kosong!"<<endl;}
                	break;
           		}
	}while(x!=5);
	return 0;
}
