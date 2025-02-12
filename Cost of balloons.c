#include<stdio.h>

int main()
{
    int t, n, g, p, a[10][2], sum1, sum2, ans;
    
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++)
    {
        sum1 = sum2 = 0;
        
        // Read the cost of green and purple balloons
        scanf("%d%d", &g, &p);
        
        // Read number of participants
        scanf("%d", &n);
        
        // Read the participation data for each participant
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < 2; k++)
                scanf("%d", &a[j][k]);
        }
        
        // Calculate the total cost if first problem uses green and second uses purple
        for(int j = 0; j < n; j++)
        {
            if(a[j][0] == 1)
                sum1 += g;
            if(a[j][1] == 1)
                sum1 += p;
        }
        
        // Calculate the total cost if first problem uses purple and second uses green
        for(int j = 0; j < n; j++)
        {
            if(a[j][0] == 1)
                sum2 += p;
            if(a[j][1] == 1)
                sum2 += g;
        }
        
        // Find the minimum cost
        ans = sum1 > sum2 ? sum2 : sum1;
        
        // Print the result
        printf("%d\n", ans);
    }
    
    return 0;
}
