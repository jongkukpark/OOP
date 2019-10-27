//
// Created by 김혁진 on 14/10/2019.
//

#include "shared_mut.h"

namespace ptr {
shared_mut::shared_mut() {
    _mgr = new mgr();
}

shared_mut::shared_mut(Object* _obj) {
    _mgr = new mgr(_obj);
}

shared_mut::~shared_mut() {
    release();
}

void shared_mut::release() {
	_mgr->count--;
	if (_mgr->count == 0) {
		delete _mgr;
	}
}

Object* shared_mut::get() {
	return _mgr->ptr;
}

int shared_mut::count() {
	return _mgr->count;
}

void shared_mut::increase() {
	_mgr->count++;

shared_mut shared_mut::operator+(const shared_mut &shared) {
	shared_mut l = *this;
	return new shared_mut(l._mgr->ptr + shared._mgr->ptr);
}
} // end of namespace ptr
