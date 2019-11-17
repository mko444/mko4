# include <stdio.h> 
# include <stdlib.h>
typedef struct student{
	int score;
	struct student *next;
	*creat(int n);
} LinkList;
void creat(LinkList *&head,int n){
	LinkList  *node, *end;//定义头节点，普通节点，尾部节点；
	head = (LinkList*)malloc(sizeof(LinkList));//分配地址
	end = head;         //若是空链表则头尾节点一样
	for (int i = 0; i < n; i++) {
		node = (LinkList*)malloc(sizeof(LinkList));
		node->score=0;
		end->next = node;
		end = node;
	}
	end->next = NULL;//结束创建
	
}
void change(LinkList *list,int n,int aaa) {//n为第n个节点
	LinkList *t = list;
	int i = -1;
	while (i < n && t != NULL) {
		t = t->next;
		i++;
	}
	if (t != NULL) {
	
		t->score=aaa;
	}
	else {
		puts("节点不存在");
	}
}
void delet(LinkList *list, int n) {
	LinkList *t = list, *in;
	int i = 0;
	while (i < n && t != NULL) {
		in = t;
		t = t->next;
		i++;
	}
	if (t != NULL) {
		in->next = t->next;
		free(t);
	}
	else {
		puts("节点不存在");
	}
}
void insert(LinkList *list, int n) {
LinkList *t = list, *in;
int i = 0;
while (i < n && t != NULL) {
t = t->next;
i++;
}
if (t != NULL) {
in = (LinkList*)malloc(sizeof(LinkList));
printf("输入要插入的值");
scanf("%d", &in->score);
in->next = t->next;//填充in节点的指针域，也就是说把in的指针域指向t的下一个节点
t->next = in;//填充t节点的指针域，把t的指针域重新指向in
}
else {
puts("节点不存在");
}
}
void print(LinkList *list){

		LinkList *h = list;
        while (h->next != NULL) {
		h = h->next;
		printf("%d  ", h->score);
	}
}
int getelem(LinkList *list, int pos)
{
    student *p = list; //声明一个结点p，指向头结点

    int i = 0;

    while(p && i < pos)   
    {
        p = p->next;
        ++i;
    }
    if(!p || i > pos)
    {
       // cout << "第" << pos << "个元素不存在" << endl;
    }
    int getData = p->score;
    return getData;
} 
int main(){
	
	//第二题(先构造相等长度的链表，再替换 
	{		printf("\n");
	int a[10]={0,1,2,3,4,5,6,7,8,9}; 
	int len = sizeof(a)/sizeof(a[0]);

	LinkList  *lstt= NULL;
	creat(lstt,len);	
	for(int i=0 ;i<10;i++)
	{ 
	change(lstt,i,a[i]);
	} 
	print(lstt);

}
	
	return 0;
}
