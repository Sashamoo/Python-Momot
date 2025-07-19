SIZE = 3
board = [["" for i in range(SIZE)] for j in range(SIZE)]

def getCoord(number):
    match number:



def printBoard(board):
    helper = [i for i in range(1, 10)]
    j = 0 
    for row in board:
        i = 0
        j+= 1
        for cell in row:
            i+=1
            print(" " + cell + " " + (chr(9553) if i < len(row) else ""),end="")
        i = 0
        print("\t\t",end="")
        for cell in row:
            i+=1
            print(" " + str)
        print()
        print((chr(9552) * (len(row)* 4 - 1)) if j < len(board) else "", end="\t\t")
        print((chr(9552) * (len(row)* 4 - 1)) if j < len(board) else "")
import random

def check(board, a, b, c):
    a_x, a_y = getCoord(a)
    b_x, b_y = getCoord(a)
    c_x, c_y = getCoord(a)
    return board[a_x][a_y] == board[b_x][b_y] and board[b_x][b_y] == 

def checkAll(board):
    if board[0][0] != '':
        return check(board, 1,2,3) or check check(board, 1,4,7) or check(board, 7,8,9)





def game():
    printBoard(board)
    user = 'X'
    bot = 'O'
    flag = True
    while True:
        printBoard(board)
        if flag:
            value = int(input("Enter number position ::"))
            user_x, user_y = getCoord(value)
            if board[user_x][user_y] == " ":
                board[user_x][user_y] = user
                flag = False
        else:
            bot_x, bot_y = getCoord(random.randint(1,9))
            if board [bot_x][bot_y] == " ":
                board[bot_x][bot_y] = bot