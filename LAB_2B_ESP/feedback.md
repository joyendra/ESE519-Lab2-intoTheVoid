# Feedback questions

`Which parts of the lab specification have you found most confusing or difficult to understand?`
There were some elements which were not well worded leading to a lot of ambiguity as everyone had their own version of understanding. Some whjch I can remember on top of my head are:-
1. Part 4 talked about **precisely timed sequences** and **timestamped transitions** which had multiple "right" ways to approach it but only a few ways could be used when it came to further parts. If we didn't know the future parts, one would have to revamp their code back and forth time and again depending on the new requirement.
2. Part 6 wanted us to work with a partner and their QTPy. Different approaches in taking a **record a timestamped trace** led to a mismatch and took a lot of time to resolve.
3. Overall lack of in depth understanding, even a refresher, to concepts like DMA, especially for a new board with very limited resources.

`Which lab topics have you found most confusing or difficult to understand?`
1. Understanding the timing concept without a formal definition kind of turned out to be vague.
2. Working with .pio and assembly files without much understanding of what exactly was going on, rather just treating everything as an boilerplate template and relying on the fact that it worked for someone was shooting an arrow in pitch black.
3. Trying to replicate established protocols like I2C without perfect clarity as to how it's working behind the scenes was another challenging task.
4. There were terms like jitter which can be interpreted in a lot of ways. We couldn't understand which clock's jitter were we expected to find out and how that helps.

`Which parts of the lab have you found most difficult to implement?`
Everything from part 6 was difficult to implement as we were supposed to take reference from a pre-existing code and try to customize it for our use case. It was especially challenging as it required some understanding of wrappers in pio files and other things which we didn't have.

`What steps have you taken to resolve these difficulties?`
Since there's a very limited amount of tutorial available for this board, a lot of it was hit and trial and working with friends in parallel. We had to go through the SDK, datasheet and the RP2040 assembly guide book to even figure out things like how pio IN worked. Additionally, a lot of concepts needed background reading which made the lab longer than it should've been as we had to move back and forth with the reading and try things without any prior knowledge of whether a thing would work or not.
