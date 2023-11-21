#include <iostream>
#include<D:\Desktop\test\STL\string.h>
using namespace std;

/*string¹¦ÄÜ²âÊÔ test1()-test12()*/

void test(){	//²âÊÔ¹¹Ôìº¯Êı
	LJH::string s1=("Hello World!");
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
}
// LJH::string* test1(){	//²âÊÔÎö¹¹º¯Êı
// 	LJH::string s1=("Hello World!");
// 	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
// 	return &s1;
// }
void test2(){	//²âÊÔiteratorµü´úÆ÷
	LJH::string s1("hello world!");
	LJH::string::iterator it1=s1.begin();
	while(it1!=s1.end()){
		cout<<*it1;
		it1++;
	}
	cout<<endl;
}
void test3(){	//²âÊÔreserve
	LJH::string s1=("Hello World!");
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
	s1.reserve(10);
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
	s1.reserve(20);
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
}
void test4(){	//²âÊÔresize
	LJH::string s1=("Hello World!");
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
	s1.resize(20,'a');
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
	s1.resize(10);
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
}
void test5(){	//²âÊÔclear
	LJH::string s1=("Hello World!");
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
	s1.clear();
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
}
void test6(){	//²âÊÔÖØÔØ[]ÔËËã·û
	LJH::string s1=("Hello World!");
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
	for(int i=0;i<s1.c_size()+10;i++)
		cout<<s1[i]<<endl;
}
void test7(){	//²âÊÔpush_back
	LJH::string s1=("Hello World!");
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
	s1.push_back('a');
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
}
void test8(){	//²âÊÔ+=ÔËËã·û
	LJH::string s1=("Hello World!");
	LJH::string s2=("Hello World!");
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
	s1+='a';
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
	s1+="Hello World!";
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
	s1+=s2;
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
}
void test9(){	//²âÊÔappend
	LJH::string s1=("Hello World!");
	LJH::string s2=("Hello World!");
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;

	s1.append('a');
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.append("Hello World!");
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.append("Hello World!",5,2);
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.append(s2);
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.append(s2,5,2);
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.append(s2,100,2);
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
}
void test10(){	//²âÊÔinsertÔËËã·û
	LJH::string s1=("Hello World!");
	LJH::string s2=("Hello World!");
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
	s1.insert(1,'a');
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.insert(1,"bbbbbbb");
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.insert(1,s2);
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
}
void test11(){	//²âÊÔerase
	LJH::string s1="Hello World!";
	LJH::string s2=("Hello World!");
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;

	s1.erase(1);
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;

	s1="Hello World!";
	s1.erase(1,2);
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;
}
void test12(){	//²âÊÔsubstr
	LJH::string s1="Hello World!";
	cout<<"×Ö·û´®£º"<<s1.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s1.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s1.c_capacity()<<endl;

	LJH::string s2=s1.substr(1,10);
	cout<<"×Ö·û´®£º"<<s2.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s2.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s2.c_capacity()<<endl;

	LJH::string s3=s1.substr(1,100);
	cout<<"×Ö·û´®£º"<<s3.c_str()<<endl;
	cout<<"×Ö·û´®³¤¶È£º"<<s3.c_size()<<endl;
	cout<<"×Ö·û´®ËùÕ¼¿Õ¼ä£º"<<s3.c_capacity()<<endl;

}


int main(){
	test9();
	return 0;
}