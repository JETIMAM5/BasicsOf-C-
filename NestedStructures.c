#include <stdio.h>
#include <stdlib.h>

struct CandidateInfo
{
  char* name;
  char* lastname;
  int age;
  int note;
  float average;
};
struct Interview
{
char* interviewer;
char* interviewDate;
struct CandidateInfo candidate;
int interviewNote;
};
int main()
{
    struct Interview y;
    y.interviewer="Ahmet Veli";
    y.interviewDate="25.05.2009";
    y.interviewNote=89;

    y.candidate.name="Ali";
    y.candidate.lastname="Findik";
    y.candidate.age=33;
    y.candidate.note=80;
    y.candidate.average=2.69;

    printf("Interviewer    =%s\n",y.interviewer);
    printf("Interview Date =%s\n",y.interviewDate);
    printf("Interview Note =%d\n\n\n",y.interviewNote);

    printf("Candidate Name     =%s\n",y.candidate.name);
    printf("Interview LastName =%s\n",y.candidate.lastname);
    printf("Candidate Age      =%d\n",y.candidate.age);
    printf("Candidate Note     =%d\n",y.candidate.note);
    printf("Candidate Average  =%.2f\n",y.candidate.average);


    return 0;
}
