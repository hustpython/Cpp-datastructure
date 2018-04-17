# ifndef TREENODE_H
# define TREENODE_H
# include "Node.h"
class TreeNode 
{
public: 
  TreeNode();
  ~TreeNode();
  Node  *SearchNode(int nodeIndex);
  bool AddNode(int nodeIndex,int direction,Node *pNode);
  bool DeleteNode(int nodeIndex,Node *pNode);
  void PerorderTraversal();
  void InorderTraversal();
  void PostorderTraversal();
private: 
  Node *m_pRoot;
};

# endif