#include <stdio.h>
#include <math.h>
struct student 
{
    char name[9];
    int chinese;
    int math;
    int english;
    int total;
};
int main ()
{
    int n;
    scanf( "%d",&n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%8s %d %d %d",s[i].name,&s[i].chinese,&s[i].math,&s[i].english);
        s[i].total = s[i].chinese + s[i].math + s[i].english;
    }
    for (int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(fabs(s[i].total - s[j].total) <= 10&&
               fabs(s[i].chinese - s[j].chinese) <= 5&&
               fabs(s[i].math - s[j].math) <= 5&&
               fabs(s[i].english - s[j].english) <= 5)
            {
                printf("%s %s\n",s[i].name,s[j].name);
            }
        }
    }
    
  
    return 0;
}