#include <iostream>
using namespace std;
int main() {
    //Patterns using numbers
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    
    // Pattern 1: Increasing Number Triangle (Row Number)
    cout<<"Pattern 1: Increasing Number Triangle (Row Number)"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    
    // Pattern 2: Decreasing Number Triangle (Row Number)
    cout<<"Pattern 2: Decreasing Number Triangle (Row Number)"<<endl;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<i;
        }cout<<endl;
    }
    cout<<endl;
    
    // Pattern 3: Increasing Number Triangle (Column Number)
    cout<<"Pattern 3: Increasing Number Triangle (Column Number)"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    
    // Pattern 4: Decreasing Number Triangle (Column Number)
    cout<<"Pattern 4: Decreasing Number Triangle (Column Number)"<<endl;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    
    // Pattern 5: Square Pattern (Row Number)
    cout<<"Pattern 5: Square Pattern (Row Number)"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    
    // Pattern 6: Square Pattern (Column Number)
    cout<<"Pattern 6: Square Pattern (Column Number)"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    
    // Pattern 7: Number Pyramid
    cout<<"Pattern 7: Number Pyramid"<<endl;
    for(int i=1;i<=n;i++){
        for(int t=1;t<=n-i;t++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    // Pattern 8: Floyd's Triangle
    cout<<"Pattern 8: Floyd's Triangle"<<endl;
    int num=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }cout<<endl;
    }
    cout<<endl;
    
    //Pattern 9:Diamond Pattern
    cout << "\nPattern 9: Diamond Pattern\n";

    // Upper half
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=(2 * i - 1);j++){
            cout<<i;
        }
        cout<<endl;
    }

    // Lower half
    for(int i=n-1;i>=1;i--){
        for(int s=1;s<=n - i;s++){
            cout<< " ";
        }
        for(int j=1;j<=(2 * i - 1);j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}