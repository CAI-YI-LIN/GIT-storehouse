#include<iostream>

using namespace std;

void print_arr(int* arr, int size)	//�N�}�Carr�̩Ҧ�������X
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void change_size(int*& arr, int &size)	//�N��l�}�C�X�W��2���j
{
	
	int* new_arr = new int[size *2];	//new�@�����lsize�j2�����}�C
	int* recycler = arr;	//�ŧi��ƫ���recycler�A�åB���Varr����m
	copy(arr, arr + size, new_arr);	//�Narr���e�ƻs��new_arr
	for (int i = size; i < size *2; i++)	//�Nnew_arr���Qarr�ϥΪ��}�C��l��0
		new_arr[i] = 0;
	size *= 2;	//�Nsize�}�C�j�p��s��������⭿
	delete[] recycler;	//�Nrecycler���V��arr�°}�C�^��
	arr = new_arr;	//�Narr����m���Vnew_arr
}
int main()
{
	int size = 0;	//��l�}�Csize=0
	cout << "�п�J��l�}�Csize:";
	cin >> size;	//��J�}�C�j�p
	int* arr = new int[size];	//�̷ӿ�J�j�pnew�@�Ӱ}�Carr
	for (int i = 0; i < size; i++)	//�Narr�}�C��J�ƭ�
		 arr[i]=i;

	cout << "size��"<<size<<"���}�C:" << endl;
	print_arr(arr, size);

	change_size(arr, size);
	cout << "size��" << size << "���}�C:" << endl;
	print_arr(arr, size);


	return 0;
}