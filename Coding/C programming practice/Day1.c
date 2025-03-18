/*Question 1:Sam must complete 3 assignments by 10 PM, and he starts at X PM, with each assignment taking 1 hour. Given T test cases, for each starting time X, 
determine if he can finish on time. If he has enough hours left before the deadline (i.e., 10 - X ≥ 3), 
print "YES"; otherwise, print "NO". Constraints: 1 ≤ T ≤ 10 and 1 ≤ X ≤ 9.
*/
#include<stdio.h>
int main()
{
  int t;//No of test case
  scanf("%d",&t);
  int x[t];//X pm at which sam started to write assignments 
  for(int i = 0;i< t;i++)
  {
    scanf("%d",&x[i]);
    if(10-x[i] >= 3)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }
}
/*Question 2:In Mumbai, a new grading system evaluates schools based on their students' pass rates in a recent exam.
  For each test case, you are provided with the number of schools (X), the number of students in each school (Y), 
and the total number of students who passed (Z). Your task is to determine whether each school achieved an average pass rate of at least 70%. 
  If a school fails to meet this standard, calculate how many additional students would need to pass to reach the required threshold. 
  This evaluation provides valuable insight into improving academic performance and identifying underperforming schools*/
