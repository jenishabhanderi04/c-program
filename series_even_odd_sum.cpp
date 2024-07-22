#include <iostream>
using namespace std;

int main() {
    int n,evensum,oddsum;
    
    cout << "Enter the number = ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) 
    {
        if(i% 2 == 0)
        {
            cout << "even num = "<< i;
            
            evensum = evensum+ i;
            cout<<"\n";
           
        }
        
       else
        {
            cout << "odd num = "<< i;
            oddsum = oddsum + i;
            cout<<"\n";
        }
        
    }
    cout << "even sum = "<<evensum<< "\n";
    cout <<"odd sum = "<< oddsum;
    
    return 0;
}
