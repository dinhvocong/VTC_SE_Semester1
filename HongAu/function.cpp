#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct phone // 
{
    int id;
    char phoneName[25];
    float phonePrice;
};
typedef struct phone PHONE;

// KHAI BAO
struct node // khai bao node
{
    PHONE data; // data trong node
    node *pNext; // con tro lien ket node
};
typedef struct node NODE;

struct list // khai bao cau truc lien ket
{
    NODE *pHead;
    NODE *pTail;
};
typedef struct list LIST;

// KHOI TAO
void khoiTao(LIST &L) // khoi tao dach sach lien ket don 
{
    L.pHead = NULL;
    L.pTail = NULL;
};
int kiemTraRong(LIST L)
{ 
    if (L.pHead == NULL)
    {
        return 1;
    }
    return 0; 
}

NODE *khoiTaoNode(PHONE x) // khoi tao node
{
    NODE *p = new NODE; // cap phat vung nho cho node p
    p -> data = x; // truyen gia tri x vao cho data
    p -> pNext = NULL; // dau tien khai bao node thi node do chua co lien ket den node nao het => con tro cua no se tro den NULL
    return p; // tra ve node p vua khoi tao
};

void themVaoDau(LIST &L, NODE * p) // ham them node p vao dau danh sach lien ket
{
    if(L.pHead = NULL) // danh sach dang rong
    {
        L.pHead = L.pTail = p; // node dau cung chinh la node cuoi va la p
    }
    else
    {
        p -> pNext = L.pHead; // cho con tro cua node can them vao node p lien ket den node dau - pHead
        L.pHead = p; // cap nhat lai pHead la p
    }
};

void themVaoCuoi(LIST &L, NODE * p)
{
    if (L.pHead = NULL)
    {
        L.pHead =  L.pTail = p;
    }
    else
    {
        L.pTail -> pNext = p; // cho con tro cua pTail lien ket voi node p
        L.pTail = p;

    }
};
void nhap(LIST &L, int n)
{
    for(int i = 0; i < n; i++)
    {
        PHONE x;
        printf("Nhap dien thoai %d\n", i +1);
        printf("id: ");
        scanf("%d", &x.id);
        printf("phoneName: ");
        fflush(stdin);
        gets(x.phoneName);
        printf("phonePrice: ");
        scanf("%f", &x.phonePrice);
        NODE *p = new NODE;
        p = khoiTaoNode(x);
        themVaoCuoi(L, p);
    }
}



int main(){
    LIST L;
    int n;
    printf("So luong dien thoai muon nhap: ");
    scanf("%d", &n);
    khoiTao(L);
    nhap(L, n);
    return 0;
}