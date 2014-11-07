#include <stdio.h>
#include <stdlib.h>

typedef   struct 
{
	int data[20];
	int last;
}SeqList,* L;

//���Ա��ʼ�� 
SeqList* init_SeqList()
{
	SeqList* L;
	L = (SeqList*)malloc(sizeof(SeqList));
	L->last= -1;
	return L;
}

//����ĳ��Ԫ�ص����Ա��е�ĳ��λ�� 
int Insert_SeqList(SeqList* L,int i,int x)
{
	int j;
	if(L->last == 19)
	{
		printf("����");
		return -1;
	}
	if(i<1 || i>L->last+2)
	{
		printf("����λ�ó���");
		return 0;
	}


	for(j=L->last;j>=i-1;j--)
		L->data[j+1] = L->data[j];
		L->data[i-1] = x;
		L->last++;
		return 1;
}

//ɾ�����Ա���ĳ��λ�õ�Ԫ�� 
int Delete_SeqList(SeqList* L,int i)
{
	int j;
	if(i<1||i>L->last+1)
	{
		printf("�����ڵ�i��Ԫ��");
		return 0; 
	}
	for(j=i;j<=L->last;j++)
	L->data[j-1]=L->data[j];
	L->last--;
	return 1;
}

//����ĳһ��ֵ��Ԫ�������Ա���ĸ�λ�� 

int Location_SeqList(SeqList* L,int x)
{
	int i=0;
	while(i<=L->last &&L->data[i]!=x)
	i++;
	if(i>L->last)
	return -1;
	else
	return i;
}

int main()
{
	SeqList* L;
	L = init_SeqList();
	
	return 0;
}
