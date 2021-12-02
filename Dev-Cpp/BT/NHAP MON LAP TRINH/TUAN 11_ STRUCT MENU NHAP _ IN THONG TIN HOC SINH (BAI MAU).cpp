#include <stdio.h>
#include <conio.h>
#include <windows.h>

typedef struct Student
{
	char FullName[21];
	int Age;
	double Grade;
};

int N = 0; 

void AddStudent(Student st[]);
void PrintStudent(Student st[]);
void SortStudent(Student st[]);
int FindStudent(Student st[]);
int Menu(int &choice);

int main()
{
	int choice;
	Student st[100]; //Khai báo mang chua toi da 100 sv
	do
	{
		system("CLS");
		Menu(choice);
		switch (choice)
		{
			case 1: AddStudent(st); break;
			case 2: PrintStudent(st); break;
			case 3: SortStudent(st);
			PrintStudent(st); break;
			case 4:
			{
				int pos = FindStudent(st);
				if (pos >= 0)
				printf("Tim thay sv tai vi tri %d", pos + 1);
				else printf("Khong tim thay");
				break;
			}
			case 0: break;
			default: printf("Chon sai chuc nang!!!"); break;
		}
		getch();
	}
	while (choice != 0);
}

int Menu(int &choice)
{
	printf("=======MENU========\n");
	printf("1. Them sinh vien\n");
	printf("2. In danh sach sinh vien\n");
	printf("3. Sap xep diem tang dan\n");
	printf("4. Tim kiem sinh vien ten ho ten\n");
	printf("0. Thoat\n");
	printf("===================\n");
	printf("Chon chuc nang: ");
	scanf("%d", &choice);
}

void AddStudent(Student st[])
{
	fflush(stdin);
	printf("Nhap ho va ten: ");
	scanf("%[^\n]", &(st[N].FullName));
	printf("Nhap tuoi: ");
	scanf("%d", &st[N].Age);
	printf("Nhap diem trung binh: ");
	scanf("%lf", &st[N].Grade);
	N++;
}

void PrintStudent(Student st[])
{
	printf("Thong tin SV: ");
	for (int i = 0; i < N; i++)
	{
		printf("%25s, %3d, %.1lf\n", st[i].FullName, st[i].Age, st[i].Grade);
	}		
}

void SortStudent(Student st[])
{
	Student temp;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = N - 1; j > i; j--)
		{
			if (st[j].Grade < st[j - 1].Grade)		
			{
			temp = st[j];
			st[j] = st[j - 1];
			st[j - 1] = temp;
			}
		}
	}
}


int FindStudent(Student st[])
{
	char FullName[21];
	fflush(stdin);
	printf("Nhap ho ten sinh vien:");
	gets(FullName);
	for (int i = 0; i < N; i++)
	{
		if (strcmp(FullName, st[i].FullName) == 0)
		{
			return i;
		}
	}
	return -1;
}

