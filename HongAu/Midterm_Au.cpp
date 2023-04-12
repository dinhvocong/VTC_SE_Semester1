#include <stdio.h>
#include <string.h>
#define Max 10
struct Stack{
	int Top;
	struct nhanVien{
		char maNV[5];
		char firstName[20];
		char lastName[20];
		char place[20];
		int salary;
		struct birthDay{
			int ngay, thang, nam;
		}BD;
		
	} arr[Max];
};
void Init(Stack &S){
	S.Top = 0;
}

int Isempty(Stack S){
	return (S.Top == 0);
}
int Isfull(Stack S){
	return (S.Top == Max);
}
void Push(Stack &S){
	if(!Isfull(S)){
		fflush(stdin);
		printf("Ma NV: ");
		gets(S.arr[S.Top].maNV);
		printf("First Name: ");
		gets(S.arr[S.Top].firstName);
		printf("Last Name: ");
		gets(S.arr[S.Top].lastName);
		printf("Place: ");
		gets(S.arr[S.Top].place);
		printf("Salary: ");
		scanf("%d",&S.arr[S.Top].salary);
		printf("Day of Bitrthday: ");
		scanf("%d",&S.arr[S.Top].BD.ngay);
		printf("Month of Birthday: ");
		scanf("%d",&S.arr[S.Top].BD.thang);
		printf("Year of Birthday: ");
		scanf("%d",&S.arr[S.Top].BD.nam);
		
	}
	S.Top ++;	
}
void inPut(Stack &S) {
	int n;
	do {
		printf("Nhap so luong NV (<%d): ", Max);
		scanf("%d", &n);
	} while (n > Max || n < 1);
	for (int i = 0; i < n; i++) {
		printf("\nNhap NV thu %d.\n ", i+1);
        Push(S);
	}
}
void outPut(Stack S){
	printf("--- List Staff --- \n");
	printf("%s %s %s %s %s %s\n","MaNV","FirstName","LastName","Place","BirthDay","Salary");
	for(int i = S.Top -1; i>= 0; i--){
		printf("%s %s %s %s %d %d %d %d",S.arr[i].maNV,S.arr[i].firstName,S.arr[i].lastName,S.arr[i].place,
		S.arr[i].BD.ngay,S.arr[i].BD.thang,S.arr[i].BD.nam,S.arr[i].salary);
	}
}


int main(){
	Stack S;
	Init(S);
	inPut(S);
	outPut(S);
	return 0;
}