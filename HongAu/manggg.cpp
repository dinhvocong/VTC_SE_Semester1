#include <stdio.h>
int s;
int n;
void nhap(int n, int arr[])
{
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i +1);
        scanf("%d", &arr[i]);
    }
}
void xuat (int n, int arr[])
{
    printf("Xuat\n");
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d ", i, arr[i]);
    }
}
void sapXep (int n, int arr[])
{
    printf("sapxep\n");
    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int tam;
                tam = arr[j];
                arr[j] = arr[j +1];
                arr[j + 1] = tam;
            }
        }
    }
}

void timKiem(int n, int arr[])
{
    int found;
    int m;
    printf("Nhap phan tu muon tim kiem ");
    scanf("%d", &m);
    for(int i = 0; i < n; i++){
        if(m == arr[i])
        {
            found = 1;
        }
    }
    if(found == 1)
    {
        printf("co\n");
    }
    else
    {
        printf("no");
    }
}
void max(int n, int arr[])
{
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("max = %d", max);
}
void sua (int n, int arr[])
{

    int s;
    int found =0;

    printf("nhap vao so muon sua: ");
    scanf("%d", &s);
    for(int i = 0; i < n; i++)
    {
        if(s == arr[i])
        {
            printf("sua thanh");
            scanf("%d", &arr[i]);
            found = 1;
        }
    }
    if(found == 1)
    {
        printf("da sua");
    } else{
        printf("k co phan tu sua");
    }
}
void xoa ( int arr[])
{
    int x;
    printf("nhap so muon xoa: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            for(int j = i; j < n; j++)
            {
                arr[j] = arr[j +1]; 
            }
            n = n - 1;
        }
        
    }
    
}
int main()
{
    
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    nhap(n, arr);
    xuat(n, arr);
    sapXep(n, arr);
    xuat(n, arr);
    // timKiem(n, arr);
    // max(n, arr);
    // sua(n, arr);
    // xuat(n, arr);
    xoa( arr);
    printf("Xuat\n");
    printf("%d\n", n);
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d ", i, arr[i]);
    }
    return 0;
}