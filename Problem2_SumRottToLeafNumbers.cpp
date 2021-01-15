
// Time Complexity : O(n) where n is number of elements
// Space Complexity : O(h) we are not using extra space
// Did this code successfully run on Leetcode :yes
// Any problem you faced while coding this : I want to know how to write the main function for this code so that I can know how to run this in 
// in my local computer


// Your code here along with comments explaining your approach


#include<vector>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<cmath>
#include<time.h>
#include<iostream>

using namespace std; 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */



// class Solution {
// public:
//     class Pair{
//         TreeNode* node;
//         int value;
        
//     public: 
//         Pair(TreeNode* node, int value){
//             this->node=node;
//             this->value=value;
//         }
//         TreeNode* getKey(){
//             return this->node;
//         }
//         int getValue(){
//             return this->value;
//         }
        
        
//     };
//     int sumNumbers(TreeNode* root) {
        
//         if(root==NULL) return 0;
        
//         int result=0;
//         int CurrSum=0;
        
         
//         stack<Pair> st;
        
//         while(root!=NULL || !st.empty()){
//             while(root != NULL){
//                 CurrSum=CurrSum*10 +root->val;
//                 // Pair a= new Pair(root,CurrSum);
//                 st.push( Pair(root,CurrSum)); 
//                 root=root->left;
//             }
//             Pair p=st.top();
//             root = p.getKey();
//             CurrSum=p.getValue();
//             st.pop();
//             if(root->left == NULL && root->right ==NULL){
//                 result+=CurrSum;
//             }            
            
//             root=root->right;
            
//         }
        
//         return result;
        
//     }
// };


// //////// Below is the recursive solution

class Solution {
public:
    
//     Wont need this now.
    
    
//     class Pair{
//         TreeNode* node;
//         int value;
        
//     public: 
//         Pair(TreeNode* node, int value){
//             this->node=node;
//             this->value=value;
//         }
//         TreeNode* getKey(){
//             return this->node;
//         }
//         int getValue(){
//             return this->value;
//         }
        
        
//     };
    
    int result;
    
    int sumNumbers(TreeNode* root) {
        
//         if(root==NULL) return 0;
        
//         int result=0;
//         int CurrSum=0;
        
         
//         stack<Pair> st;
        
//         while(root!=NULL || !st.empty()){
//             // while(root != NULL){
//             //     CurrSum=CurrSum*10 +root->val;
//             //     // Pair a= new Pair(root,CurrSum);
//             //     st.push( Pair(root,CurrSum)); 
//             //     root=root->left;
//             // }
            
//             helper(root.->left, CurssSum);
            
//             // Pair p=st.top();
//             // root = p.getKey();
//             // CurrSum=p.getValue();
//             // st.pop();
//             if(root->left == NULL && root->right ==NULL){
//                 result+=CurrSum;
//             }            
            
//             root=root->right;
            
//         }
        
        helper(root,0);
        
        return result;
        
    }
    
private: 
    void helper(TreeNode* root,int CurrSum){
        //base
        
        if(root==NULL) return;
        
//         this is for preorder  
        
        // if(root->left == NULL && root->right ==NULL){
        //         result+=CurrSum*10 + root->val;
        //  }   
        
        
        //logic
        CurrSum = CurrSum*10 + root->val;
        
//             // while(root != NULL){
//             //     CurrSum=CurrSum*10 +root->val;
//             //     // Pair a= new Pair(root,CurrSum);
//             //     st.push( Pair(root,CurrSum)); 
//             //     root=root->left;
//             // }
            
        helper(root->left, CurrSum);
            
//             // Pair p=st.top();
//             // root = p.getKey();
//             // CurrSum=p.getValue();
//             // st.pop();
        
        
        //this below two lines are compared after helper of left side so this is inorder if I do before the helper function of left then that is preorder
        if(root->left == NULL && root->right ==NULL){
                result+=CurrSum;
         }            
            
//             root=root->right;
            
//         }
        
        // the above lines are for right side of a root
        
        helper(root->right,CurrSum);
        
        
        
    }
    
};


