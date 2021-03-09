#include<stdio.h>
struct _Student
{
    char name[100];
    float score;
    char grade;
    int marks[100];
};
typedef struct _Student Student;
struct _GradeBook
{
    char subject[100];
    int num_weights;
    float weights[100];
    int student_num;
    Student student[100];
};
typedef struct  _GradeBook GradeBook;
void input_gradebook(GradeBook *one)
{
    scanf("%s",&one->subject);
    scanf("%d",&one->num_weights);
    scanf("%d",&one->student_num);
    for(int i=0;i<one->num_weights;i++)
        scanf("%f",&one->weights[i]);
    for(int i=0;i<one->student_num;i++)
    {
        scanf("%s",one->student[i].name);
        for(int j=0;j<one->num_weights;j++)
            scanf("%d",&one->student[i].marks[j]);
    }
}
void input_gradebook_n(int n,GradeBook gb[n])
{
    for(int i=0;i<n;i++)
        input_gradebook(&gb[i]);
}
void compute_gradebook(GradeBook *one)
{
    for(int i=0;i<one->student_num;i++)
    {
        float W=0.0;
        one->student[i].score=0.0;
        for(int j=0;j<one->num_weights;j++)
        {
            one->student[i].score+=(one->student[i].marks[j]*one->weights[j]);
            W+=one->weights[j];
        }
        one->student[i].score=one->student[i].score/W;
        if(one->student[i].score>=0&&one->student[i].score<60)
            one->student[i].grade='F';
        else if(one->student[i].score>=60&&one->student[i].score<70)
            one->student[i].grade='D';
        else if(one->student[i].score>=70&&one->student[i].score<80)
            one->student[i].grade='C';
        else if(one->student[i].score>=80&&one->student[i].score<90)
            one->student[i].grade='B';
        else if(one->student[i].score>=90&&one->student[i].score<=100)
            one->student[i].grade='A';
        else
            one->student[i].grade='E';
        }
}
void compute_gradebook_n(int n,GradeBook gb[n])
{
    for(int i=0;i<n;i++)
        compute_gradebook(&gb[i]);
}
void output_gradebook(GradeBook *one)
{
    printf("%s\n",one->subject);
    for(int i=0;i<one->student_num;i++)
        printf("%s %.2f %c\n",one->student[i].name,one->student[i].score,one->student[i].grade);
}
void output_gradebook_n(int n,GradeBook gb[n])
{
    for(int i=0;i<n;i++)
        output_gradebook(&gb[i]);
}
int main()
{
    int n;
    GradeBook gb[n];
    scanf("%d",&n);
    input_gradebook_n(n,gb);
    compute_gradebook_n(n,gb);
    output_gradebook_n(n,gb);
    return 0;
}
