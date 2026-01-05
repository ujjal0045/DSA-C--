bool isPrime(int num){
    if(num <= 1) return false;

    for(int i=2;i*i<=num;i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int temp = num;
    int n; // here i store reverse number of num.
    while(temp > 0){
        int rem = temp % 10;
        n = (n*10) + rem;
        temp /= 10;
    }
    if(isPrime(num) && isPrime(n)){
        cout<<"Twisted prime"<<endl;
    } else {
        cout<<"Not an twisted prime";
    }
}