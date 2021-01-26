
/*

	10-2 [���������� ȿ������ ���� �˰�����]

===============================================================================================================
===============================================================================================================

[�� ����(Heap Sort)]

	�� ������ ���� �̿��� ���Ĺ������
	�ռ� �����ߴ� '�켱���� ť�� ��'�� ���� �˸� ������ �� ������ ���� ���� �˰������̴�.
	'���� ��Ʈ ��忡 ����� ���� ���ļ����� ���� �ռ���'�� Ư���� Ȱ���Ͽ� �����ϴ� �˰������̴�.

	�� ������ ������ ���ؼ���
	UsefulHeap.h�� UsefulHeap.c �� ���� ���ϰ� �Բ� �������� �ؾ� �Ѵ�.
	�����Ͽ� �ռ� ������� UsefulHeap.h�� typedef ������ ������ ���� �ٲ�� �Ѵ�.

			typedef int HData;

	---------------------------------------------------------------------------------------------------------

	<������>

	�ռ� Chapter 09������ �񱳿����� Ƚ���� �ٰŷ� �Ͽ� ���� ������ ���� �� ������ �ð� ���⵵�� ������ ���� ����ߴ�.

		- ���� ������ ���� �ð� ���⵵			O(log2 n)
		- ���� ������ ���� �ð� ���⵵			O(log2 n)

	���� ���԰� ������ �ϳ��� �������� ���´ٸ�, �� ���꿡 ���� �ð� ���⵵�� O(2 log2 n)�� �ǹǷ�
	���� 2�� �����ϰ� �ȴٸ� ������ ���� ����� ���´�.

		- ���꿡 ���� �ð� ���⵵				O(log2 n)

	���� ���Ĵ���� ���� n�����, �� n���� �����͸� ���� �� �����ؾ� �ϹǷ� ������ ����� ���´�.

		- ���İ����� ���� �ð� ���⵵			O(n log2 n)

===============================================================================================================
===============================================================================================================

[���� ����(Merge Sort)]

	���� ������ '���� ����(Divide And Conquer)'�̶�� �˰����� ������ ����� �ٰ��Ͽ� ������� ���� ����̴�.

		����(Divide) > ����(Conquer) > ����(Combine)			-> �ϳ��� ������ ������ �ɰ�� Ǯ�����.

	"���� ������ �����Ͱ� 1���� ���� ������ ������ �س�����.
	 �����Ͱ� 2���� ���Ƶ� ������ �� �ʿ䰡 ������, �����Ͱ� 1���� ������ �������� ���ʿ������� �����̴�."

			   82371546					|				
										|				������ ������ ������̴�!
			 8237	 1546				|				
										|				������ ������ ������� �ʾƵ� �� ���ر��� �����Ѵ�.
		82	  37	  15	46			|				(�ذ��ϱ� ���� �ܰ���� �����Ѵٴ� �Ϳ� �ָ�!)
										|
	 8	2	3	7	1	5	4	6		V  ������ ����
										|				
		28	  37	  15	46			|				�׳� ���� ���� �ƴ϶� ���ļ����� �����ؼ� ���´�.
										|
			 2378	 1456				|	
										|
			   12345678					V  ������ ����

	---------------------------------------------------------------------------------------------------------

	<������>

	�� ������ ������ MergeSort �Լ��� �ƴ�, MergeTwoArea �Լ��� �������� ����ؾ� �Ѵ�.
	�񱳿���� �̵������� ���� ������ �����ϴ� MergeTwoArea �Լ��� �߽����� ����Ǳ� �����̴�.

	"������ ����� �������� ���� n���� ��, �� ������ �ܰ踶�� �ִ� n���� �񱳿����� ����ȴ�."
	���� ���� ������ �񱳿��꿡 ���� ��-���� ������ ����.

		O(n log2 n)					// �ִ� �񱳿����� Ƚ��: ������ ����(n) x ���� �ܰ� ��(log2 n)

	�������� �̵��� �߻��ϴ� ������ ������ ����.

		- �ӽ� �迭�� �����͸� �����ϴ� �������� �� ��!
		- �ӽ� �迭�� ����� ������ ���θ� ����ġ�� �ű�� �������� �� ��!

	���� ���� ������ �̵����� Ƚ���� �־�, ���, �ּ� ������� (2n log2 n)�ε�
	��-������ ���� 2�� ������ �� �����Ƿ�, ���� ������ �̵����꿡 ���� ��-���� ������ ����.

		O(n log2 n)					// �������� ���� �þ�� ��-���� ���Ծ���

===============================================================================================================
===============================================================================================================

[�� ����(Quick Sort)]
	
	�� ���ĵ� �ռ� �Ұ��� ���� ���İ� ���������� '���� ����'�� �ٰ��Ͽ� ������� ���� ����̴�.
	�׸��� �� ������ �� �̸��� �ǹ��ϵ��� ��������� �ſ� ���� ������ �ӵ��� ���̴� �˰������̴�.

		<�� ������ �⺻>
		----------------------------------------------------------------------------------------------------------------------------------------------

		   left						      right			- left:		���Ĵ���� ���� ���� ������ ����Ű�� �̸�
			v								v			- right:	���Ĵ���� ���� ������ ������ ����Ű�� �̸�
			5	1	3	7	9	2	4	6	8			- pivot:	�߽��� �Ǵ� �߽���. ������ �����ϴµ� �ʿ��� ������ '����' (���� ������ �����Ͷ�� ����)
			^	^							^			- low:		pivot�� ������ ���� ���ʿ� ��ġ�� ������ ����Ű�� �̸�
	 	 pivot low						   high			- high:		pivot�� ������ ���� �����ʿ� ��ġ�� ������ ����Ű�� �̸�

		----------------------------------------------------------------------------------------------------------------------------------------------

			5	1	3	7	9	2	4	6	8			low�� ������ ���� �̵�:	pivot���� ������ �켱������ ���� �����͸� ���� ������
			^	 >>>>>	^			^  <<<<<			high�� ���� ���� �̵�:	pivot���� ������ �켱������ ���� �����͸� ���� ������
		 pivot  	   low		   high					�� ��Ȳ������ low�� high�� ���� 7�� 4�� ����Ű�� �ȴ�.

		----------------------------------------------------------------------------------------------------------------------------------------------

			5	1	3  '4'	9	2  '7'	6	8			low�� high�� �̵��� �Ϸ�Ǿ����� �� ���� ����Ű�� �����͸� ���� '��ȯ'�Ѵ�.
			^			^			^					��ȯ �Ŀ��� low�� pivot���� ū ���� ã�� ������ ����������,
		 pivot  	   low		   high					high�� pivot���� ���� ���� ã�� ������ �������� �̵��� ������.

		----------------------------------------------------------------------------------------------------------------------------------------------

			5	1	3	4	9	2	7	6	8			=>				5	1	3	4  '2' '9'	7	6	8		
			^			>>	^	^  <<				 �̵� �Ϸ�			^				^	^  
		 pivot  		   low high					������ ��ȯ			pivot  		   low high	
		 		
		----------------------------------------------------------------------------------------------------------------------------------------------

			5	1	3	4	2	9	7	6	8			�׷��� �ᱹ���� ������ ���� low�� high�� ����Ű�� ��ġ�� �����Ǵ� ��Ȳ�� �߻��Ѵ�.
			^				^	^  						�̶��� low�� high�� ����Ű�� ���� ��ȯ���� �ʴ´�.
		 pivot  		'high''low'						�� ��Ȳ�� low�� high�� �̵� �� ��ȯ�� ������ �Ϸ�Ǿ����� �ǹ��ϱ� �����̴�.
		
		----------------------------------------------------------------------------------------------------------------------------------------------

		   '2'	1	3	4  '5'	9	7	6	8			���� �̹����� pivot�� high�� ����Ű�� �����͸� ���� '��ȯ'�Ͽ� ���� �׸��� ���°� �ǰ� �Ѵ�.
			-------------	^	-------------			�̷ν� pivot�̾��� ���� 5�� Ȧ�� ������ �ϼ��Ǿ���. (��������� 1ȸ��)
		   		 (1)			 	 (2)				(1):	pivot�̾��� ������ '5'���� �켱���� ����
														(2):	pivot�̾��� ������ '5'���� �켱���� ����

		----------------------------------------------------------------------------------------------------------------------------------------------

		   left		  right	|  left		  right			���ڸ��� ã�� 5�� �������� ���� ������ ������ ������ ������� �Ϸ��� ������ �ݺ��ϰ� �ȴ�. (���)
			v			v	|	v			v			
			2	1	3	4  '5'	9	7	6	8			�� ������ left�� right�� ���� ���Ĵ���� ���۰� ���� �ǹ��ϹǷ� 'left > right',
			^	^			|	^	^		^			�� left�� right�� �����Ǵ� ��Ȳ�� �Ǹ� �� �̻� ������ ����� ���� ������ �ݺ��ϰ� �ȴ�.
		 pivot low			| pivot left   high			

	---------------------------------------------------------------------------------------------------------

	<������>

	������ �������� �ѷ� ������ Ƚ���� k�� �� ��, �������� �� n���� ����� 'k = log2 n'�̹Ƿ�
	�� ���Ŀ��� �񱳿����� ��-���� ������ ����.

		O(n log2 n)

	���� �̰��� �ּ��� ��쿡 ���� ��-���̴�. ������ �� ������ ��쿡�� �ణ�� ���ܸ� �д�.
	������ '�߰��� ����� pivot�� �����ϴ� ���'�� ���������ν�,
	�� �ּ��� ��츦 ���̴� ���� �ƴ����� �ּ��� ��쿡 ����� ������ ��������� ���̱� �����̴�.

	�־��� ���, �� pivot�� ���� ���� ������ �����Ǵ� ��Ȳ������, �ѷ� ������ Ƚ�� k�� �������� �� n���� ���谡 'k = n'�̹Ƿ�
	�־��� ����� �񱳿��� Ƚ���� ���� ��-���� ������ ����.

		O(n^2)		(�̸� �������� �� ������ �������� ����)

	�����ϸ�, �� ������ �ð� ���⵵�� O(n log2 n)�� �˰������̴�.
	������ �������� �̵��� �������� �񱳿� ���� ������ ���� �Ͼ��,
	������ �޸� ������ �䱸���� �����Ƿ� ������ ��-���� ���� �ٸ� ���� �˰����� �߿���
	��������� ���� ���� ���ļӵ��� ���̴� �˰������̴�.

===============================================================================================================
===============================================================================================================

[��� ����(Radix Sort)]

	��� ������ ���ļ����� �ռ��� �ڼ��� �Ǵ��� ���� �񱳿����� ���� �ʴ´�.
	���� ���� �˰������� �̷л� ������ �Ѱ�� O(n log2 n)���� �˷��� �ִµ�,
	��� ������ �̷��� �Ѱ踦 �Ѿ �� �ִ� ������ �˰������̴�.

	������ '������ �� �ִ� ������ ������'�̴�. ���̰� ���� �����͵��� ������δ� ������ ����������,
	���̰� ���� ���� �����͵��� ������δ� ������ �Ұ����ϴ�. (������ ������ ȿ������ �鿡�� ������ �ΰ���)

	"n���� ������ ������ ���ؼ��� �� n���� '��Ŷ'�� �ʿ��ϴ�!"
	�׸��� ���Ĵ���� ���� �ش��ϴ� ��Ŷ���� �̵��� �ϰ� �ȴ�.

		<LSD ��� ������ ����>
		----------------------------------------------------------------------------------------------------------------------------------------------

			- LSD ��� ����: Least Significant Digit
							'�� �߿��� �ڸ���', �� ù ��° �ڸ������� �����ؼ� ������ ������ �����ٴ� �ǹ�

					V				��Ŷ -----------------						V
			1	3	4				0:									2	3	2
			1	2	4		->		1:							->		1	2	2		ù ��° �ڸ����� �������� ��Ŷ 2�� ��Ŷ 4�� ���Ĵ���� �ְ� ����
			2	3	2				2: ( 1 2 2 ) ( 2 3 2 )				1	3	4		
			1	2	2				3:									2	2	4		�� ��� 232, 122, 134, 224 ������ �����͵��� ���ĵ�
					^				4: ( 2 2 4 ) ( 1 3 4 )						^
									----------------------

		----------------------------------------------------------------------------------------------------------------------------------------------

				V					��Ŷ -----------------					V
			2	3	2				0:									1	2	2
			1	2	2		->		1:							->		2	2	4		ù ��° ������ �� ��° ������ ������ �������� 
			1	3	4				2: ( 2 2 4 ) ( 1 2 2 )				2	3	2		�� ��° �ڸ����� ������ �����̶�� ���̴�.
			2	2	4				3: ( 1 3 4 ) ( 2 3 2 )				1	3	4		
				^					4:										^
									----------------------

		----------------------------------------------------------------------------------------------------------------------------------------------

			V						��Ŷ -----------------				V
			1	2	2				0:									1	2	2
			2	2	4		->		1: ( 1 3 4 ) ( 1 2 2 )		->		1	3	4		�̷ν� �������������� ������ �Ϸ�Ǿ���.
			2	3	2				2: ( 2 3 2 ) ( 2 2 4 )				2	2	4		(122, 134, 224, 232)
			1	3	4				3:									2	3	2
			^						4:									^
									----------------------

		----------------------------------------------------------------------------------------------------------------------------------------------

		�� LSD ��� ������ ������ ������ ����.

			"���� �ڸ������� �����ؼ� ���� ū �ڸ������� ��� �񱳸� �ؾ� ���� ��Ҹ� �Ǵ��� �� �ִ�.
			 �� �߰��� ��Ҹ� �Ǵ��ϴ� ���� �Ұ����ϴ�."

		���� ������� ū �ڸ����� �������� ���ϴ� ���������� ����� �� �� ���� ���� �� ����� �����̴�.

		<LSD vs. MSD>

			�̿� �ݴ�� ���� ū �ڸ����������� ������ ����Ǵ� MSD ����� �����Ѵ�.
			MSD ���� ����� ���������� ������ �ϼ��Ǿ� ���� ������ ���
			"�ݵ�� ������ ���� ������ ��ġ�� �ʾƵ� �Ǹ�, �߰��� ������ �Ϸ�� ���� �ִ�"�� ���� �����̴�.
			������ �̷��� ��� "��� �����Ϳ� �ϰ����� ������ ��ĥ �� ��"�� �ǹǷ�
			������ ���̵��� LSD�� ���� ��������� ������, �߰��� �������� ������ �䱸�ǹǷ� ������ ������ �ݰ��� �� �ִ�.
			LSD�� MSD�� ��-���� ������ �Ϲ����� ��Ȳ�̶�� ���� MSD ����� ������ ������ ����.
			
		<LSD ����>

		���� ������� �� ���̿� ������� ������ ��� ���Խ�ų �� �ִ� ��� ������ �����ϰ��� �Ѵ�.
		������ ��Ŷ�� �� ������ 'ť'�� �ش��ϱ� ������ '���� ����Ʈ ����� ť'�� Ȱ���ϸ� �ȴ�.

	---------------------------------------------------------------------------------------------------------

	<������>

	��� ������ �񱳿����� �ٽ��� �ƴϴ�. ������ ��Ŷ������ ������ ���԰� ������ �ٽ��̴�.
	���� �� ������ �ð� ���⵵�� ���԰� ������ �󵵼��� ������� �����ؾ� �Ѵ�.

	��Ŷ�� ������� �ϴ� �������� ���԰� ������ �� ���� �������� ������, �� �� ���� ������ ����Ǵ� Ƚ���� ������ ����.
	
		maxLen x num

	���� ���Ĵ���� ���� n�̰�, ��� ���Ĵ���� ���̰� l�̶� �� ��, �ð� ���⵵�� ���� ��� ������ ��-���� ������ ����.

		O(ln)

	���� �̴� O(n)���� ���Ƶ� �ȴ�. �׸��� �̷ν� ��� ������ O(n log2 n)�� �� ���ĺ��� �پ O(n)�� ������ ������ �� �� �ִ�.
	���� ���� ������ ����� �������̶�� ������ ������ ���̴�.

*/

