class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
      vector<int> days={31,28,31,30,31,30,31,31,30,31,30,31};
      auto convert=[&](string date){
        int month=stoi(date.substr(0,2));
        int day=stoi(date.substr(3,2));
      
      int total=day;
      for(int i=0;i<month-1;i++){
        total+= days[i];

      }
      return total;

      };
      int alicestart=convert(arriveAlice);
      int bobstart=convert(arriveBob);
      int aliceend=convert(leaveAlice);
      int bobend=convert(leaveBob);
      int start=max(alicestart,bobstart);
      int end=min(aliceend,bobend);
      return max(0,end-start+1);
    }
};