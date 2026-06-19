#include <stdio.h>
int main()

{
int score;
printf("Enter your exam score: ");
scanf("%d"
, &score);
if (score >= 40) {
printf("Pass\n");
} else {
printf("Fail\n");
}
return 0;

}