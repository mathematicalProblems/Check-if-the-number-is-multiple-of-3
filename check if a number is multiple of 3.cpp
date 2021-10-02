// IF STRING INPUT

class Solution{
public:
	
	int isDivisible(string s){
	    int sum = 0, x = 1;
	    for(int i = s.length() - 1; i >= 0; i--){
	        if((s[i] - '0') == 1){
	            sum = (sum + x) % 3;
	        }
	        x = (x * 2) % 3;
	    }

	    if(sum == 0) return 1;
	    return 0;
	}


};

//IF INTEGER INPUT

int isMultipleOf3(int n)
{
    int odd_count = 0;
    int even_count = 0;
 
    /* Make no positive if +n is multiple of 3
    then is -n. We are doing this to avoid
    stack overflow in recursion*/
    if (n < 0)
        n = -n;
    if (n == 0)
        return 1;
    if (n == 1)
        return 0;
 
    while (n) {
        /* If odd bit is set then
        increment odd counter */
        if (n & 1)
            odd_count++;
 
        /* If even bit is set then
        increment even counter */
        if (n & 2)
            even_count++;
        n = n >> 2;
    }
 
    return isMultipleOf3(abs(odd_count - even_count));
}


