#include "wangcl.h"
using namespace std;
string str;
int main(){
	init();
	while(true){
		cin>>str
		if(str=="/end"){
			end();
			break;
		}
		else if(str=="/java"){
			cin>>str;
			java(str);
		}
		else if(str=="/bedrock"){
			bedrock(str);
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
			system(command);
		}
		else{
			cout<<"´íÎó"<<endl;
		}
	}
	return 0;
}
