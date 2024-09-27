#include<bits/stdc++.h>
 using namespace std;

 class Solution{

    struct Node{
        int freq;
        Node *left,*right;
        
        Node(int freq)
        {
            left=right=nullptr;
            this->freq=freq;
        }
    };
    
    struct compare{
        bool operator()(Node* l,Node* r){
           
            return (l->freq>r->freq);
        }
    };
    
    void preorder(Node* root,string s,vector<string> &ans)
    {
        if(!root)
        {
            return;
        }
        
        if(!root->left&&!root->right)
        {
            ans.push_back(s);
        }
        preorder(root->left,s+"0",ans);
        preorder(root->right,s+"1",ans);
    }
	public:
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    priority_queue<Node*,vector<Node*>,compare> minHeap;
		    
		    for(int i=0;i<N;i++)
		    {
		        minHeap.push(new Node(f[i]));
		    }
		    
		    while(minHeap.size()>1)
		    {
		        Node* left=minHeap.top();
		        minHeap.pop();
		        Node* right=minHeap.top();
		        minHeap.pop();
		        Node* top=new Node(left->freq+right->freq);
		        top->left=left;
		        top->right=right;
		        minHeap.push(top);
		    }
		    
		    Node* root=minHeap.top();
		    vector<string> ans;
		    preorder(root,"",ans);
		    return ans;
		}
 };