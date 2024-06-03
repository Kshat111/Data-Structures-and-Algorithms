#include <iostream>
using namespace std;
int main(){
    cout<<"enter marks"; 
int n; 
cin>>n;

if (91<n && n<100){ 
cout<<"grade is AA";

}

else if(81<n<90){ 
cout<<" grade is AB";

}

else if (71<n<80){ 
cout<<" grade is BB"; }

else if(61<n<70){ 
cout<<" grade is BC";

} else if(51<n<60) { 
cout<<" grade is CC"; }

else if(41<n<50){ 
cout<<" grade is DD";

} else if (n<=40){ 
cout<<" Fail";
}
}