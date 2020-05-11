class Question:
     def __init__(self, prompt, answer):
          self.prompt = prompt
          self.answer = answer

question_prompts = [
     "What is the symbol of Bitcoin?\n(a) BTC\n(b)BCH\n (c)BTG \n\n",
     "What is the price of NEO?\n(a) 1.04149\n(b)119.082\n (c)165.179\n\n",
     "What is the symbol of Cardano?\n (a)LTC\n (b)XRP\n (c)ADA\n\n",
     "What is the price of IOTA?\n(a)2.00956\n (b)9.92927\n (c)1.014019\n\n",
     "What is the symbol of Zcash?\n (a)BCN\n (b)VEN\n (c)ZEC\n\n",
     "What is the price of Siacoin?\n (a)0.026016\n (b)0.0270801\n (c)0.00503942\n\n",
     "What is the price of Walton?\n (a)9.94735\n (b)25.2327\n (c)13.0664\n\n",
     "What is the Market Cap of Litecoin?\n (a)8047185802\n (b)6547185802\n (c)9109557125\n\n",
     "What is the symbol of Status?\n (a)SNT\n (b)STEEM\n (c)SC\n\n",
     "What is the symbol of Augur?\n (a)REP\n (b)XVG\n (c)PPT\n\n",
     "What is the Market Cap of Maker?\n (a)688798470.1\n (b)682216366.4\n (c)641121800.0\n\n",
     "What is the symbol of DigixDAO?\n (a)DCR\n (b)DOGE\n (c)DGD\n\n",
     "What is the price of DigiByte?\n (a)0.0401137\n (b)0.0602724\n (c)107.54\n\n",
     "What is the Market Cap of E-coin?\n (a)305275463.2\n (b)311295823.9\n (c)302240608.7\n\n",
     "What is the symbol of Factom?\n (a)FUN\n (b)AION\n (c)FCT\n\n",


]

questions = [
   Question(question_prompts[0],"a"),
   Question(question_prompts[1],"b"),
   Question(question_prompts[2],"c"),
   Question(question_prompts[3],"a"),
   Question(question_prompts[4],"c"),
   Question(question_prompts[5],"a"),
   Question(question_prompts[6],"b"),
   Question(question_prompts[7],"c"),
   Question(question_prompts[8],"a"),
   Question(question_prompts[9],"a"),
   Question(question_prompts[10],"a"),
   Question(question_prompts[11],"c"),
   Question(question_prompts[12],"a"),
   Question(question_prompts[13],"b"),
   Question(question_prompts[14],"c"),  
     
     
]

def run_quiz(questions):
    
     for question in questions:
          answer = input(question.prompt) 
                           
          
      
run_quiz(questions)

answers = [
           "1.ans)a",  
           "2.ans)b", 
           "3.ans)c", 
           "4.ans)a", 
           "5.ans)c", 
           "6.ans)a", 
           "7.ans)b", 
           "8.ans)c", 
           "9.ans)a", 
           "10.ans)a", 
           "11.ans)a",
           "12.ans)c",
           "13.ans)a",
           "14.ans)b",
           "15.ans)c"  
         ]
print(*answers, sep="\n")
