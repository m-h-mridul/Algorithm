 /*      
	copy from another and this the best solution is see for
		this problem 
	heaker rank problem Forming a Magic Square
*/
int formingMagicSquare(vector<vector<int>> s) {
   // All possible combinations are stored in an array separately
    int arr0[9] =   {4,9,2,3,5,7,8,1,6};
    int arr1[9] =   {2,7,6,9,5,1,4,3,8};
    int arr2[9] =   {6,1,8,7,5,3,2,9,4};
    int arr3[9] =   {2,9,4,7,5,3,6,1,8};
    int arr4[9] =   {6,7,2,1,5,9,8,3,4};
    int arr5[9] =   {8,1,6,3,5,7,4,9,2};
    int arr6[9] =   {8,3,4,1,5,9,6,7,2};
    int arr7[9] =   {4,3,8,9,5,1,2,7,6};
    int len = s.size();
    int ans[8] = {0}; // to store 0 for find the minimum value of the ans 
    for (int i=0; i<len; i++)
    {
        for(int j=0; j<s[i].size(); j++)
        {
            int k = s[i][j];
     // calculate different between set value and given value
      // and store it on an array 
            ans[0] += abs(k - arr0[((i*3)+j)]);
            ans[1] += abs(k - arr1[((i*3)+j)]);
            ans[2] += abs(k - arr2[((i*3)+j)]);
            ans[3] += abs(k - arr3[((i*3)+j)]);
            ans[4] += abs(k - arr4[((i*3)+j)]);
            ans[5] += abs(k - arr5[((i*3)+j)]);
            ans[6] += abs(k - arr7[((i*3)+j)]);
            ans[7] += abs(k - arr6[((i*3)+j)]);

        }
    }
    int min =ans[0];
    //  finding minimum of all cost in array 
    for(int i=0;i<8;i++)
        if(ans[i]<min)
            min = ans[i];
    return min;

}