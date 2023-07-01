 public class ArrayList<T> {
        private T[] array;
        private int size;
        private int indexOfLastElement;

        public ArrayList(int sizeOfArrayList) {
            this.size = sizeOfArrayList;
            //array =
        }

        public ArrayList() {
            this(10);
        }

        public void addElement(T element) {
            if (size == array.length) {
                reSize(2 * array.length);
                size = array.length;
            }
            array[indexOfLastElement + 1] = element;
        }

        public void setElement(int index, T element) {
            if (index < 0 || index >= size) {
                throw new IndexOutOfBoundsException();
            }
            array[index] = element;
        }

        private void reSize(int newSize) {
            T[] newArray = (T[]) new Object[newSize];
            if (size >= 0)
                System.arraycopy(array, 0, newArray, 0, size);
            array = newArray;
        }

        public T getElement(int index) {
            if (index < 0 || index >= size) {
                throw new IndexOutOfBoundsException();
            }
            return array[index];
        }

        public void removeElement(int index) {
            if (index < 0 || index >= size) {
                throw new IndexOutOfBoundsException();
            }
            for (int i = index; i < size - 1; ++i) {
                array[i] = array[i + 1];
            }
            array[size - 1] = null;
            indexOfLastElement--;
            if (indexOfLastElement <= array.length / 4) {
                reSize(array.length / 2);
                size = array.length;
            }
        }
        public int length() {
            return size;
        }
    }

