class Solution {
public:
int digitSum(int n){
    int sum=0;
    while(n>0){
        sum += n%10;
        n /= 10;

    }
    return sum;
}
int product(int n){
    int producte=1;
    while(n>0){
    producte = producte * (n%10);
    n /= 10;
    }
    return producte;
}

    bool checkDivisibility(int n) {
        return n%(digitSum(n)+product(n))==0?true:false;
        
    }
};