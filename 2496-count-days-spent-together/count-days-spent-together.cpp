#include <algorithm>
class Solution {
public:
    vector<int> convert(string s){
       vector <int> arr = {0, 31, 59, 90, 120, 151,181, 212, 243, 273, 304, 334};
        int date=0;
        int month=0;
        int day=0;
        int flag=0;
         for(char c : s){
            if(c!='-' && flag==0){
               month=month*10 + ( c - '0');
            }else if(flag==1){
                day=day*10 + ( c - '0');
            }else{
                flag=1;
                continue;
            }

             if(c!='-'){
               date=date*10 + ( c - '0');
            }
        }

        day=arr[month-1]+day;

        return {date,day};
    }
    
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
       
     vector<int> arriveAliceDate = convert(arriveAlice);
     vector<int> leaveAliceDate = convert(leaveAlice);
     vector<int> arriveBobDate = convert(arriveBob);
     vector<int> leaveBobDate = convert(leaveBob); 

     int Maxl=min(leaveAliceDate[0],leaveBobDate[0]);
     int MinA= max(arriveAliceDate[0],arriveBobDate[0]);

       int start = max(arriveAliceDate[1], arriveBobDate[1]);
       int end = min(leaveAliceDate[1], leaveBobDate[1]);

        return max(0, end - start + 1);
     
    }
};