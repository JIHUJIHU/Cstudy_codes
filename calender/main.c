#include <stdio.h>
#include <time.h>

int lastDayOfMonth(int year, int month){
  switch(month){
    case 1 : case 3: case 5: case 7: case 8: case 10: case 12:
      return 31;
    case 4: case 6: case 9: case 11:
      return 30;
    case 2:
      if((year%4==0&&year%100!=0)|| year%400==0)
        return 29;
      else
        return 28;
  }
}

int weekDayOfFirstDay(int year, int month){
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  timeinfo->tm_year = year-1900 ;
  timeinfo->tm_mon = month -1;
  timeinfo->tm_mday = 1;

  /* call mktime: timeinfo->tm_wday will be set */
  mktime ( timeinfo );

  return timeinfo->tm_wday;
}

//1일의 요일과 마지막 날을 넘겨받아 달력을 출력합니다.
void showCalendar(int week, int last)
{
	int day=1;
  int i;

	printf("Sun Mon Tue Wed Thu Fri Sat \n");
  for(i=0;i<week;i++)
    printf("    ");
  for(day=1;day<=last;day++,i++){
    printf("%3d ",day);
    if((i+1)%7==0)
      printf("\n");
  }
}

int main ()
{
  int year, month;
  int lastDay, weekOfFirstDay;

  scanf ("%d",&year);
  scanf ("%d",&month);

	lastDay = lastDayOfMonth(year, month);
	weekOfFirstDay = weekDayOfFirstDay(year, month);
	showCalendar(weekOfFirstDay, lastDay);

  return 0;
}
