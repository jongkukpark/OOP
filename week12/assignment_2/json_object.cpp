#include "json_object.h"
#include <stdexcept>


static json_object* json_object::parse(const char* ch, int length)
{
	 // null = 0, " " = 32 /ascii
	if (ch[json_object::_index] == 0) //null
		return null;	
	else if (ch[json_object::_index] == '{') //dictionary
		return json_dict::parse(ch, length -1);
	else if (ch[json-object::_index] == '[') //list
		return json_list::parse(ch, length -1);
	else if (ch[json_object::_index] >= '0' && ch[json_object::_index] <= '9') // 0~9
		return Integer::parse(ch, length -1);
	else if (ch[json_object::_index] == '"' || ch[json_object::_index] == ''') // a~z, A~Z
		return String::parse(ch, length - 1);
	else
		return throw std::runtime_error("object parse fail!"); // error

}

static json_object* json_object::parse(const std::string& st)
{
	int json_object::_index = 0;
	return parse(st, st.length);
}
