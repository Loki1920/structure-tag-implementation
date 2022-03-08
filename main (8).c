/* implementation of structure tag */

#include<stdio.h>

struct employee{
char *name;
int age;
int salary;
};
int manager()
{
  struct employee manager;
  manager.age = 40;
  if(manager.age>30)
    manager.salary = 65000;
  else
    manager.salary = 55000;
  return manager.salary;
    
}
int main(){
  struct employee emp1;
  struct employee emp2;

  printf("enter salary of emp1:");
  scanf("%d",&emp1.salary);
  printf("enter the salary of emp2:");
  scanf("%d",&emp2.salary);
  printf("salary of emp1 :%d\n",emp1.salary);
  printf("salary of emp2 :%d\n",emp2.salary);
  printf("salary of manager :%d\n",manager());
}
