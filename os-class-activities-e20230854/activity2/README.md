#Activity2: Answer for Task 4
	Q1: How is a message queue different from thread memory? When eould you use one over the other?
Answer: Message queue transfer data as messages managed by the OS, while share memory allows processes to access the same memory region directly.
Shared memory is faster, but message queues are easier to use and synchronize. 
	Q2: Why does the queue name in common.h need to start with / ?
Answer: POSIX requires message queue name to begin with a forward slash /. Without it, mq_open() will fail.
	Q3: What does mq_unlink() do? What happend if neither the sender nor reciever calls it?
Answer: mq_unlink() removes the message queue from the system. If nobody calls it, the queue remains and may consume system resources.
	Q4: What happend if you run the reciever before the sender? 
Answer: Running the reciever before the sender causes mq_open() to fail because the queue data does not yet exist.
	Q5: Can multiple senders send to the same queue? Can multiple recievers read from the same queue?
Answer: Yes, multiple senders can send messages to the same queue and multiple recievers can recieve message from the same queue. 

