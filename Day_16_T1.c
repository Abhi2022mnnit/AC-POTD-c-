//https://leetcode.com/problems/guess-number-higher-or-lower/?fbclid=IwAR0JVNgyklRIvXLbQ32TEA0TYOvJOGZdXphzAdCnCyyyO_FSe8l3UPTjJsQ


/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){
	int l=1, u=n;
    int mid=0;
    while(l<=u){
        mid = l + (u-l)/2;
        if(guess(mid) == -1) u=mid-1;
        else if (guess(mid) == 1) l=mid+1;
        else break;
    }
    return mid;
}