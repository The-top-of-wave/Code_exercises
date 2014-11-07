#include <stdio.h>
#include <stdlib.h>

typedef   struct 
{
	int data[20];
	int last;
}SeqList,* L;

//线性表初始化 
SeqList* init_SeqList()
{
	SeqList* L;
	L = (SeqList*)malloc(sizeof(SeqList));
	L->last= -1;
	return L;
}

//插入某个元素到线性表中的某个位置 
int Insert_SeqList(SeqList* L,int i,int x)
{
	int j;
	if(L->last == 19)
	{
		printf("表满");
		return -1;
	}
	if(i<1 || i>L->last+2)
	{
		printf("插入位置出错");
		return 0;
	}


	for(j=L->last;j>=i-1;j--)
		L->data[j+1] = L->data[j];
		L->data[i-1] = x;
		L->last++;
		return 1;
}

//删除线性表中某个位置的元素 
int Delete_SeqList(SeqList* L,int i)
{
	int j;
	if(i<1||i>L->last+1)
	{
		printf("不存在第i个元素");
		return 0; 
	}
	for(j=i;j<=L->last;j++)
	L->data[j-1]=L->data[j];
	L->last--;
	return 1;
}

//查找某一个值的元素在线性表的哪个位置 

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
