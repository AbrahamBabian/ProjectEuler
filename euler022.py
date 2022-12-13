from queue import PriorityQueue

file = open("p022_names.txt")
file_contents = file.read()
file.close()

file_contents = file_contents.replace('"', '')
names = file_contents.split(",")

queue = PriorityQueue()
for name in names:
    queue.put(name)

count = 1
sum = 0
while not queue.empty():
    item = queue.get()
    item_sum = 0

    for char in item:
        item_sum += ord(char) - 64

    sum += count * item_sum
    count += 1

print(sum)