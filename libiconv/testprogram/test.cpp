#include<iostream>
#include<iconv.h>

using namespace std;

int convert(char *desc,char *src,const char *input,size_t ilen,char *output,size_t olen)
{
	const char **pin=&input;
	char **pout=&output;

	iconv_t cd=iconv_open(desc,src);
	if(cd==(iconv_t)-1){
			return -1;
	}
	memset(output,0,olen);
	if(iconv(cd,pin,&ilen,pout,&olen)){
	}
	iconv_close(cd);
	return 0;
}


int main()
{
	char basic_str[100] = "我爱北京天安门，天安门上太阳升";
	char utf8_str[200];
	char gb2312_str[100];

	convert("UTF-8","GBK",basic_str,strlen(basic_str),utf8_str,2*strlen(basic_str));

	cout << "basic str: " << basic_str << endl;
	cout << "utf-8 str: " << utf8_str <<endl;

	convert("GBK","UTF-8",utf8_str,strlen(utf8_str),gb2312_str,100);
	cout << "gb2312 str: " << gb2312_str << endl;

	return 0;
}