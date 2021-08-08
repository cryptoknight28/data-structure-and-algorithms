#include <iostream>
using namespace std;

int main()
{
    // int x,y;
    // cin>>x>>y;
    // if (x==y){
    //     cout<<"equal\n";
    // }
    // else{
    //     if(x>y){
    //         cout<<"x is greater\n";
    //     }
    //     else{
    //         cout<<"y is greater\n";
    //     }
    // }
    //#1

    // int n;
    // cin>>n;
    // if (n%2==0){
    //     cout<<"even\n";
    // }else{
    //     cout<<"odd\n";
    // }

    //#2


    // int a,b,max,min;
    // cin>>a>>b;
    // if (a>b){
    //     max=a;
    //     min=b;
    // }else{
    //     max=b;
    //     min=a;
    // }
    // cout<<"max is "<<max<<endl;
    // cout<<"min is "<<min<<endl;

    // #3
    // int a,b,c;
    // cin>>a>>b>>c;
    // if(a>b && a>c){
    //     cout<<"a is greater "<<a<<endl;
    // }else if(b>c){
    //     cout<<"b is greater"<<endl;
    // }else{
    //     cout<<"c is greater"<<endl;
    // }

    // #4
    // int n;
    // cin>>n;
    // while(n>0){
    //     cout<<n<<endl;
    //     cin>>n;

    // }

    // #5
    // int pocketMoney=3000,date;
    // for(date=1;date<=30;date++){
    //     if(date%2==0){
    //         continue;
    //     }
    //     if(pocketMoney==0){
    //         break;
    //     }
    //     cout<<"go out "<<endl;
    //     pocketMoney=pocketMoney-300;
    // }
    // int n;
    // cin>>n;
    // for (int i=1;i<=10;i++){
    //     cout<<n<<"*"<<i<<"="<<n*i<<endl;
    // }

    // int number;
    // int sum =0;
    // cout<<"enter the number:"<<endl;
    // cin>>number;
    // while(number>=0){
    //     sum+=number;
    //     cout<<"enetr a number"<<endl;
    //     cin>>number;
    // }
    // cout<<"the sum is"<<sum<<endl;
    

    // int n;
    // cin>>n;
    // for (int i=0;i<=n;i++)
    // {
    //     if(i%2==0){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }
    
    // int n;
    // cin>>n;
    // int i;
    // for (int i=2;i<n;i++){
    //     if (n%i==0){
    //         cout<<"nt a prime "<<endl;
    //         break;
    //     }else{
    //         cout<<"prime"<<endl;
    //     }
    // }
    // if(i==n){ 
    //     cout<<"prime le"<<endl;
    // }
    

    // int a,b;
    // cin>>a>>b;

    // for (int i=a;i<=b;i++){
    //     int j;
    //     for(j=2;j<i;j++){
    //         if(i%j==0){
    //             cout<<i<<" is nt a prime number"<<endl;
    //             break;

    //         }
    //     }
    //     if(j==i){
    //         cout<<i<<"is prime"<<endl;
    //     }
    // }

//     const nemo = ['nemo'];

// function findNemo1(array) {
//   for (let i = 0; i < array.length; i++) {
//     if (array[i] === 'nemo') {
//       cout<<"Found NEMO!"<<endl;
//     }
//   }
// }

// #switch statements;

// int n1,n2;
// char op;
// cin>>n1>>n2;
// cout<<"enter operator "<<endl;
// cin>>op;

// switch (op)
// {
// case '+':
//     cout<<n1+n2<<endl;
//     break;
// case '-':
//     cout<<n1-n2<<endl;
//     break;
// case '*':
//     cout<<n1*n2<<endl;
//     break;
// case '/':
//     cout<<n1/n2<<endl;
//     break;

// default:
//     cout<<"operator not found"<<endl;
//     break;
// }


// # rectangle pattern

// int row,col;
// cin>>row>>col;

// for(int i=1;i<=row;i++){
//     for (int j = 1; j <= col; j++){
//         cout<<"* ";
//     }cout<<endl;
// }

// #hollow rectangle pattern

int row,col;
cin>>row>>col;

for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
        if(i==1 || i==row || j==1 || j==col){
            cout<<"* ";
        }
        else{
            cout<<" ";
        }
    }cout<<endl;
}

//inverted half pyramid
// int n;
// cin>>n;

// for (int i=n;i>=1;i--){
//     for (int j=1;j<=i;j++){
//         cout<<"*";
//     }cout<<endl;
// }

// half pyramid after 180 rotation

// int n;
// cin>>n;

// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){
//         if(j<=n-i){
//             cout<<" ";
//         }else{
//             cout<<"*";
//         }
//     }cout<<endl;
// }

// half pyramid using numbers

// int n;
// cin>>n;

// for (int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<i<<" ";
//     }cout<<endl;
// }

// floyds triangle

// int n;
// cin>>n;
// int count=1;
// for(int i=1;i<=n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<count<<" ";
//         count++;
//     }cout<<endl;
// }

// butterfly pattern

// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     int space=2*n - 2*i;
//     for(int j=1;j<=space;j++){
//         cout<<" ";
//     } 
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }cout<<endl;
// }
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     int space=2*n - 2*i;
//     for(int j=1;j<=space;j++){
//         cout<<" ";
//     } 
//     for(int j=1;j<=i;j++)
//         cout<<"*";
//     }cout<<endl;
// }

// inverted pattern

// int n;
// cin>>n;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n+1-i;j++){
//         cout<<j<<" ";
//     }cout<<endl;
// }

// 0-1 pattern

// int n;
// cin>>n;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         if((i+j)%2==0){
//             cout<<" 1";
//         }
//         else{
//             cout<<" 0";
//         }
//     }cout<<endl;
// }

// rhombus pattern

// int n;
// cin>>n;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//     cout<<endl;
// }

// number pattern

int n;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }cout<<endl;
}

// palindromic pattern




  
    return 0;
}