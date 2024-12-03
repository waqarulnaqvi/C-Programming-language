#include <stdio.h>//it is a pre processor command..
// c was developed by dennis richtie in 1972 in (at & t laboratories(American telephone and telegraph)
//computer is a very dumb machine computer can't understand anything without a program..
// c program backend structure:
//1.prepocessing bassically humare program ke commands ko remove kiya jata macross ko expand kiya jata jitta bhi #include ki file hai unke content ko utha kar ek file me save kar liya jaata..
// (.i )file me prepocess output hota yani step 1 ka output..
//2.compilation  assembly level instruction .s file me save hota.
//3 assembly (.0)file me machine level language me aapke code ko save karti matlab binary me
// 4.linking (final phase) yeah saari ki saari .o file ko sil kar ek executable banna deta hai.. jo is case me (exe)file hai
// linkng  bhi do tarha ki hoti hai static and dynamics linking..
int main(int argc, char const *argv[])//it is a special type of function the will start from here..
{
    int a ,b;
    printf("Enter number 1: \n");//iska matlab print kar do jo bhi likha hua hai..
    scanf("%d",&a); //& address of operator hota hai..
    // scanf help karta hai a ki value ko user se lene me..
    printf("Enter number 2: \n");
    scanf("%d",&b);
       printf("Addition of a and b is: %d\n",a+b); 
    return 0;
}
