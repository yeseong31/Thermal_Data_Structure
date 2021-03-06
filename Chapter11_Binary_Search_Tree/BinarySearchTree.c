
#include "BinarySearchTree.h"
#include <stdio.h>


void BSTMakeAndInit(BTreeNode** pRoot) {
	*pRoot = NULL;
}

BSTData BSTGetNodeData(BTreeNode* bst) {
	return GetData(bst);
}

void BSTInsert(BTreeNode** pRoot, BSTData data) {
	BTreeNode* pNode = NULL;			// parent node
	BTreeNode* cNode = *pRoot;			// current node
	BTreeNode* nNode = NULL;			// new node

	// 새로운 노드가(새 데이터가 담긴 노드가) 추가될 위치를 찾는다.
	while (cNode != NULL) {
		if (data == GetData(cNode))
			return;						// 데이터(키) 중복을 허용하지 않음

										// while문을 빠져나오면 cNode에는 새 노드가(새 데이터가 저장된 노드가) 저장될 위치정보가 담긴다.
		pNode = cNode;					// 그런데 이 위치에 노드를 저장하기 위해 필요한 것은, 이 위치를 자식으로 하는 부모 노드의 주소 값이다.
										// (부모 노드에 자식 노드의 주소 값이 저장되므로) pNode를 통해 부모 노드의 주소 값을 유지하는 것이다.
								
		if (data < GetData(cNode))
			cNode = GetLeftSubTree(cNode);
		else
			cNode = GetRightSubTree(cNode);
	}

	// pNode의 자식 노드로 추가할 새 노드의 생성
	nNode = MakeBTreeNode();			// 새 노드의 생성
	SetData(nNode, data);				// 새 노드에 데이터 저장

	// pNode의 자식 노드로 새 노드를 추가
	if (pNode != NULL) {
		if (data < GetData(pNode))
			MakeLeftSubTree(pNode, nNode);
		else
			MakeRightSubTree(pNode, nNode);
	}
	// 새 노드가 루트 노드라면
	else
		*pRoot = nNode;
}

BTreeNode* BSTSearch(BTreeNode* bst, BSTData target) {
	BTreeNode* cNode = bst;				// current node
	BSTData cd;							// current data

	while (cNode != NULL) {
		cd = GetData(cNode);

		if (target == cd)
			return cNode;
		else if (target < cd)
			cNode = GetLeftSubTree(cNode);
		else
			cNode = GetRightSubTree(cNode);
	}

	return NULL;						// 탐색 대상이 저장되어 있지 않음
}
