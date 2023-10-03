// String Compression
// leetcode 443
#include<iostream>
using namespace std;
#include<vector>

int compress(vector<char>& chars) {
        int i=0;
        int len = chars.size();
        int count = 0;
        int index = 0;

        while(i<len)
        {
            int j=i;
            while(j<len && chars[i] == chars[j])
            {
                count++;
                j++;
            }

            chars[index] = chars[i];
            index++;

            if(count > 1)
            {
                string temp1 = to_string(count);
                for(auto i:temp1)
                {
                    chars[index] = i;
                    index++;
                }
            }
            i=j;
            count=0;
        }
        return index;
    }

int main()
{
    cout << "String Compression" << endl;
    return 0;
}