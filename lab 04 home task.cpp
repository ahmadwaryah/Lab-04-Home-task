// Task No.1
// #include <iostream>
// using namespace std;
// int main()
// {
//  int i,x,c,v;
//  for (i=1;i<=150;i++)
//  {
//      if (i%10!=0)
//      {
//          cout<<" "<<i;
//      continue;
//      }
//          cout<<"";
//  }
// }

// Task 2:
// #include <iostream>
// using namespace std;
// int main ()
// {
//     float c,v;
//     int x;
//     cout<<"What is the number? ";
//     cin>>x;
//     c=0;
//     while (x!=0)
//     {
//         v=x%10;
//         c=c+v;
//         x=x/10;
//     }
//     cout<<"The sum of the digits of the number is "<<c<<endl;
// }

// Task no. 3:
// #include <iostream>
// using namespace std;
// int main ()
// {
//     int x,c,v,b,n;
//     cout<<"What's the number? ";
//     cin>>c;
//     x=2;
//     if(c<2)
//     {
//         cout<<"Not a prime number.";
//     }
//     else
//     {
//         while(x<c)
//         {
//             if(c%x==0)
//             {
//                 cout<<"Not a prime Number.";
//                 break;
//             }
//             x++;
//         }
//         if(x==c)
//         {
//             cout<<"Its a prime number. ";
//         }
//     }
//     }