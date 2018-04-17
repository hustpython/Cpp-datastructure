# include "TreeNode.h"
# include <iostream>
TreeNode::TreeNode()
{
    m_pRoot = new Node();
}
TreeNode::~TreeNode()
{
    //DeleteNode(0,NULL);
    m_pRoot -> DeleteNode();
}
Node *TreeNode::SearchNode(int nodeIndex)
{
    return m_pRoot -> SearchNode(nodeIndex);
}
bool TreeNode::AddNode(int nodeIndex,int direction,Node *pNode)
{
    Node *temp = SearchNode(nodeIndex);
    if(temp == NULL)
    {
        return false;
    }
    Node *node = new Node();
    if(node ==NULL)
    {
        return false;
    }
    node -> index = pNode ->index;
    node -> data = pNode -> data;
    if(direction == 0)
    {
        temp -> pLChild = node;
    }
    if(direction == 1)
    {
        temp ->pRChild =node;
    }
    return true;
}
bool TreeNode::DeleteNode(int nodeIndex,Node *pNode)
{
    Node *temp = SearchNode(nodeIndex);
    if(temp == NULL)
    {
        return false;
    }
    if(pNode != NULL)
    {
        pNode -> data = temp -> data;
    }
    temp->DeleteNode();
    return true;

}
void TreeNode::PerorderTraversal()
{
    m_pRoot->PerorderTraversal();
}
void TreeNode::InorderTraversal()
{
    m_pRoot->InorderTraversal();
}
void TreeNode::PostorderTraversal()
{
    m_pRoot->PerorderTraversal();

}