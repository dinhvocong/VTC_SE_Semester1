#include <stdlib.h>
#include <stdio.h>
// khoi tao mang va cac bien trong queue
int queue[10], n = 10, fornt = -1, rear = - 1;
// ham them 1 phan tu vao trong quere
void push() {
    // khoi tao bien val va day no vao trong hang doi
    int val;
    // xet dieu kien neu hang doi day, neu day thi k them vao duoc
    if(rear == n - 1)
    printf("Hang doi day");
    // nguoc lai thi them vao
    else {
        if (fornt == - 1)
        fornt == 0;
        printf("Moi ban nhap han tu can them vao: ");
        scanf("%d", &val);
        // tang vi tri hien tai len 1
        rear++;
        // them phan tu vao vi tri hien tai rear
        queue[rear] = val;
    }
}
// ham xoa phan tu ra khoi queue
void pop (){
    // neu hang doi rong thi k the xoa
    if(fornt = -1 || fornt > rear)
    {
        printf("Khong the xoa vi k co phan tu nao");
    }
    // nguoc lai thi lay phan tu do ra va xoa khoi mang
    else
    {
        printf("Phan tu da bi xoa");
    }
}
int main() {
    return 0;
}