#include<stdio.h>
#include<string.h>

struct bucket{
    char nickName[10];
    char favColor[10];
    char favDrink[10];
    char favFruit[10];
    char favDay[10];
    int wakeupTime;
} neighbor[12];

int main(void) {
int i,j;

neighbor[0].wakeupTime=500;             //neighbor 0:Instructor
strcpy(neighbor[0].nickName, "renny");
strcpy(neighbor[0].favColor, "red");
strcpy(neighbor[0].favDrink, "coffee");
strcpy(neighbor[0].favFruit, "mango");
strcpy(neighbor[0].favDay, "friday");

neighbor[1].wakeupTime=500;             //neighbor 1
strcpy(neighbor[1].nickName, "george");
strcpy(neighbor[1].favColor, "red");
strcpy(neighbor[1].favDrink, "coffee");
strcpy(neighbor[1].favFruit, "strawberry");
strcpy(neighbor[1].favDay, "monday");

neighbor[2].wakeupTime=600;
strcpy(neighbor[2].nickName, "Brandon"); ///brandon
strcpy(neighbor[2].favColor, "green");
strcpy(neighbor[2].favDrink, "soda");
strcpy(neighbor[2].favFruit, "oranges");
strcpy(neighbor[2].favDay, "friday");

neighbor[3].wakeupTime=800;
strcpy(neighbor[3].nickName, "Gabby"); ///Gabby
strcpy(neighbor[3].favColor, "blue");
strcpy(neighbor[3].favDrink, "soda");
strcpy(neighbor[3].favFruit, "bananas");
strcpy(neighbor[3].favDay, "friday");

neighbor[4].wakeupTime=400;
strcpy(neighbor[4].nickName, "david"); ///David Lanade
strcpy(neighbor[4].favColor, "black");
strcpy(neighbor[4].favDrink, "coke");
strcpy(neighbor[4].favFruit, "none");
strcpy(neighbor[4].favDay, "friday");

neighbor[5].wakeupTime=730;
strcpy(neighbor[5].nickName, "Amit");                       ///Amit
strcpy(neighbor[5].favColor, "blue");
strcpy(neighbor[5].favDrink, "coke");
strcpy(neighbor[5].favFruit, "Pineapple");
strcpy(neighbor[5].favDay, "Saturday");


for(i=0; i<6; i++) {
for(j=0; j<6; j++) {
if(neighbor[i].wakeupTime == neighbor[j].wakeupTime &&(i!=j)&&(i<j)) {
    printf("%s and %s are wakeup time compatible\n",neighbor[i].nickName,neighbor[j].nickName);
}

if(strcmp(neighbor[i].favColor, neighbor[j].favColor)==0 &&(i!=j)&&(i<j)) {
    printf("%s and %s are color compatible\n",neighbor[i].nickName,neighbor[j].nickName);
}

if(strcmp(neighbor[i].favDrink, neighbor[j].favDrink)==0 &&(i!=j) &&(i<j)) {
    printf("%s and %s are drink compatible\n",neighbor[i].nickName,neighbor[j].nickName);
}

if(strcmp(neighbor[i].favFruit, neighbor[j].favFruit)==0 &&(i!=j) && (i<j)) {
    printf("%s and %s are Fruit compatible\n",neighbor[i].nickName,neighbor[j].nickName);
}

if(strcmp(neighbor[i].favDay, neighbor[j].favDay)==0 && (i!=j) && (i<j)) {
    printf("%s and %s are Day compatible\n",neighbor[i].nickName,neighbor[j].nickName);
}

}
}
return 0;
}



