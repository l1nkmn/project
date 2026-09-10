template <typename T>
class Stack {
private:
	T* data;
	int index;
	int size;
public:
	Stack() {
		data = nullptr;
		index = -1;
		size = 0;
	}
	Stack(int size) {
		this->size = size;
		index = -1;
		data = new T[size];
	}
	Stack(const Stack& other) {
		size = other.size;
		index = other.index;
		data = new T[size];
		for (int i = 0; i < index; ++i) {
			data[i] = other.data[i];
		}
	}
	Stack(const T* other, int size) {
		this->size = size;
		index = size - 1;
		data = new T[size];
		for (int i = 0; i < size; ++i) {
			data[i] = other[i];
		}
	}

	T pop() {
		index--;
		return data[index + 1];
	}

	bool isEmpty() {
		return !(index < 0);
	}
};