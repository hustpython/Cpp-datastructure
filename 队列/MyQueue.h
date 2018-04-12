# ifndef MYQUEUQ_H
# define MYQUEUQ_H
# include <string>
# include <iostream>
# include <stdlib.h>
using namespace std;
template <class T>
class MyQueue
{
public:
  //队列构造函数
  MyQueue(int queueCapacity);
  //队列析构函数
  virtual ~MyQueue();
  //清除队列
  void ClearQueue();
  //判空
  bool QueueEmpty() const;
  //判满
  bool QueueFull() const;
  //队长
  int QueueLength() const;
  //入队
  bool EnQueue(T element);
  //出队
  bool DeQueue(T &element);
  //遍历输出
  void QueueTraverse(void(*pFunc)(T));
private: 
  T * m_pQueue;
  int m_iQueueLen;
  int m_iQueueCapacity;
  int m_iHead;
  int m_iTail;
};

template <class T> 
MyQueue<T>::MyQueue(int queueCapacity)
{
    m_iQueueCapacity = queueCapacity;
    ClearQueue();
    m_pQueue = new T[m_iQueueCapacity];
    
}
template <class T> 
MyQueue<T>::~MyQueue()
{
    delete []m_pQueue;
    m_pQueue = NULL;
}
template <class T>
void MyQueue<T>::ClearQueue()
{
    m_iHead = 0;
    m_iTail = 0;
    m_iQueueLen = 0;
}
template <class T>
bool MyQueue<T>::QueueEmpty() const 
{
    return m_iQueueLen == 0 ? true:false;
}
template <class T>
int MyQueue<T>::QueueLength() const 
{
    return m_iQueueLen;
}
template <class T>
bool MyQueue<T>::QueueFull() const 
{
    return m_iQueueLen == m_iQueueCapacity ? true:false;
}
template <class T>
bool MyQueue<T>::EnQueue(T element)
{
    if(QueueFull()) 
    {
        return false;
    }
    else 
    {
        m_pQueue[m_iTail] = element;
        m_iTail ++ ;
        m_iTail = m_iTail % m_iQueueCapacity;
        m_iQueueLen ++;
        return true;
    }
}
template <class T>
bool MyQueue<T>::DeQueue(T &element)  
{
    if(QueueEmpty())
    {
        return false;
    }
    else 
    {
        element = m_pQueue[m_iHead];
        m_iHead ++;
        m_iHead = m_iHead % m_iQueueCapacity;
        m_iQueueLen --;
        return true;
    }
}
template <class T>
void MyQueue<T>::QueueTraverse(void(*pFunc)(T))
{
    cout << endl;
    for(int i=m_iHead;i<m_iQueueLen + m_iHead;i++)
    {
       pFunc(m_pQueue[i % m_iQueueCapacity]);
    }
}
# endif
