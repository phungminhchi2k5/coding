    #include<iostream>
    using namespace std;

    int sdn(int n){
        int result=0;
        while (n>0){
            result=(result*10)+(n%10);
            n/=10;
        }
        return result;
    }
    bool snt(int num, int divisor = 2) {
        if (num <= 1) {
            return false;
        }
        if (divisor * divisor > num) {
            return true;
        }
        if (num % divisor == 0) {
            return false;
        }
        return snt(num, divisor + 1);
            
        }
    int main(){
        int a,b;
        int count=0;
        cin >>a >>b;
        for(int i=a;i<=b;i++){
            if(snt(i)&&snt(sdn(i))) count++;
        }
        cout << count ;
        return 0;
    }