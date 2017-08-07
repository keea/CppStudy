/*
* SmartPtr Definition
* @file		SmartPtr.cpp
* @date     Mon Aug  7 13:22:24 2017
* @author   keea
*/

#include "SmartPtr.h"

template <typename T>

SmartPtr<T>::SmartPtr(T * ptr)
	:posptr(ptr) {
}

template <typename T>
T& SmartPtr<T>::operator*() const {
	return *posptr;
}

template <typename T>
T* SmartPtr<T>::operator->() const {
	return posptr;
}

template <typename T>
SmartPtr<T>::~SmartPtr() {
	delete posptr;
}