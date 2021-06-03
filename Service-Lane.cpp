vector<int> serviceLane(int n, vector<vector<int>> cases, vector<int> width)
{
    vector<int> result;
    
    for (size_t i = 0; i < cases.size(); ++i)
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

vector<int> serviceLane1(int n, vector<vector<int>> cases, vector<int> width)
{
    vector<int> result;
    
    for (size_t i = 0; i < cases.size(); ++i)
    {   
        int start = cases[i][0];
        int end = cases[i][1];
        
        result.emplace_back(
            *min_element(width.begin()+start, width.end()-width.size()+end+1));       
    }
    
    return result;
}
