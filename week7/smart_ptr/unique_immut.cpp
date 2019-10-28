//
// Created by 김혁진 on 14/10/2019.
//

#include "unique_immut.h"

namespace ptr {
unique_immut::unique_immut() {
    _mgr = new mgr();
}

unique_immut::unique_immut(Object *obj) {
    _mgr = new mgr(obj);
}

unique_immut::unique_immut(const unique_immut &immut) {
    if (immut._mgr) {
        int val = immut._mgr->ptr->get();
        _mgr = new mgr(val);
    }
}

unique_immut::~unique_immut() {
    release();
}

Object* unique_immut::get() const {
	return _mgr->ptr;
}

void unique_immut::release() {
	if (this->get() != nullptr) {
		delete _mgr;
		if (this->get() != nullptr)
		{ // delete _mgr 해도 ptr이 nullptr된게 적용되지 않음.
			_mgr = new mgr();
		}
	}
}

unique_immut unique_immut::operator+(unique_immut &unique) {
	int l = this->get()->get();
	int r = unique.get()->get();
	this->release();
	unique.release();
	unique_immut lr(new Object(l+r));
	return lr;
}

unique_immut unique_immut::operator-(unique_immut &unique) {
	int l = this->get()->get();
	int r = unique.get()->get();
	this->release();
	unique.release();
	unique_immut lr(new Object(l-r));
	return lr;
}

unique_immut unique_immut::operator*(unique_immut &unique) {
	int l = this->get()->get();
	int r = unique.get()->get();
	this->release();
	unique.release();
	unique_immut lr(new Object(l*r));
	return lr;
}

unique_immut unique_immut::operator/(unique_immut &unique) {
	int l = this->get()->get();
	int r = unique.get()->get();
	this->release();
	unique.release();
	unique_immut lr(new Object(l/r));
	return lr;
}

Object* unique_immut::operator->() {
	return _mgr->ptr;
}

unique_immut& unique_immut::operator=(unique_immut& r) {
	if (&r == this)
		return *this;
	this->release();
	*this = r;
	r.release();
	return *this;
}

} // end of namespace ptr
