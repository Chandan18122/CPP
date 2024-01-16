#include<iostream>
#include<vector>
using namespace std;


vector<int> addVectors(const vector<int>& vec1, const vector<int>& vec2)  
{  
     
	if (vec1.size() == vec2.size())  
	{  
		vector<int> result(vec1.size());  
		int cary=0;
		for (int i = vec1.size()-1; i >=0 ; i--)  
		{  
			result[i] = cary + vec1[i] + vec2[i];
			cary = result[i]/10;
			result[i] =  result[i]%10;
		}  
	  
		return result;  
	}  
  
	if (vec1.size() > vec2.size())  
	{      
		vector<int> result(vec1.size());  
		int cary=0;
		int j = vec2.size()-1;
		int tvec2 = 0;
		for (int i = vec1.size()-1; i >=0 ; i--)  
		{
			if(j < 0){tvec2 = 0;}
			else{ tvec2 = vec2[j];}
			result[i] = cary + vec1[i] + tvec2;
			cary = result[i]/10;
			result[i] =  result[i]%10;
			j--;
		}  
	  
		return result;  
	}

	if (vec1.size() < vec2.size())  
	{      
		vector<int> result(vec2.size());  
		int cary=0;
		int j = vec1.size()-1;
		int tvec1 = 0;
		for (int i = vec2.size()-1; i >=0 ; i--)  
		{
			if(j < 0){tvec1 = 0;}
			else{ tvec1 = vec1[j];}
			result[i] = cary + vec2[i] + tvec1;
			cary = result[i]/10;
			result[i] =  result[i]%10;
			j--;
		}  
	  
		return result;  
	}
}  
  
int main()  
{  
     
    vector<int> vec1 = {1, 2, 9,8};  
    vector<int> vec2 = {4, 5, 6};  
  
     
    vector<int> result = addVectors(vec1, vec2);  
  
     
    cout << "The result of adding the two vectors is: [";  
    for (int i = 0; i < result.size(); i++)  
    {  
        cout << result[i];  
        if (i != result.size() - 1)  
        {  
            cout << ", ";  
        }  
    }  
   cout << "]" <<endl;  
  
    return 0;  
} 
