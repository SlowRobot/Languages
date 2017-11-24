def getQuestions():
    return [["What color is the daytime sky on a clear day? ", "blue"],
            ["What is the answer to life, the universe and everything? ", "42"],
            ["What is a three letter word for mouse trap? ", "cat"]]

def checkQuestion(questionAnswer):
    question = questionAnswer[0]
    answer = questionAnswer[1]

    givenAnswer = input(question)

    if givenAnswer == answer:
        print("Correct")
        return 1
    else:
        print("Incorrect. The correct answer is", answer)
        return 0

def runTest(questions):
    if len(questions) == 0:
        print("No questions given")
        return
    index = 0
    right = 0
    while index < len(questions):
        right = right + checkQuestion(questions[index])
        index = index + 1
    print("You got", right, "right out of", len(questions))

runTest(getQuestions())
