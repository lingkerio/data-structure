#define Size 100

struct stack {
    int arr[Size];
    int top = 0;
};

bool empty(stack* a)
{
    if (a->top == 0)
        return true;
    return false;
}

bool full(stack* a)
{
    if (a->top == Size-1)
        return true;
    return false;
}

bool push(stack* a, int value)
{
    if (full(a))
        return false;
    a->arr[++a->top] = value;
    return true;
}

int top(stack* a)
{
    if (empty(a))
        return 0;
    return a->arr[a->top];
}

int pop(stack* a)
{
    if (empty(a))
        return 0;
    int temp = top(a);
    a->top--;
    return temp;
}