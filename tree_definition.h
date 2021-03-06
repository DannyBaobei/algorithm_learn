#ifndef TREE_TRAVEL_H
#define TREE_TRAVEL_H

#include "tree.h"

#ifndef RB_TREE
#define DATA_type char
struct TreeNode_s {
	DATA_type data;
	struct TreeNode_s *parent, *lchild, *rchild;
	TreeNode_s( DATA_type  theData);
	static void ConstructTree( TreeNode_p_t &theTree, TreeNode_p_t parentTree,  char* &theKeyWds);
};
#else
//rb_tree
#define DATA_type int
struct TreeNode_s {
	DATA_type data;
	bool isRed ;
	struct TreeNode_s *parent, *lchild, *rchild;
	TreeNode_s( DATA_type  theData);
	static void ConstructTree( TreeNode_p_t &theTree, TreeNode_p_t parentTree,  char* &theKeyWds);
};
#endif

typedef struct List *List_p_t;
TreeNode_p_t first(List_p_t list1);
List_p_t rest(List_p_t list1);
List_p_t Empty() ;
List_p_t Singleton(TreeNode_p_t e) ;
List_p_t Append(List_p_t list1, List_p_t list2);
List_p_t make_inorder_tree_iterator(TreeNode_p_t node) ;
List_p_t make_preorder_tree_iterator(TreeNode_p_t node) ;
List_p_t make_postorder_tree_iterator(TreeNode_p_t node) ;

void Trav_inorder_goto(TreeNode_p_t root, funcVisitor fn);
void Trav_preorder_goto(TreeNode_p_t root, funcVisitor fn);
void Trav_postorder_goto(TreeNode_p_t root, funcVisitor fn);

void Trav_inorder_recur(TreeNode_p_t root, funcVisitor fn);
void Trav_preorder_recur(TreeNode_p_t root, funcVisitor fn);
void Trav_postorder_recur(TreeNode_p_t root, funcVisitor fn);

void Trav_inorder_loop(TreeNode_p_t root, funcVisitor fn);
void Trav_preorder_loop(TreeNode_p_t root, funcVisitor fn);
void Trav_postorder_loop(TreeNode_p_t root, funcVisitor fn);

typedef struct TraverseHandler_s{
	TRAVEL_type_t type;
	funcTravel fn;
}TraverseHandler_t;





















#endif
