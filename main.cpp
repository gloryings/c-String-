#include <iostream>
#include<D:\Desktop\test\STL\string.h>
using namespace std;

/*string���ܲ��� test1()-test12()*/

void test(){	//���Թ��캯��
	LJH::string s1=("Hello World!");
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
}
// LJH::string* test1(){	//������������
// 	LJH::string s1=("Hello World!");
// 	cout<<"�ַ�����"<<s1.c_str()<<endl;
// 	return &s1;
// }
void test2(){	//����iterator������
	LJH::string s1("hello world!");
	LJH::string::iterator it1=s1.begin();
	while(it1!=s1.end()){
		cout<<*it1;
		it1++;
	}
	cout<<endl;
}
void test3(){	//����reserve
	LJH::string s1=("Hello World!");
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
	s1.reserve(10);
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
	s1.reserve(20);
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
}
void test4(){	//����resize
	LJH::string s1=("Hello World!");
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
	s1.resize(20,'a');
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
	s1.resize(10);
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
}
void test5(){	//����clear
	LJH::string s1=("Hello World!");
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
	s1.clear();
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
}
void test6(){	//��������[]�����
	LJH::string s1=("Hello World!");
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
	for(int i=0;i<s1.c_size()+10;i++)
		cout<<s1[i]<<endl;
}
void test7(){	//����push_back
	LJH::string s1=("Hello World!");
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
	s1.push_back('a');
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
}
void test8(){	//����+=�����
	LJH::string s1=("Hello World!");
	LJH::string s2=("Hello World!");
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
	s1+='a';
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
	s1+="Hello World!";
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
	s1+=s2;
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
}
void test9(){	//����append
	LJH::string s1=("Hello World!");
	LJH::string s2=("Hello World!");
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;

	s1.append('a');
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.append("Hello World!");
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.append("Hello World!",5,2);
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.append(s2);
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.append(s2,5,2);
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.append(s2,100,2);
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
}
void test10(){	//����insert�����
	LJH::string s1=("Hello World!");
	LJH::string s2=("Hello World!");
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
	s1.insert(1,'a');
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.insert(1,"bbbbbbb");
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.insert(1,s2);
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
}
void test11(){	//����erase
	LJH::string s1="Hello World!";
	LJH::string s2=("Hello World!");
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;

	s1.erase(1);
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.erase(1,2);
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;
}
void test12(){	//����substr
	LJH::string s1="Hello World!";
	cout<<"�ַ�����"<<s1.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s1.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s1.c_capacity()<<endl;

	LJH::string s2=s1.substr(1,10);
	cout<<"�ַ�����"<<s2.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s2.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s2.c_capacity()<<endl;

	LJH::string s3=s1.substr(1,100);
	cout<<"�ַ�����"<<s3.c_str()<<endl;
	cout<<"�ַ������ȣ�"<<s3.c_size()<<endl;
	cout<<"�ַ�����ռ�ռ䣺"<<s3.c_capacity()<<endl;

}


int main(){
	test9();
	return 0;
}