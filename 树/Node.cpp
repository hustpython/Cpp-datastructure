# include "Node.h"
# include <iostream>
using namespace std;
Node::Node()
{
    index = 0;
    data = 0;
    pLChild = NULL;
    pRChild = NULL;
    pParent = NULL;
}
Node *Node::SearchNode(int nodeIndex)
{
   if(this->index == nodeIndex)
   {
       return this;
   }
   if(this->pLChild != NULL)
   {
       if(this->pLChild -> index == nodeIndex)
       {
           return this->pLChild;
       }
   }
   if(this->pRChild != NULL)
   {
       if(this->pRChild -> index == nodeIndex)
       {
           return this->pRChild;
       }
   }
   return NULL;
}
void Node::DeleteNode()
{
   if(this->pLChild !=NULL)
   {
       this->pLChild->DeleteNode();

   }
   if(this->pRChild!=NULL)
   {
       this->pRChild->DeleteNode();
   }
   if(this->pParent!=NULL)
   {
       if(this->pParent->pLChild==this)
       {
           this->pParent->pLChild=NULL;
       }
       if(this->pParent->pRChild==this)
       {
           this->pParent->pRChild=NULL;
       }
   }
   delete this;
}
void Node::PerorderTraversal()
{
    cout << this->index<<"  "<<this->data << endl;
    if(this->pLChild !=NULL)
    {
        this->pLChild->PerorderTraversal();

    }
    if(this->pRChild!=NULL)
    {
        this->pRChild->PerorderTraversal();
    }

}
  void Node::InorderTraversal()
  {
    if(this->pLChild !=NULL)
    {
       this->pLChild->InorderTraversal();

    }
    cout << this->index<<"  "<<this->data << endl;
    if(this->pRChild!=NULL)
    {
        this->pRChild->InorderTraversal();
    }

  }
  void Node::PostorderTraversal()
  {
    if(this->pLChild !=NULL)
    {
       this->pLChild->PostorderTraversal();

    }
    if(this->pRChild!=NULL)
    {
        this->pRChild->PostorderTraversal();
    }
    cout << this->index<<"  "<<this->data << endl;
  }