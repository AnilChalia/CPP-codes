// #include<iostream>
// using namespace std;

// int main() {
// 	double width, height;
// 	cin >> width >> height;
// 	double area = width * height;
// 	cout << area << endl;
// 	return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n % 10;
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         n = n / 10;
//     }
//     cout<<sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n, flag=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         // flag = 1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 flag = 0;
//             }
//         }
//         if(flag==1){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

bool checkMember(int n){
    int f1 = 1, f2 = 1;
    if(n==0 && n==1){
        return true;
    }
    else{
        while(true){
            int temp = f1 + f2;
            if(temp==n){
                return true;
            }
            else if(temp>n){
                return false;
            }

            f1 = f2;
            f2 = temp;
        }
    }

}
