#define Size 100

struct queue {
    int arr[Size];
    int head = -1;
    int tail = -1;
};

bool empty(queue* a)
{
    if (a->head == -1 && a->tail == -1)
        return true;
    return false;
}

bool full(queue* a)
{
    if (a->head == (a->tail + 1) % Size)
        return true;
    return false;
}

bool push(queue* a, int value)
{
    if (full(a))
        return false;
    if (empty(a)) {
        a->head = a->tail = 0;
        a->arr[a->head] = value;
        return true;
    }

    a->tail = (a->tail + 1) % Size;
    a->arr[a->tail] = value;
    return true;
}

int front(queue* a)
{
    if (empty(a))
        return 0;
    return a->arr[a->head];
}

int pop(queue* a)
{
    if (empty(a))
        return 0;
    int temp = front(a);
    a->head = (a->head + 1) % Size;
    return temp;
}
