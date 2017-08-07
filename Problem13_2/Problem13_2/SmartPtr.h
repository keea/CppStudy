/*
* SmartPtr Declaration
* @file		SmartPtr.h
* @date     Mon Aug  7 13:09:16 2017
* @author   keea
*/

#ifndef __SMARTPTR_H__
#define __SMARTPTR_H__

template <typename T>
class SmartPtr {
private:
	T * posptr;

public:
	SmartPtr(T * ptr);
	T& operator* () const;
	T* operator->() const;
	~SmartPtr();
};

#endif // !__SMARTPTR_H__

