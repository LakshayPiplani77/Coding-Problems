#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

def pos(n):
    ## Write the code
    if n==0:
        print('already Zero')
    elif(n > 0):
        while(n>0):
            print(n-1,end = " ")
            n = n-1
        
        
    
def neg(n):
    ##Write the code
    if n==0:
        print('already Zero')
    if(n < 0):
        while(n <= 0):
            print(n,end = " ")
            n = n + 1
    
    

#{ 
#Driver Code Starts.


def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        n = int(input())
        if(n > 0):
            pos(n)
        elif(n < 0):
            neg(n)
        else:
            print("already Zero",end="")
        print()
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends