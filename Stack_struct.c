 #include <iostream>

using namespace std;

#define NMAX 100
struct stack {
    float elem[NMAX];
    int top;
};

void init(struct stack *stk) {
    stk->top = 0;
}

void push(struct stack *stk, float f) {
    if(stk->top < NMAX) {
        stk->elem[stk->top] = f;
        stk->top++;
    } else
        cout << "Стек полон, количество элементов: " << stk->top << endl;
}

float pop(struct stack *stk) {
    float elem;
    if ((stk->top) > 0) {
        stk->top--;
        elem = stk->elem[stk->top];
        return(elem);
    } else {
        cout << "Стек пуст!" << endl;
        return(0);
    }
}

float stkTop(struct stack *stk) {
    if((stk->top) > 0) {
        return( stk->elem[stk->top-1]);
    } else {
        cout << "Стек пуст!" << endl;
        return(0);
    }
}

int gettop(struct stack *stk) {
    return(stk->top);
}

int isempty(struct stack *stk) {
    if ((stk->top) == 0) return(1);
    else return(0);
}

void stkPrint(struct stack *stk) {
    int i;
    i = stk->top;
    if (isempty(stk) == 1) return;
    do {
        i--;
        cout << stk->elem[i] << endl;
    }
    while(i > 0);
}

int main() {
    struct stack *stk;
    int i, n;
    float elem;
    stk = (struct stack*)malloc(sizeof(struct stack));
    init(stk);
    cout << "Введите количество элементов в стеке: " << endl;
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Введите элемент:" << i << endl;
        cin >> elem;
        push(stk, elem);
    }
    cout << "В стеке " << gettop(stk) << " элементов" << endl;
    stkPrint(stk);
    cout << "Верхний элемент " << stkTop(stk) << endl;
    do {
        cout << "Извлекаем элемент " << pop(stk);
        cout << "в стеке осталось " << gettop(stk) << " элементов" << endl;
    } while (isempty(stk) == 0);

    getchar();
    getchar();
    return 0;
}
