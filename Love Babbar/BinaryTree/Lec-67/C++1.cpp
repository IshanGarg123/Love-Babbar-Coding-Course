// burning the tree question and find minimum tree to burn the entire tree

/*
class Solution {
    #include<map>
    #include<queue>
    
  public:
    // create mapping
    // return target node
    Node* createParentMapping(Node* root ,int target, map<Node*,Node*> & nodeToParent)
    {
        Node* res = NULL;
        
        queue<Node*> q;
        q.push(root);
        nodeToParent[root] = NULL;
        
        while(!q.empty())
        {
            Node* temp = q.front();
            q.pop();
            
            if(temp -> data == target)
            {
                res = temp;
            }
            
            if(temp -> left)
            {
                q.push(temp -> left);
                nodeToParent[temp->left] = temp;
            }
            if(temp -> right)
            {
                q.push(temp -> right);
                nodeToParent[temp->right] = temp;
            }
        }
        
        return res;
    }
    
    int burnTree(Node* root,map<Node*,Node*>nodeToParent)
    {
        map<Node*,bool> visited;
        queue<Node*> q;
        
        q.push(root);
        visited[root] = true;
        
        int ans = 0;
        while(!q.empty())
        {
            int size = q.size();
            bool flag =0;
            for(int i=0;i<size;i++)
            {
                Node* temp = q.front();
                q.pop();
            
                if(temp -> left && !visited[temp->left])
                {
                    flag = 1;
                    q.push(temp->left);
                    visited[temp->left] = true;
                }
                
                if(temp -> right && !visited[temp->right])
                {
                    flag =1;
                    q.push(temp->right);
                    visited[temp->right] = true;
                }
                
                if(nodeToParent[temp]  && !visited[nodeToParent[temp]])
                {
                    flag =1;
                    q.push(nodeToParent[temp]);
                    visited[nodeToParent[temp]] = true;
                }
                
            }
            
            if(flag == 1)
            {
                ans++;
            }
        }
        return ans;
    }
    
    int minTime(Node* root, int target) 
    {
        // algo 
        
        // step 1 create nodeToParent mapping
        map <Node* ,Node*> nodeToParent;
        Node* targetNode = createParentMapping(root,target,nodeToParent);
        return burnTree(targetNode,nodeToParent);
    }
};
*/