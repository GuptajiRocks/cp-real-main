from collections import defaultdict

def group_people(groupSizes_str: str) -> list[list[int]]:
    groupSizes = [int(x) for x in groupSizes_str.split()]
    n = len(groupSizes)
    groups_by_size = defaultdict(list)
    final_groups = []

    for person_id in range(n):
        size = groupSizes[person_id]
        groups_by_size[size].append(person_id)

    for size, person_ids in groups_by_size.items():
        for i in range(0, len(person_ids), size):
            group = person_ids[i : i + size]
            final_groups.append(group)
            
    return final_groups

input_str = "3 3 3 3 3 1 3"
result = group_people(input_str)
print(result)