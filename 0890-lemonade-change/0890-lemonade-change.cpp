class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {  
        
        int five = 0 , ten = 0;
        for(auto i : bills){
            if(i == 5){
                five += 5;
            }else if(i == 10 && five >= 5){
                ten += 10;
                five -= 5;
            }
            else if(i == 20 && five >= 5 ){
                if(ten >= 10){
                    ten -= 10;
                    five -= 5;
                }
                else if(five >= 15){
                    five -= 15;
                }
                else return false;
            }
            else return false;
        }
        return true;
    }
};