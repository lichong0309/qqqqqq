#ifndef README_H
#define README_H
#include<iostream>
#include<string>
#include<fstream> 
using namespace std;
struct BBB
{
	int b1;//���� 
	string b2;//��һ��·����
	BBB *linkk; 
} ;
struct AAA
{
	string a1;//·���� 
	AAA *link;
	BBB *linkk;
	virtual AAA *AA(struct AAA *head);
	virtual AAA *BB(AAA *head);
	virtual AAA *DD(struct AAA *head);//�����·��
};

#endif
