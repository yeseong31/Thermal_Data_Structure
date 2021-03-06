
/*
	
	08-4 [수식 트리의 구현]

	먼저 수식 트리를 구성하는 방법에 대해서 고민해 볼 것이다.
	그런데 중위 표기법의 수식을 곧장 수식 트리로 표현하는 것은 복잡하고 힘든 일이다.
	하지만 후위 표기법의 수식을 수식 트리로 표현하는 것은 비교적 간단하다.

			중위 표기법의 수식 -> 후위 표기법의 수식 -> 수식 트리

	----------------------------------------------------------------------------------------------

	이진 트리를 만드는 도구는 이미 만들어 놓았으니 따로 만들 필요는 없다.
	그리고 수식 트리를 만드는 과정에서 스택을 필요로 하는데, 이 역시 이미 만들어 놓은 것을 활용하면 된다.

			- 수식 트리 구현에 필요한 이진 트리			BinaryTree2.h,	BinaryTree2.c
			- 수식 트리 구현에 필요한 스택					ListBaseStack.h, ListBaseStack.c

	----------------------------------------------------------------------------------------------

	수식 트리의 구성을 위해서는 후위 표기법의 다음 두 가지 특징을 인지하고 있어야 한다.

		1. 연산 순서대로 왼쪽에서 오른쪽으로 연산자가 나열된다.
		2. 해당 연산자의 두 피연산자는 연산자 앞에 나열된다.

		"후위 표기법의 수식에서 앞쪽에 등장하는 피연산자와 연산자를 이용해서 트리의 하단을 만들고,
		 이를 바탕으로 점진적으로 수식 트리의 윗부분을 구성해 나간다."

	----------------------------------------------------------------------------------------------

	O 수식 트리 구성하기

			1. 수식 트리의 구성과정에서 피연산자는 무조건 스택으로 옮긴다.
			2. 연산자를 만나면 스택에서 두 개의 피연산자를 꺼내어 자식 노드로 연결한다.
			3. 자식 노드를 연결해서 만들어진 트리는 다시 스택으로 옮긴다.


*/




