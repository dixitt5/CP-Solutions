Creating an empty Dictionary
Dict = {}
print("Empty Dictionary: ")
print(Dict)

Adding elements one at a time
Dict[0] = 'hackoctberfest'
Dict[2] = 'For'
Dict[3] = 1
print("\nDictionary after adding 3 elements: ")
print(Dict)

Adding set of values
to a single Key
Dict['Value_set'] = 2, 3, 4
print("\nDictionary after adding 3 elements: ")
print(Dict)

Updating existing Key's Value
Dict[2] = 'hackoctberfest'
print("\nUpdated key value: ")
print(Dict)

Adding Nested Key value to Dictionary
Dict[5] = {'Nested': {'1': 'Life', '2': 'shivani'}}
print("\nAdding a Nested Key: ")
print(Dict)         
