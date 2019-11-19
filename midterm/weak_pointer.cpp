//
// Created by 김혁진 on 2019/10/28.
//

#include "weak_pointer.h"

namespace ptr {
ptr::weak_pointer::weak_pointer() {
    ptr = nullptr;
}

weak_pointer::weak_pointer(shared_ref &shared) {
    ptr = shared.get();
}

weak_pointer::weak_pointer(const weak_pointer &weak) {
	*this = weak; 
}

// ptr_map에 key ptr의 value가 nullptr가 아니라면 0, 맞다면 1을 리턴
int weak_pointer::is_expired() {
	if (ptr_map[ptr])
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

student *weak_pointer::get() {
	return this->ptr;
}

}
