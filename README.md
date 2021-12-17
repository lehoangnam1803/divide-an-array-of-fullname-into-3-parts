# divide-an-array-of-fullname-into-3-parts

#Problem
1. Creat a string array a[30]
2. Insert a fullname
3. Divide this name into 3 parts: first name, last name, middle name

#How to solve
1. We know that the C programs works with a string array like a number array. The different between a string array and number array is a string array has NULL value at the end of the array.
2. First name, last name and middle name are separated by a space. The last name is a word which is front of a first space, and the first name is behind a last space.
3. I create a variable (space) and set the value 0.
4. Then, I use a "for" loop to count how many space are there in the array.
5. I create the second "for" loop with a "count" variable to separated the array
6. While a[i] is a space, "count" increases one unit. ("count" must be equal to "space" when the loop ends)
7. If "count"=0, that is the last name; if "count" between 1 and (space-1), that is middle name; if "count" = space, we got the first name.
