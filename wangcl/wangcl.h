#ifndef wangcl_H
#define  wangcl_H
#include <iostream>
#include <cstdlib>
using namespace std;
struct website{
	string name;
	string web;
}w[70];
int ans;
string bedrock;
void init(){
	freopen("wangcl.in","r",stdin);
	cin>>ans;
	for(int i=1;i<=ans;i++){
		getline(cin,w[i].name);
		getline(cin,w[i].web);
	}
	cin>>bedrock;
	freopen("CON","r",stdin);
	return;
}
void end(){
	freopen("wangcl.in","r",stdin);
	cout<<ans;
	for(int i=1;i<=ans;i++){
		cout<<w[i].name<<endl<<w[i].web<<endl;
	}
	cout<<bedrock;
	freopen("CON","r",stdin);
	return;
}
void java(string v){
	string command="java -Xmx1024M -Xms1024M -jar minecraft"+v+".jar";
	system(command.c_str());
	return;
}
void sbedrock(){
	string command="cd "+bedrock;
	system(command.c_str());
	system("start minecraft");
}
void website(){
	cout<<"请输入想要启动的网页版本"<<endl;
	for(int i=1;i<=ans;i++){
		cout<<i<<"."<<w[i].name<<endl;
	}
	int user;
	cin>>user;
	string command="start "+w[user].web;
	system(command.c_str());
	return;
}
void add_web(string name,string to){
	ans++;
	w[ans].name=name;
	w[ans].web=to;
}
void del_web(string name){
	int flag;
	for(int i=1;i<=ans;i++){
		if(name==w[i].name){
			flag=i;
			break;
		}
	}
	if(flag==ans){
		ans--;
		return;
	}
	for(int i=flag;i<ans;i++){
		w[i].name=w[i+1].name;
		w[i].web=w[i+1].web;
	}
	return;
}
#endif
