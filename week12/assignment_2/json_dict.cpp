#include "json_dict.h"
#include <iterator>

void json_dict::put(json-object* key, json_object* val)
{
	v.push_back(make_pair(key, val));
}

int json_dict::find(json_object* key)
{
	for (it = v.begin(); it != v.end(); it++)
	{
		if (*it->first == key)
			return std::distance(v.begin(), it);
	}
}

json_dict::json_dict() {}

static json_object* json_dict::parse(const char* ch, int length)
{
	json_object::_index++;
	if (ch[json_object::_index] == ''')
	{
		this->put(String::parse(ch, length), json_object::parse(ch, length);

	}
}

json_object* json_dict::operator[](json_object key) const
{

}

json_object* json_dict::operator[](const std::string& key) const
{

}

json_object* json_dict::operator[](int key) const
{

}

_type json_dict::type()
{
	return DICT;
}

std::string json_dict::to_string()
{

}
