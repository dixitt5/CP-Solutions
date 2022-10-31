 def gameOfLife(self, board):
        """
        :type board: List[List[int]]
        :rtype: None Do not return anything, modify board in-place instead.
        """
        d={1:[-1,-1],2:[0,1],3:[0,-1],4:[1,0],5:[-1,0],6:[1,-1],7:[1,1],8:[-1,1]}
        new_board= [[0 for j in range(len(board[0]))]for i in range(len(board))]
        for i in range(len(board)):
            for j in range(len(board[0])):
                c=0
                for k in d.keys():
                    if i+d[k][0]<0 or j+d[k][1]>=len(board[0]) or i+d[k][0]>=len(board) or j+d[k][1]<0:
                        continue
                    else:
                        if board[i+d[k][0]][j+d[k][1]]==1:
                            c=c+1
                if board[i][j]==1:
                    if c<2 or c>3:
                        new_board[i][j]=0
                    else:
                        new_board[i][j]=1
                else:
                    if c==3:
                        new_board[i][j]=1
                    else:
                        new_board[i][j]=0
        for i in range(len(board)):
            for j in range(len(board[0])):
                board[i][j]=new_board[i][j]
