#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student {
    int rollno;
    char name[10],department[10],course[10];
    int yearofjoining;
}student;
void check(student s1,student s2){
    if (strcmp (s1.department,s2.department)==0) printf ("assme dept");
    else printf ("diff dept");
}
int main (){
student s1;
s1.rollno=123;
strcpy(s1.course,"b.tech");
strcpy(s1.department,"cse ai");
strcpy(s1.name,"talash");
s1.yearofjoining=2013;
student s2;
s2.rollno=1234;
strcpy(s2.course,"b.tech");
strcpy(s2.department,"cse ai");
strcpy(s2.name,"uday");
s1.yearofjoining=2013;
check(s1,s2);
return 0;
}