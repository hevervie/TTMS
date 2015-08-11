﻿//实体数据
typedef struct {
	int id;			//放映厅ID
	char name[30];		//放映厅名称
	int rowsCount;		//座位行数
	int colsCount;		//座位列数
}studio_t;

//链表节点定义
typedef struct stdio_node
{
	studio_t data;			//实体数据
	struct stdio_node *next;	//后向指针
	struct stdio_node *prev;	//前向指针
}studio_node_t,*studio_list_t;


