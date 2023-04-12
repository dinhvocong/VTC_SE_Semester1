#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct phone
{
    int id;
    char phoneName[30];
    float phonePrice;
};
typedef struct phone PHONE;

struct node
{
    PHONE data;
    node *pNext;
};
typedef struct node NODE;

struct list
{
    NODE *pHead;
    NODE *pTail;
};
typedef struct list LIST;

void khoiTao (LIST &L)
{
    L.pHead = NULL;
    L.pTail = NULL;
};

NODE *khoiTaoNODE(PHONE x) 
{
    NODE *p; 
    p = new NODE; // cap phat vung nho cho NODE p
    p -> data = x; // truyen gia tri x vao cho data
    p -> pNext = NULL; // dau tien khai bao node thi node do chua co lien ket den node nao het nên con tro tro den null
    return p;
}

void themVaoDau (LIST &L, NODE *p) // hàm thêm node p vào đầu danh sách
{
    if(L.pHead == NULL)
    {
        L.pHead = L.pTail = p; // node đầu cũng chính là node cuối cũng chính là node p
    }
    else
    {
        p->pNext = L.pHead; // cho con tro cua node can them lien ket den node dau
        L.pHead = p; // cap nhat lai pHead cho p vua moi them vao
    }
}

void themVaoCuoi (LIST &L, NODE *p)
{
    if(L.pHead == NULL)
    {
        L.pHead = L.pTail = p; // node đầu cũng chính là node cuối cũng chính là node p
    }
    else
    {
        L.pTail->pNext = p; // cho con trỏ pTail liên kết với node p
        L.pTail = p; // cập nhật lại node cuối là pTail
    }
}

int main()
{
    return 0;
}