#include <iostream>
#include <cstring>
using namespace std;
namespace LJH{
	class string{
		public:
			typedef char* iterator;
			string(const char* str=""){
				_size=strlen(str);
				_capacity=_size;
				_str=new char[_capacity+1];	//多一个存储末尾'\0'
				strcpy(_str,str);
				_str[_capacity]='\0';
				cout<<"调用构造函数"<<endl;
			}
			// string() : _size(0), _capacity(0){	//可以合并写成一个
			// 	_str=new char[_capacity+1]{'\0'};
			// }
			~string(){
				delete[] _str;
				_str=NULL;
				_size=_capacity=0;
				cout<<"调用析构函数"<<endl;
				// cout<<"字符串："<<_str<<endl;
				// cout<<"字符串长度："<<_size<<endl;
				// cout<<"字符串所占空间："<<_capacity<<endl;
			}
			const char* c_str() const{
				return _str;
			}
			const size_t c_size() const{
				return _size;
			}
			const size_t c_capacity() const{
				return _capacity;
			}
			iterator begin() const{
				return _str;
			}
			iterator end() const{
				return _str+_size;
			}
			void reserve(size_t n){		//(长度)
				if(n>_capacity){
					char* str=new char[n+1];	//给最后的'\0'留空间
					strcpy(str,_str);
					delete[] _str;
					_str=str;
					_capacity=n;
				}
			}
			void resize(size_t n, char ch='\0'){	//(长度，扩容字符)
				if(n<=0){
					cout<<"Invalid n for resize."<<endl;
				}
				if(n<_capacity){
					_str[n]='\0';
					_size=_capacity=n;
				}
				else if(n>_capacity){
					char* str=new char[n+1];
					strcpy(str,_str);
					memset(str+_capacity,ch,n-_capacity);	//在末尾添加字符
					delete[] _str;
					_str=str;
					_size=_capacity=n;
				}
			}
			void clear(){	//调用resize实现
				resize(0);
			}
			const char& operator[](size_t pos) const{	//合法返回对应字符，越界返回'\0'
				if(pos<0||pos>=_size){
					cout<<"Invalid pos for operator[]."<<endl;
					return _str[_size];
				}
				return _str[pos];
			}
			void push_back(const char ch){	//可利用reserve来确保足够的空间
				reserve(_size+1);
				_str[_size++]=ch;
				_str[_size]='\0';
			}
			string& operator+=(const char ch){
				reserve(_size+1);
				_str[_size++]=ch;
				_str[_size]='\0';
				return *this;
			}
			string& operator+=(const char* str){
				size_t len=strlen(str);
				reserve(_size+len);
				strcat(_str+_size,str);
				_size=_size+len;
				return *this;
			}
			string& operator+=(const string& other){	//类的成员函数可以访问同类的其他对象的私有成员
				reserve(_size+other._size);
				strcat(_str+_size,other._str);
				_size=_size+other._size;
				return *this;
			}
			string& append(const char ch){
				reserve(_size+1);
				_str[_size++]=ch;
				_str[_size]='\0';
				return *this;
			}
			string& append(const char* str){
				size_t len=strlen(str);
				reserve(_size+len);
				strcat(_str+_size,str);
				_size=_size+len;
				return *this;
			}
			string& append(const char* str, size_t pos,size_t len){
				if(len<=0||pos<0||pos+len>strlen(str)){	//判断是否越界
					cout<<"Invalid pos or length for append."<<endl;
					return *this;
				}
				reserve(_size+len);
				strcat(_str+_size,str+pos);
				_str[_size+len]='\0';
				_size=_size+len;
				return *this;
			}
			string& append(const string& str){
				size_t len=str._size;
				reserve(_size+len);
				strcat(_str+_size,str._str);
				_size=_size+len;
				return *this;
			}
			string& append(const string& str, size_t pos,size_t len){	//(字符串，位置，长度)
				if(len<=0||pos<0||pos+len>=str._size){
					cout<<"Invalid pos or length for append."<<endl;
					return *this;
				}
				reserve(_size+len);
				strcat(_str+_size,str._str+pos);
				_str[_size+len]='\0';
				_size=_size+len;
				return *this;
			}
			string& insert(size_t pos,const char ch){	//(插入位置，插入字符)
				if(pos<0||pos>=_size){
					cout<<"Invalid pos for insert."<<endl;
					return *this;
				}
				char* str=new char[_size+1];
				strncpy(str,_str,pos);
				str[pos]=ch;
				strcpy(str+pos+1,_str+pos);
				delete[] _str;
				_str=str;
				_capacity+=1;
				_size+=1;
				return *this;
			}
			string& insert(size_t pos,const char *str){		//(插入位置，插入字符串)
				if(pos<0||pos>=_size){
					cout<<"Invalid pos for insert."<<endl;
					return *this;
				}
				size_t len=strlen(str);
				char* new_str=new char[_size+len];
				strncpy(new_str,_str,pos);
				strcpy(new_str+pos,str);
				strcpy(new_str+pos+len,_str+pos);
				delete[] _str;
				_str=new_str;
				_capacity+=len;
				_size+=len;
				return *this;
			}
			string& insert(size_t pos,const string& str){
				if(pos<0||pos>=_size){
					cout<<"Invalid pos for insert."<<endl;
					return *this;
				}
				size_t len=str._size;
				char* new_str=new char[_size+len];
				strncpy(new_str,_str,pos);
				strcpy(new_str+pos,str._str);
				strcpy(new_str+pos+len,_str+pos);
				delete[] _str;
				_str=new_str;
				_capacity+=len;
				_size+=len;
				return *this;
			}
			string& erase(size_t pos, size_t len=1){
				if(pos<0||len<=0||pos+len>_size){
					cout<<"Invalid pos or length for insert."<<endl;
					return *this;
				}
				char* new_str=new char[_size-len];
				strncpy(new_str,_str,pos);
				strcpy(new_str+pos,_str+pos+len);
				delete[] _str;
				_str=new_str;
				_capacity-=len;
				_size-=len;
				return *this;
			}
			string substr(size_t pos, size_t len){	
				if(pos<0||len<=0||pos+len>_size){
					cout<<"Invalid pos or length for substr."<<endl;
					return string("");
				}
				char* new_str=new char[len+1];
				strncpy(new_str,_str+pos,len);
				new_str[len]='\0';
				return string(new_str);
			}

		private:
			char* _str;	//char类型指针
			size_t _size;	//字符串长度
			size_t _capacity;	//字符串所占空间

	};
}