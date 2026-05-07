#include<stdio.h>
/*int main() {
    int side;
    printf("enter a side");
    scanf("%d",&side);
    float area=side*side;
    printf("area is %f",area);
    return 0;
}*/
/*
int main() {
    int radius=4;
    float area=2*3.142*radius*radius;
    printf("area is %.2f\n",area);
    return 0;
}*/
/* int main() {
    float a=5*2-2*3;
    printf("%f",a);
    return 0;
} */
/* int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%2==0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
    return 0;
} */
/* int main(){
    int x; int y=x;
    // printf("%d",8^8);
    printf("%d",y);
    return 0;
} */
/* int main(){
    int x;
    printf("enter a x:");
    scanf("%d",&x);
    printf("%d \n",x>9 && x<100);
    return 0;
} */
/* int main(){
    int x; int y;int z;
    printf("enter 3 numbers:");
    scanf("%d%d%d",&x,&y,&z);
    float average=(x+y+z)/3;
    printf("%.2f\n",average);
    return 0;
} */
/* int main(){
   int marks;
   printf("enter the marks(0-100):");
   scanf("%d",&marks);
   if(marks>100){
    printf("enter a valid marks less than 100");
   }else if(marks<30){
    printf("fail");
   }else{
    printf("pass");
   }
   return 0;
} */
/* int main(){
    char ch;
    printf("enter a characher:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("lower case\n");
    }else if (ch>='A' && ch<='Z'){
        printf("upper case\n");
    }else{
        printf("nothing\n");
    }
    return 0;
} */
/* int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a>=1){
        printf("natural number");
    }else{
        printf("whole nuber");
    }
    return 0;
} */
/* int main(){
   
    for(int i=0;i<=10;i++){
        printf("%d\n",i);
    }
    return 0;
} */
/*  int main(){
    int n;
    printf("entyer a value of n");
    scanf("%d",n);
    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}  */
/* int main(){
    int a,b,choice;
    printf("enter one number");
    scanf("%d%d",&a,&b);
    printf("enter the choice(1-4)");
    scanf("%d",&choice);
    
   
    switch(choice){
        case 1:
        printf("sum is %d",a+b);
        break;
        case 2:
        printf("subtract is %d",a-b);
        break;
        case 3:
        printf("multipy is %d",a*b);
        break;
        case 4:
        printf("division is %d",a/b);
        break;
        case 5:
        printf("modulus is %d",a%b);
        break;
        default:
        printf("enter the correct number");
        scanf("%d",choice);
    }
}
return 0;

} */
/* int main(){
    int a;
   
    for(int i=0;i<=5;i++){
        printf("enetr a number");
        scanf("%d",&a);
    }
    return 0;
} */
/* int main(){
    int n;
    printf("enter a value of n:\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d\n",i);

    }
    return 0;
} */
/* int main(){
    printf("wllo");
    return 0;
} */
//sum of 1st n natural numbers
/* int main(){
    int n;
    printf("enter a value n:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
} */
/* int main(){
    int n;
    printf("enter a value n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
} */
/* int main(){
    int n;
    printf("enter a value n:");
    scanf("%d",&n);
    for(int i=n;i<=100;i+=n){
        printf("%d\n",i);
    }
} */
/* int main(){
    int n;
    printf("enter a value n:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
    return 0;
} */
/* int main(){
    for(int i=0;i<=10;i++){
       
        if(i==6){
            continue;
        }
         printf("%d\n",i);
    }
} */
//sum of all odd from 5 to 50
/* int main(){
    int sum_odd=0;
    for(int i=5;i<=50;i=i+2){
        sum_odd+=i;
    }
    printf("%d",sum_odd);
    return 0;
} */
/* int main(){
    int n;
    printf("enter a value n:");
    scanf("%d",&n);
    float fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    printf("%f",fact);
    return 0;
} */
/* int main(){
       int n;
    printf("enter a value n:");
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        printf("%d\n",i);
    }
    return 0;
} */
/* void pri_hello();
void pri_good();
int main(){
    pri_hello();
    pri_good();
    return 0;
}
void pri_hello(){
    printf("helloo\n");
}
void pri_good(){
    printf("good byee");
} */
/* void namste();
void bonjour();
int main(){
    char cont;
    char i,b;
    printf("Enter your contry");
    scanf("%c",cont);
    if(cont==i){
        namste();
    }else{
        bonjour();
    }
    return 0;
}
void namste(){
    printf("namaste");
}
void bonjour(){
    printf("bonjour");
} */
int main(){
    int arr[3];
    int gst;
    printf("enter the gst");
    scanf("%d",&gst);
    printf("enter the rate of 1st item");
    scanf("%d",&arr[1]);
    printf("enter the rate of 2nd item");
    scanf("%d",&arr[2]);
    printf("enter the rate of 3rd item");
    scanf("%d",&arr[3]);
    int final_cost=arr[1]+arr[2]+arr[3];
    printf("final cose with gst is%d",final_cost+gst);
    return 0;
}