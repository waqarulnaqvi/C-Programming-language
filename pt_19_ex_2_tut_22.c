//You can stop the infinite loop but pressing ctrl c on the terminal..
/*
Conversion factor:
1)km to miles
2)inches to foot
3)cms to inches
4)pound to kgs
5)inches to meters
*/

// my old version program;
//  #include <stdio.h>
//  void km_to_miles(float n)
//  {
//      printf("\n%f km is %f miles.\n\n", n, n / 0.621371);
//  }
//  void inches_to_foot(float n)
//  {
//      printf("\n%f inches is %f foot.\n\n", n, n / 0.0833333);
//  }
//  void cms_to_inches(float n)
//  {
//      printf("\n%f cms is %f inches.\n\n", n, n / 0.393701);
//  }
//  void pound_to_kgs(float n)
//  {
//      printf("\n%f pound is %f kgs.\n\n", n, n / 0.453592);
//  }
//  void inches_to_meters(float n)
//  {
//      printf("\n%f inches is %f meters.\n\n", n, n / 0.0254);
//  }
//  int main()
//  {
//      //    end: //the compile will move that part on the loop where you write end goto statement..
//      while (1)
//      {
//          int k;
//          float n;
//          printf("Which conversion do you want: \n 0)to exit the loop \n1)km to miles \n2)inches to foot \n3)cms to inches \n4)pound to kgs \n5)inches to meters \n");
//          scanf("%d", &k);
//          // printf("Enter the value:\n");
//          // scanf("%f", &n);
//          switch (k)
//          {

//         case 0:
//         {
//             goto end;
//           // break;
//         }

//         case 1:
//             printf("Enter the value in km:\n");
//             scanf("%f", &n);
//             km_to_miles(n);
//             break;
//         case 2:
//             printf("Enter the value in inches:\n");
//             scanf("%f", &n);
//             inches_to_foot(n);
//             break;
//         case 3:
//             printf("Enter the value in cms:\n");
//             scanf("%f", &n);
//             cms_to_inches(n);
//             break;
//         case 4:
//             printf("Enter the value in pound:\n");
//             scanf("%f", &n);
//             pound_to_kgs(n);
//             break;
//         case 5:
//             printf("Enter the value in inches:\n");
//             scanf("%f", &n);
//             inches_to_meters(n);
//             break;
//         default:
//             printf("\nThis type of conversion is not available \n\n");
//         }
//     }
// end:
//     return 0;
// }
// little updated version program..
#include <stdio.h>
void km_to_miles(float n)
{
    printf("\n%f km is %f miles.\n\n", n, n / 0.621371);
}
void inches_to_foot(float n)
{
    printf("\n%f inches is %f foot.\n\n", n, n / 0.0833333);
}
void cms_to_inches(float n)
{
    printf("\n%f cms is %f inches.\n\n", n, n / 0.393701);
}
void pound_to_kgs(float n)
{
    printf("\n%f pound is %f kgs.\n\n", n, n / 0.453592);
}
void inches_to_meters(float n)
{
    printf("\n%f inches is %f meters.\n\n", n, n / 0.0254);
}
int main()
{
    //    end: //the compile will move that part on the loop where you write end goto statement..
    while (1)
    {
        char k;
        float n;
        printf("Which conversion do you want: \nq)to Quit \n1)km to miles \n2)inches to foot \n3)cms to inches \n4)pound to kgs \n5)inches to meters \n");
        scanf(" %c", &k);//space ni lagayenge to new line bhi le lega compiler sometimes..
        // printf("Enter the value:\n");
        // scanf("%f", &n);
        switch (k)
        {
        case 'q':
        {
            printf("\nQuiting the program..\n");
            goto end;
            // break;
        }

        case '1':
            printf("Enter the value in km:\n");
            scanf("%f", &n);
            km_to_miles(n);
            break;
        case '2':
            printf("Enter the value in inches:\n");
            scanf("%f", &n);
            inches_to_foot(n);
            break;
        case '3':
            printf("Enter the value in cms:\n");
            scanf("%f", &n);
            cms_to_inches(n);
            break;
        case '4':
            printf("Enter the value in pound:\n");
            scanf("%f", &n);
            pound_to_kgs(n);
            break;
        case '5':
            printf("Enter the value in inches:\n");
            scanf("%f", &n);
            inches_to_meters(n);
            break;
        default:
            printf("\nThis type of conversion is not available \n\n");
        }
    }
end:
    return 0;
}