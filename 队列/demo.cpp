# include <iostream>
# include <stdlib.h>
# include "MyQueue.h"
# include "Coordinate.h"
using namespace std;
//实现环形队列
void printInt(int o)
{
    cout << o << endl;
}
void printCoor(Coordinate o)
{
    cout << "(" << o.getX() << "," << o.getY() << ")" << endl;
}
int main(void)
{
    // MyQueue *p = new MyQueue(4);
    // p-> EnQueue(10);
    // p-> EnQueue(12);
    // p-> EnQueue(16);
    // p-> EnQueue(15);
    // //p-> EnQueue(20);

    // int e = 0;
    // p-> DeQueue(e);
    // cout << endl;
    // cout << e << endl;

    // p-> DeQueue(e);
    // cout << endl;
    // cout << e << endl;

    // p-> ClearQueue();
    // p-> EnQueue(20);
    // p-> EnQueue(30);
    // cout << endl;
    // p-> QueueTraverse();

    
    // delete p;
    // p = NULL;
   
    //整数测试
    try
    {
        MyQueue<int> queueInt = MyQueue<int>(4);
        queueInt.EnQueue(10);
        queueInt.EnQueue(20);
        queueInt.EnQueue(30);
        queueInt.EnQueue(40);

        //queueInt.QueueTraverse(&printInt);
        MyQueue<Coordinate> queueCoor = MyQueue<Coordinate>(3);
        Coordinate c1 = Coordinate(1000,2);
        Coordinate c2 = Coordinate(3,4);
        Coordinate c3 = Coordinate(5,6);

        queueCoor.EnQueue(c1);
        queueCoor.EnQueue(c2);
        queueCoor.EnQueue(c3);
        
        queueCoor.QueueTraverse(&printCoor);



    } 
    catch (string &e) 
    { //捕获可预知异常 
       cout << e << endl; return 2; 
    }
    catch (...) 
    { //捕获其他所有未知异常
       return 1;
    }

}