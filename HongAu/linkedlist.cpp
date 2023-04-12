#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// KHAI BAO
struct node // khai bao node
{
    int data; // data trong note
    struct node  * next; // con tro lien ket node
};
typedef struct node NODE;

struct list // khai bao cau truc cua danh sach lien ket
{
    NODE *pHead;
    NODE *pTail;
};
typedef struct list LIST;
// KHOI TAO
void KhoiTao(LIST &L) // khoi tao dach sach lien ket don 
{
    L.pHead = NULL;
    L.pTail = NULL;
};

NODE *KhoiTaoNode(int x) // khoi tao node
{
    NODE *p = new NODE; // cap phat vung nho cho node p
    p -> data = x; // truyen gia tri x vao cho data
    p -> next = NULL; // dau tien khai bao node thi node do chua co lien ket den node nao het => con tro cua no se tro den NULL
    return p; // tra ve node p vua khoi tao
}

void themVaoDau(LIST &L, NODE * p) // ham them node p vao dau danh sach lien ket
{
    if(L.pHead = NULL) // danh sach dang rong
    {
        L.pHead = L.pTail = p; // node dau cung chinh la node cuoi va la p
    }
    else
    {
        p -> next = L.pHead; // cho con tro cua node can them vao node p lien ket den node dau - pHead
        L.pHead = p; // cap nhat lai pHead la p
    }
}
void themVaoCuoi(LIST &L, NODE * p)
{
    if (L.pHead = NULL)
    {
        L.pHead =  L.pTail = p;
    }
    else
    {
        L.pTail -> next = p; // cho con tro cua pTail lien ket voi node p
        L.pTail = p;

    }
}
void xuat(LIST L)
{
    for(NODE *k = L.pHead; k != NULL; k = k ->next)
    {
        printf("%d\n", k ->data);
    }
}
int main() {
    LIST L;
    KhoiTao(L);
    int n;
    printf("Nhap so n:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        int x;
        printf("Nhap n %d: ", i);
        scanf("%d", &x);
        NODE * p = KhoiTaoNode(x); // khoi tao 1 node so nguyen
        themVaoDau(L, p); // them node p vao dau danh sach lien ket don
    }
    printf("Danh sach\n");
    xuat(L);
    return 0;
}