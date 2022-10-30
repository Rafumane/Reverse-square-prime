#include<stdio.h>
#include<math.h>
int function();
int main(){
	int n=2, i = 3, count, p, c, k, sqr;
	// iteration for n prime numbers
    // i is the number to be checked in each iteration starting from 3
    for(count = 2; count <= 1180; i++)  
    {
        // iteration to check c is prime or not
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
               	break;
        }

        if(c == i)  // c is prime
        {
		sqr= i*i;//squaring the prime numbers
                    //reverses the squared prime number
				    int rev=0, rem;
	                int s=sqr;
	                while(s!=0){
		            	rem=s%10;
		            	rev=rev*10+rem;
		            	s=s/10;
	                }
			  //checks if the number is a palindrome or not
	                if(sqr!=rev){	
					//because it is not a pandrome, take the root of the number 
						int flag=0;
					    int p=1;
						p = sqrt(rev);
						// now checking if root is a prime number
					    	if(p * p ==rev){
								for(int k=2; k<p; k++){
								if(p%k==0){
									flag==1;
									break;
								}
							}
							//printing the first 10 reverse prime squares
							if(flag==0){
								printf("%d, %d \n", i, sqr);
							
						}
					} 
			}
			
        }   
	    count++;    // increment the count of prime numbers
    }
	return 0;
}