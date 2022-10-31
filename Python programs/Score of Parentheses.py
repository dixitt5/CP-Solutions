def scoreOfParentheses(self, s: str) -> int:
        stack=[]
        for i in s:
            if i=='(':
                stack.append(-1)
            else:
                if stack[-1]==-1:
                    stack.pop()
                    stack.append(1)
                else:
                    s=0
                    while stack[-1]!=-1:
                        s+=stack.pop()
                    stack.pop()
                    stack.append(2*s)
        return sum(stack)
