#ifndef __TEST_H__
#define __TEST_H__

class test {
private:
	int * arr;
	int len;

public:
	test() {
	}
	test(int _len)
		:len(_len){
		arr = new int[len];
	}

	int& operator[](int index) {
		return arr[index];
	}

	~test() {
		delete[] arr;
	}
};

class testArray {
private:
	test * arr;
	int x;
	int y;
public:
	testArray(int _x, int _y){
		arr = new test[_y];

		for (int i = 0; i < _y; i++) {
			arr[i] = *(new test(5));
		}
	}

	test& operator[](int index) {
		return arr[index];
	}

	~testArray() {
		delete[] arr;
	}
};

#endif // !__TEST_H__

