#include <stdio.h>
#include <string.h>
#define MAX 10

struct Stack
{
    int Top;
    struct staff {
        char maNv[5];
        char firstName[20];
        char lastName[20];
        char place[20];
        struct birthDay {
            int day, mounth, year;
        } sBirthDay;
        int salary;
    } aStaff[MAX];
};
void Init (Stack &S)
{	
S.Top = 0;
}	

int Isempty(Stack S)
{	
return (S.Top == 0);	
}	
int Isfull(Stack S)
{	
return (S.Top == MAX);
}	
void push (Stack &S)
{
    if(!Isfull(S))
    {
        fflush(stdin);
        printf("maNv: ");
        gets(S.aStaff[S.Top].maNv);
        printf("firstName: ");
        gets(S.aStaff[S.Top].firstName);
        printf("lastName: ");
        gets(S.aStaff[S.Top].lastName);
        printf("place: ");
        gets(S.aStaff[S.Top].place);
        printf("Day of Birthday: ");
        scanf("%d", &S.aStaff[S.Top].sBirthDay.day);
        printf("Mounth of Birthday: ");
        scanf("%d", &S.aStaff[S.Top].sBirthDay.mounth);
        printf("Year of Birthday: ");
        scanf("%d", &S.aStaff[S.Top].sBirthDay.year);
        printf("salary: ");
        scanf("%d", &S.aStaff[S.Top].salary);

    }
    S.Top++;
}
void inPut(Stack &S)
{
    int n;
    do {
        printf("So luong nhan vien can nhap(<%d)", MAX);
        scanf("%d", &n);
    } while(n > MAX || n < 1);
        for(int i = 0; i < n; i++)
        {
            printf("Nhap nhan vien thu %d: \n", i+ 1);
            push(S);
        }
}
void outPut (Stack &S)
{
    printf("LIST STAFF\n");
    printf("%s %20s %20s %20s %20s %20s\n","maNv", "firstName", "lastName", "place", "birthDay","salary");
    for(int i = S.Top - 1; i >= 0; i--)
    {
        printf("%s %20s %20s %20s %16d/%d/%d %20d\n", S.aStaff[i].maNv, S.aStaff[i].firstName, S.aStaff[i].lastName,
             S.aStaff[i].place, S.aStaff[i].sBirthDay.day, S.aStaff[i].sBirthDay.mounth, S.aStaff[i].sBirthDay.year, S.aStaff[i].salary);
    }
}

int main(){
    Stack S;
    Init(S);
    Isempty(S);
    Isfull(S);
    inPut(S);
    outPut(S);
	return 0;
}