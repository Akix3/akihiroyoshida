#include <stdio.h>
#include <string.h>

struct student
{
	char name[42];
	int class;
	int number;
	char sex[10];
	int birthday;
	int age;
	int grade;
};

int main(void)
{
	struct student jyunsei;

	strcpy(jyunsei.name, "Tanno Jyunsei");
	jyunsei.class = 52;
	jyunsei.number = 10;
	strcpy(jyunsei.sex, "male");
	jyunsei.birthday = 20090307;
	jyunsei.age = 10;
	jyunsei.grade = 1;

	printf("名前　%s\n", jyunsei.name);
	printf("純聖の算数の成績＝%d\n", jyunsei.grade);

	return (0);
}
