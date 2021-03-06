
/*

	11-2 [이진 탐색 트리]

	(공부에 앞서 <Chapter 08. 트리>를 공부하고 오면 좋음)

	"이진 탐색 트리에는 데이터를 저장하는 규칙이 있다.
	 그리고 그 규칙은 특정 데이터의 위치를 찾는데 사용할 수 있다."

	쉽게 말해 '이진 트리'에 '데이터의 저장 규칙'을 더해놓은 것이 '이진 탐색 트리'이다.

		- 이진 탐색 트리의 노드에 저장된 키(key)는 유일하다.
		- 왼쪽과 오른쪽 서브 트리도 이진 탐색 트리이다.
		- 루트 노드의 키가 왼쪽 서브 트리를 구성하는 어떠한 노드의 키보다 크다.
		- 루트 노드의 키가 오른쪽 서브 트리를 구성하는 어떠한 노드의 키보다 작다.

		왼쪽 자식 노드의 키 < 부모 노드의 키 < 오른쪽 자식 노드의 키

	=== O 이진 탐색 트리의 헤더파일 =====================================================

	이진 탐색 트리도 이진 트리이니, 이전에 구현한 이진 트리를 활용하여 구현한다.
	(이전에 BinaryTree2.h와 BinaryTree2.c를 '일반화'하여 구현 및 정의했었기 때문에 별다른 수정 작업이 필요 없다.)

	"이진 탐색 트리가 이진 트리의 확장이라는 사실을 코드 레벨에서 확인할 수 있다."

	이진 탐색 트리의 핵심 연산 세 가지는 다른 자료구조들과 마탐가지로 삽입, 삭제 그리고 탐색이다.
	그런데 삭제는 별도로 고민해야 할 문제이기 때문에, 우선 삽입과 탐색에 대한 함수를 각각 다음과 같이 정의하고자 한다.

		- 삽입		void BSInsert(BTreeNode ** pRoot, BSTData data) {...};
		- 탐색		BTreeNode * BSTSearch(BTreeNode * bst, BSTData data) {...};

	=== O 이진 탐색 트리






*/



