#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 10    // so phan tu toi da cua Stack
typedef int item; // kieu du lieu cua Stack
struct Stack
{
    int Top;        // dinh Top
    item Data[MAX]; // Mang cua cac phan tu
};
void init(Stack &S) // khoi tao Stack rong
{
    S.Top = 0;
}

int isEmpty(Stack S) // kiem tra Stack rong
{
    return (S.Top == 0);
}

int isFull(Stack S) // kiem tra Stack day
{
    return (S.Top = MAX);
}
void Push(Stack &S, item x) // them phan tu vao Stack
{
    if (!isFull(S))
    {
        S.Data[S.Top] = x;
        S.Top++;
    }
}
int Peak(Stack S) // Lay phan tu o dau Stack nhung khong xoa
{
    return S.Data[S.Top - 1];
}
int Pop(Stack &S) // Loai bo phan tu khoi Stack
{
    if (!isEmpty(S))
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
        printf("Nhap so phan tu cua Stack (<%d) :", MAX);
        scanf("%d", &n);
    } while (n > MAX || n < 1);
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
        printf("%d   ", S.Data[i]);
    printf("\n");
}

int main()
{
    Stack S;
    init(S);
    Input(S);
    Output(S);
    int lua_chon;
    printf("Moi ban chon phep toan voi DS LKD:");
    printf("\n1: Kiem tra Stack rong");
    printf("\n2: Kiem tra Stack day");
    printf("\n3: Them phan tu vao Stack");
    printf("\n4: Xoa phan tu trong Stack");
    printf("\n5: Xuat Stack");
    printf("\n6: Thoat");
    do
    {
        printf("\nBan chon: ");
        scanf("%d", &lua_chon);
        switch (lua_chon)
        {
        case 1:
        {
            if (isEmpty(S))

                    break;
        }
        case 2:
        {
            if (isFull(S))

                    break;
        }
        case 3:
        {
            item x;
            printf("Nhap phan tu can chen vao DS: ");
            scanf("%d", &x);
            Push(S, x);
            break;
        }
        case 4:
        {
            Pop(S);
            break;
        }
        case 5:
        {
            Output(S);
            break;
        }
        case 6:
            break;
        }
    } while (lua_chon != 6);
    return 0;
}
