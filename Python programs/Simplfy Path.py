def simplifyPath(self, path: str) -> str:
        stack=[]
        l=path.split('/')
        for i in l:
            if i=='.' or i=='':
                continue
            elif i=='..':
                if len(stack)!=0:
                    stack.pop()
            else:
                stack.append(i)
        return '/'+'/'.join(stack
