
// head gaurds

#ifndef EMP_H_
#define EMP_H_

#pragma pack(1)
struct emp
{
	int empno;
	char name[10];
	float sal;
};
void AcceptEmpInfo(struct emp *e);
void PrintEmpInfo(const struct emp *e);
void WriteDataIntoBinaryFile();
void ReadDataFromBinaryFile();
int MenuChoice();


#endif /* EMP_H_ */
/*
The conditional compilation directives are
#if
#else
#elif
#ifdef
#ifndef
#endif
#undef
*/



