#include "wangcl.h"
using namespace std;
string str;
int main(){
	init();
	getchar();
	while(true){
		cin>>str;
		cin.ignore();
		if(str=="/end"){
			end();
			break;
		}
		else if(str=="/java"){
			cin>>str;
			java(str);
		}
		else if(str=="/bedrock"){
			sbedrock();
		}
		else if(str=="/cbedrock"){
			cin>>bedrock;
		}
		else if(str=="/webstart"){
			website();
		}
		else if(str=="/addweb"){
			string str2;
			cin>>str>>str2;
			add_web(str,str2);
		}
		else if(str=="/delweb"){
			cin>>str;
			del_web(str);
		}
		else if(str=="/color"){
			cin>>str;
			string command="color "+str;
			system(command.c_str());
		}
		else{
			cout<<"错误"<<endl;
		}
	}
	return 0;
}
