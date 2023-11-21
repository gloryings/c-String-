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
				_str=new char[_capacity+1];	//��һ���洢ĩβ'\0'
				strcpy(_str,str);
				_str[_capacity]='\0';
				cout<<"���ù��캯��"<<endl;
			}
			// string() : _size(0), _capacity(0){	//���Ժϲ�д��һ��
			// 	_str=new char[_capacity+1]{'\0'};
			// }
			~string(){
				delete[] _str;
				_str=NULL;
				_size=_capacity=0;
				cout<<"������������"<<endl;
				// cout<<"�ַ�����"<<_str<<endl;
				// cout<<"�ַ������ȣ�"<<_size<<endl;
				// cout<<"�ַ�����ռ�ռ䣺"<<_capacity<<endl;
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
			void reserve(size_t n){		//(����)
				if(n>_capacity){
					char* str=new char[n+1];	//������'\0'���ռ�
					strcpy(str,_str);
					delete[] _str;
					_str=str;
					_capacity=n;
				}
			}
			void resize(size_t n, char ch='\0'){	//(���ȣ������ַ�)
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
					memset(str+_capacity,ch,n-_capacity);	//��ĩβ����ַ�
					delete[] _str;
					_str=str;
					_size=_capacity=n;
				}
			}
			void clear(){	//����resizeʵ��
				resize(0);
			}
			const char& operator[](size_t pos) const{	//�Ϸ����ض�Ӧ�ַ���Խ�緵��'\0'
				if(pos<0||pos>=_size){
					cout<<"Invalid pos for operator[]."<<endl;
					return _str[_size];
				}
				return _str[pos];
			}
			void push_back(const char ch){	//������reserve��ȷ���㹻�Ŀռ�
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
			string& operator+=(const string& other){	//��ĳ�Ա�������Է���ͬ������������˽�г�Ա
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
				if(len<=0||pos<0||pos+len>strlen(str)){	//�ж��Ƿ�Խ��
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
			string& append(const string& str, size_t pos,size_t len){	//(�ַ�����λ�ã�����)
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
			string& insert(size_t pos,const char ch){	//(����λ�ã������ַ�)
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
			string& insert(size_t pos,const char *str){		//(����λ�ã������ַ���)
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
			char* _str;	//char����ָ��
			size_t _size;	//�ַ�������
			size_t _capacity;	//�ַ�����ռ�ռ�

	};
}