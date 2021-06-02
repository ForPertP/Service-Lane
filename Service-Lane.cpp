vector<int> serviceLane(int n, vector<vector<int>> cases, vector<int> width)
{
   vector<int> result;
    
    for (int i = 0; i < cases.size(); ++i)
    {
        int min = INT_MAX;
        int start = cases[i][0];
        int end = cases[i][1];
        
        for (int j = start; j <= end; ++j)
        {
            if (width[j] < min)
            {
                min = width[j];
            }
        }
        
        result.emplace_back(min);
    }
    
    return result;
}
