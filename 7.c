#include <stdio.h>

struct student {
    int id;
    float marks;
};

void display(struct student s) {
    printf("%d %.2f", s.id, s.marks);
}

int main() {
    struct student s1 = {1, 90.5};
    display(s1);
    return 0;
}
