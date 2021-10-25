all_combinations = []
for r in range(len(a_list) + 1):
    combinations_object = itertools.combinations(a_list, r)
    combinations_list = list(combinations_object)
    all_combinations += combinations_list

print(all_combinations)