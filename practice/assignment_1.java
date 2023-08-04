import java.util.ArrayList;
import java.util.List;

public class PowerOfTwoMaxHeap<T extends Comparable<T>> {
    private List<T> heap;
    private int numChildrenExp;

    public PowerOfTwoMaxHeap(int numChildrenExp) {
        if (numChildrenExp < 1) {
            throw new IllegalArgumentException("numChildrenExp must be greater than or equal to 1");
        }
        this.heap = new ArrayList<>();
        this.numChildrenExp = numChildrenExp;
    }

    public void insert(T element) {
        heap.add(element);
        siftUp(heap.size() - 1);
    }

    public T popMax() {
        if (isEmpty()) {
            throw new IllegalStateException("Heap is empty");
        }

        T max = heap.get(0);
        int lastIdx = heap.size() - 1;
        heap.set(0, heap.get(lastIdx));
        heap.remove(lastIdx);

        siftDown(0);

        return max;
    }

    public boolean isEmpty() {
        return heap.isEmpty();
    }

    private void siftUp(int index) {
        T element = heap.get(index);

        while (index > 0) {
            int parentIdx = getParentIndex(index);
            T parent = heap.get(parentIdx);

            if (element.compareTo(parent) <= 0) {
                break;
            }

            heap.set(index, parent);
            index = parentIdx;
        }

        heap.set(index, element);
    }

    private void siftDown(int index) {
        int size = heap.size();
        T element = heap.get(index);

        while (index < size) {
            int maxChildIdx = getMaxChildIdx(index);

            if (maxChildIdx == -1 || element.compareTo(heap.get(maxChildIdx)) >= 0) {
                break;
            }

            heap.set(index, heap.get(maxChildIdx));
            index = maxChildIdx;
        }

        heap.set(index, element);
    }

    private int getMaxChildIdx(int index) {
        int startChildIdx = getChildStartIndex(index);
        int endChildIdx = Math.min(startChildIdx + (1 << numChildrenExp) - 1, heap.size() - 1);

        if (startChildIdx > endChildIdx) {
            return -1; // No child exists
        }

        int maxChildIdx = startChildIdx;
        T maxChild = heap.get(startChildIdx);

        for (int i = startChildIdx + 1; i <= endChildIdx; i++) {
            T child = heap.get(i);
            if (child.compareTo(maxChild) > 0) {
                maxChildIdx = i;
                maxChild = child;
            }
        }

        return maxChildIdx;
    }

    private int getParentIndex(int index) {
        return (index - 1) >> numChildrenExp;
    }

    private int getChildStartIndex(int index) {
        return (index << numChildrenExp) + 1;
    }
}
