//
// Created by Tsang on 2018/5/14.
//

#ifndef BINARYTREE_BINARYTREE_H_H
#define BINARYTREE_BINARYTREE_H_H

#include <iostream>
template <typename T = int>
class BinaryTree
{
  public:
    BinaryTree() = default;
    BinaryTree(const BinaryTree &bt);
    BinaryTree(const T &theElement);

    ~BinaryTree();

    void insert(const T &theElement);
    void remove(const T &theElement);
    void makeEmpty();
    bool isFind(const T &theElement) const;
    void preOrder() const;
    void inOrder() const;
    void postOrder() const;
    void levelOrder() const ;
        int treeDepth() const;
    bool printPath(int data) const;

  private:
    struct BinaryNode
    {
        T element;
        BinaryNode *leftNode;
        BinaryNode *rightNode;
        BinaryNode(const T &ele, BinaryNode *left, BinaryNode *right)
            : element(ele), leftNode(left), rightNode(right){};

        BinaryNode(const T &ele)
            : element(ele), leftNode(nullptr), rightNode(nullptr){};

        BinaryNode(const BinaryNode *bNode)
            : element(bNode->element), leftNode(bNode->leftNode), rightNode(bNode->rightNode)
        {
        }
    };

    BinaryNode *root;
    BinaryNode *clone(const BinaryNode *bNode);
    void insert(const T &theElement, BinaryNode *&t);
    void remove(const T &theElement, BinaryNode *&t);
    void makeEmpty(BinaryNode *&t);
    bool isFind(const T &theElement, BinaryNode *t) const;
    BinaryNode *findMin(BinaryNode *bNode) const;
    BinaryNode *findMax(BinaryNode *bNode) const;
    void preOrder(BinaryNode *bNode) const;
    void inOrder(BinaryNode *bNode) const;
    void postOrder(BinaryNode *bNode) const;
    void levelOrder(BinaryNode *bNode)const;
    int treeDepth(BinaryNode *bNode) const;
    bool printPath(int data, BinaryNode *bNode) const;
};

#endif //BINARYTREE_BINARYTREE_H_H
