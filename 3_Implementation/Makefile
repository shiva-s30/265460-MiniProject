# Name of the project
PROJECT_NAME = Tecquizz

# Output directory
BUILD = build

#Source Code Files
SRC = src/quiz_game.c

INC = unity

TEST = unity/unity.c

$(PROJECT_NAME).exe : $(SRC) $(TEST)
        gcc -I $(INC) $(SRC) $(TEST) -o $(PROJECT_NAME).exe 
