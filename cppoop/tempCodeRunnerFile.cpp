// # include <bits/stdc++.h>
// using namespace std;

// class Arithmatic
// {
//     public:
//     int a,b;
//     void input()
//     {
//         cin>>a;
//     }

//     Arithmatic operator+(Arithmatic &obj)
//     {
//         Arithmatic ans;
//         ans.a = a + obj.a;
//         return ans;
//     }
//     void print()
//     {
//         cout<<a<<endl;
//     }
// };

// int main()
// {
//     Arithmatic Add,x1,y1;
//     x1.input();
//     y1.input();
//     Add = x1 + y1;
//     Add.print();
// }








# include <bits/stdc++.h>
using namespace std;
int hash1(int data)
{
    return data % 1000;
}

bool isprime(int data)
{
    if(data <= 1)
    {
        return false;
    }

    for(int i=2;i<=sqrt(data);i++)
    {
        if(data % i == 0)
        {
            return false;
        }
    }
    return true;
}
void probe(int table[],int size,int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int data = arr[i];
        int index = hash1(data);
        int attempt = 1;
        while(attempt < size)
        {
            if(isprime(index) && table[index] == -1)
            {
                table[index] = data;
                break;
            }
            index = (index + attempt * attempt) % size;
            attempt++;
        }     
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int table[1000];
    for(int i=0;i<1000;i++)
    {
        table[i] = -1;
    }
    int size = 1000;
    probe(table,size,arr,n);
    for(int i=0;i<1000;i++)
    {
        if(table[i] != -1)
        {
            cout<<"Index is : "<<i<<" value is: "<<table[i]<<" "<<endl;
        }
    }
}



// #include <iostream>
// #include <vector>
// using namespace std;

// int longestProbeSequence(const vector<int>& table) {
//     int n = table.size();
//     int longestSequence = 0;

//     for (int i = 0; i < n; i++) {
//         if (table[i] != -1) { 
//             int hashIndex = i; 
//             int probeCount = 0;

//             for (int j = 0; j < n; j++) {
//                 int index = (hashIndex + j * j) % n;
//                 probeCount++;
//                 if (table[index] == -1 || index == hashIndex) {
//                     break; 
//                 }
//             }

//             longestSequence = max(longestSequence, probeCount);
//         }
//     }
//     return longestSequence;
// }

// int main() {
//     vector<int> table = {10, -1, 20, 15, -1, -1, 7};

//     int result = longestProbeSequence(table);
//     cout << "Longest probe sequence: " << result << endl;

//     return 0;
// }
