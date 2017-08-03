/*
* BoundCheckIntArray Definition
* @file		BoundCheckIntArray
* @date     Thu Aug  3 12:51:42 2017
* @author   keea
*/

#ifndef __BOUNDCHECKINTARRAY_H__
#define __BOUNDCHECKINTARRAY_H__

class BoundCheckIntArray {
private:
	int * arr;
	int len;
	BoundCheckIntArray(const BoundCheckIntArray& arr) {}
public:
	BoundCheckIntArray();
	BoundCheckIntArray(int );
	int & operator[](int index);
	~BoundCheckIntArray();
};

#endif // !__BOUNDCHECKINTARRAY_H__

