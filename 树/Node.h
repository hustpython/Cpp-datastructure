# ifndef NODE_H
# define NODE_H
class Node 
{
public: 
  Node();
  Node *SearchNode(int nodeIndex);
  void DeleteNode();
  void PerorderTraversal();
  void InorderTraversal();
  void PostorderTraversal();
  int index;
  int data;

  Node *pLChild;
  Node *pRChild;
  Node *pParent;
};

#endif