#include "BinaryTree.cpp"

using namespace std;

int main()
{
//    //�������У����������
//    vector<string>a={"2","4","8","null","1","3","null"};
//    BinaryTree bt=BinaryTree(a);
//    bt.printPreOrder(); puts("");
//    bt.printInOrder(); puts("");
//    bt.printPostOrder(); puts("");

//    //����ǰ������������������������
//    vector<int>a={1,2,4,5,8,9,3,6,7,10};
//    vector<int>b={4,2,8,5,9,1,6,3,7,10};
//    BinaryTree *c=new BinaryTree();
//    c->head=getPostOrder(a,b,0,9,0);
//    cout<<endl;
//    c->printPreOrder();
//    cout<<endl;
//    c->printInOrder();
//    cout<<endl;
//    c->printPostOrder();
//    cout<<endl;

    //��������������
    vector<int>d={5,1,9,2,8,3,7,4,6};
    BinaryTree bst=BinaryTree(d);
    bst.printPreOrder(); puts("");
    bst.printInOrder(); puts("");
    bst.printPostOrder(); puts("");
    Node *p=bst.findElement(8,bst.head);
    cout<<p->v<<endl;

//    //������������
//    vector<int>a={1,2,3,3,4};
//    BinaryTree huff=BinaryTree();
//    huff.buildHuffmanTree(a);
//    huff.printHuffmanTree(huff.head,"");
    return 0;
}
