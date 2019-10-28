//
// Created by 김혁진 on 14/10/2019.
//

#include "shared_mut.h"
#include <iostream>

namespace ptr {
shared_mut::shared_mut() {
    _mgr = new mgr();
}

shared_mut::shared_mut(Object* _obj) {
    _mgr = new mgr(_obj);
}

shared_mut::shared_mut(const shared_mut& mut) {
	_mgr = mut._mgr;
	this->increase();
}

shared_mut::~shared_mut() {
    release();
}

void shared_mut::release() {
	_mgr->count--;
	if (this->count() == 0) {
		delete(_mgr);
		if (this->get() != nullptr)
		{ // delete _mgr 해도 ptr이 nullptr된게 적용되지 않음.
			_mgr->ptr = nullptr;
		}
	}
	else
	{
		_mgr = new mgr();
	}
}

Object* shared_mut::get() const {
	return _mgr->ptr;
}

int shared_mut::count() {
	return _mgr->count;
}

void shared_mut::increase() {
	_mgr->count++;
}

Object* shared_mut::operator->() {
	return _mgr->ptr;
}

shared_mut shared_mut::operator+(const shared_mut &shared) {
	// l.get() => Object* type
	int number = this->get()->get() + shared.get()->get();
	shared_mut lr(new Object(number));
	return lr;
}

shared_mut shared_mut::operator-(const shared_mut &shared) {
	int number = this->get()->get() - shared.get()->get();
	shared_mut lr(new Object(number));
	return lr;
}

shared_mut shared_mut::operator*(const shared_mut &shared) {
	int number = this->get()->get() * shared.get()->get();
	shared_mut lr(new Object(number));
	return lr;
}

shared_mut shared_mut::operator/(const shared_mut &shared) {
	int number = this->get()->get() / shared.get()->get();
	shared_mut lr(new Object(number));
	return lr;	
}

shared_mut& shared_mut::operator=(const shared_mut &r) {
	this->release();
	*this = r;
	this->increase();
	return *this;
}
} // end of namespace ptr
