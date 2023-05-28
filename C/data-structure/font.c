#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    char stack[MAX_SIZE];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

void push(Stack *s, char element) {
    s->stack[++s->top] = element;
}

char pop(Stack *s) {
    return s->stack[s->top--];
}

bool isValidCode() {
    Stack s;
    initStack(&s);

    char c;
    while (scanf("%c", &c) != EOF) {
        if (c == '[' || c == '(' || c == '{') {
            push(&s, c);
        } else if (c == ']' || c == ')' || c == '}') {
            if (s.top == -1 || ((c == ']' && pop(&s) != '[') || (c == ')' && pop(&s) != '(') || (c == '}' && pop(&s) != '{'))) {
                return false;
            }
        }
    }

    return s.top == -1;
}

int main() {
    printf("%s\n", isValidCode() ? "Success" : "Fail");
    return 0;
}