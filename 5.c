/*
Write a program to read from a file the following data - Roll no, name, marks of 3 subjects.

The data to be read into a structure array.

Compute the average of the class for each subject. Also grade the students according to their percentage as 
S grade - greater than for marks above 90% in that subject
A grade - greater than 80 - 89%
B grade - 70 - 79
C - 60 - 69
D - 50 - 59
E - 40 - 49
F - less than 40

Minimum 10 students data to be in the file.

Write the output  in the following format

Subject 1
Roll no Name Grade
Subject 2
Roll no Name Grade
Subject 3
Roll no Name Grade

*/


#include <stdio.h>
#define MAX 50
# define MAX_STUDENTS 10

struct student{

    int RollNo;
    float marks[3];
    char grade;
    char Name[MAX];
};

char grade(float marks){
    if (marks>90){
        return 'S';
    }
    else if (marks>80){
        return 'A';
    }
    else if (marks>70){
        return 'B';
    }
    else if (marks>60){
        return 'C';
    }
    else if (marks>50){
        return 'D';
    }
    else if (marks>40){
        return 'E';
    }
    else{
        return 'F';
    }

}


int main(){
    FILE *fp;
    fp=fopen("student.txt","r");
    struct student students[MAX_STUDENTS];
    float mark1=0,mark2=0,mark3=0;
    for (int i=0;i<MAX_STUDENTS;i++){
        fscanf(fp,"%d %s %f %f %f",&students[i].RollNo,students[i].Name,&students[i].marks[0],&students[i].marks[1],&students[i].marks[2]);
        students[i].grade=grade((students[i].marks[0]+students[i].marks[1]+students[i].marks[2])/3);
        printf("Roll No: %d  Name: %s Grade: %c\n",students[i].RollNo,students[i].Name,students[i].grade);

        mark1+=students[i].marks[0];
        mark2+=students[i].marks[1];
        mark3+=students[i].marks[2];

    }
    fclose(fp);
    printf("Average of subject 1: %f\n",mark1/MAX_STUDENTS);
    printf("Average of subject 2: %f\n",mark2/MAX_STUDENTS);
    printf("Average of subject 3: %f\n",mark3/MAX_STUDENTS);


    return 0;
}