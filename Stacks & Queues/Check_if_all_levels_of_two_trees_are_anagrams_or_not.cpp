bool areAnagrams(Node* root1, Node* root2) {
   if(!root1 && !root2) return true;
   if(!root1 || !root2) return false;
   
   queue<Node*> q1, q2;
   q1.push(root1);
   q2.push(root2);
   
   while(!q1.empty() && !q2.empty()) {
       int size1 = q1.size();
       int size2 = q2.size();
       
       if(size1 != size2) return false;
       
       vector<int> level1, level2;
       
       // Process current level of tree1
       for(int i = 0; i < size1; i++) {
           Node* curr1 = q1.front();
           q1.pop();
           level1.push_back(curr1->data);
           
           if(curr1->left) q1.push(curr1->left);
           if(curr1->right) q1.push(curr1->right);
       }
       
       // Process current level of tree2
       for(int i = 0; i < size2; i++) {
           Node* curr2 = q2.front();
           q2.pop();
           level2.push_back(curr2->data);
           
           if(curr2->left) q2.push(curr2->left);
           if(curr2->right) q2.push(curr2->right);
       }
       
       // Sort and compare levels
       sort(level1.begin(), level1.end());
       sort(level2.begin(), level2.end());
       
       if(level1 != level2) return false;
   }
   
   return q1.empty() && q2.empty();
}