#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define Max = 10 // so phan tu toi da cua Stack
typedef int Rong; // kieu du lieu cua Stack

struct Stack
{
    int Top;        // dinh Top
    Rong Data[Max]; // Mang cua cac phan tu
};

void Init(Stack &S) // khoi tao Stack rong
{
    S.Top = 0; // Stack rong khi Top = 0
};

int Isempty(Stack S) // kiem tra Stack rong
{
    return (S.Top == 0);
}

int Isfull(Stack S) // kiem tra Stack day
{
    return (S.Top == Max);
}

void Push(Stack &S, Rong x) // them phan tu vao Stack
{
    if (!Isfull(S))
    {
        S.Data[S.Top] = x; // Gan du lieu
        S.Top++;           // Tang Top len 1
    }
}

int Peak(Stack S) // Lay phan tu o dau Stack nhung khong xoa
{
    return S.Data[S.Top - 1]; // Lay du lieu tai Top
}

int Pop(Stack &S) // Loai bo phan tu khoi Stack
{
    if (!Isempty(S))
    {
        S.Top--;              // Giam Top
        return S.Data[S.Top]; // Lay du lieu tai Top
    }
}

void Input(Stack &S)
{
    int n;
    item x;
    do
    {
        printf("Nhap so phan tu cua Stack (<%d) :", Max);
        scanf("%d", &n);

    } while (n > Max || n < 1);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d : ", i + 1);
        scanf("%d", &x);
        Push(S, x);
    }
}

void Output(Stack S)
{
    for (int i = S.Top - 1; i >= 0; i--)
        printf("%d ", S.Data[i]);
    printf("\n");
}
int main()
{
    
}