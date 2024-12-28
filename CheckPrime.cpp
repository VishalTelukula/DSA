bool isPrime(int n)
{
	// Write your code here.
	bool ans = true;
	if(n == 1 ){
		return false;
	}
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i == 0){
			if(count < 2){
				count++;
			}
			else{ans = false;
			break;}

		}
	}
	return ans;
}
