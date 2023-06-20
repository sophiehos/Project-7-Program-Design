# Project-7-Program-Design
Project 7, Program Design
You are given a data set of hospitals in Florida about cost and quality of care for pneumonia. Write a
program to sort the hospitals by cost in ascending order. The hospitals being sorted should only include
hospitals of quality of “Better” or “Average” and overall rating 3 or higher. Write the result to the output
file.
The input file has the format of Facility name (String), Facility city (String), Facility State (String), Overall
rating (Integer), Pneumonia cost (Integer), Pneumonia quality (String), pneumonia value (String), with
each facility on a separate line:
Larkin Community Hospital Palm Springs Campus,Hialeah,FL,2,17111,Better,Average
South Lake Hospital,Clermont,FL,4,18126,Average,Average
....
Overall rating (String): Overall rating between 1 and 5 stars, with 5 stars being the highest rating; -1
represents no rating.
Pneumonia cost (Integer): Average cost of care for pneumonia
Pneumonia quality (String): Average, Worse, or Better comparison to national quality of care for
pneumonia
Pneumonia value (String): Average, Lower, or Higher comparison to national cost of care for pneumonia
This data file is a subset of Hospitals CSV File: https://corgis-edu.github.io/corgis/csv/hospitals/. It allows
consumers to directly compare across hospitals performance measure information.
Example input/output:
Enter the file name: pneumonia_Florida.csv
Output file name:
output.csv
Technical requirement:
1. Name your program pneumonia.c.
2. The output file name should be the named output.csv.
3. Assume that there are no more than 300 hospitals in the file. Assume the name of a hospital
is no more than 150 characters. City and States are no more than 50 characters.
4. Use fscanf and fprintf to read and write data. To read all fields of a hospital, use the
following conversion specifier for fscanf:
"%[^,], %[^,], %[^,], %d, %d, %[^,], %s\n"
5. The program should be built around an array of hospital structures, with each
hospital containing information of name, city, state, rating, cost, quality, and value.
6. Your program should include a sorting function so that it sorts the hospitals (with quality of
“Better” or “Average” and overall rating 3 or higher) by cost. You can use any sorting
algorithms such as selection sort and insertion sort.
void sort_hospitals(struct hospitals list[], int n);
7. Output files should be in the same format as the input file, with the members separated by
comma and each facility at a separate line.
Ed Fraser Memorial Hospital, Macclenny,FL,3,13749,Average,Lower
Jay Hospital,Jay,FL,3,13792,Average,Lower
.....
Before you submit:
1. Compile with –Wall. Be sure it compiles on student cluster with no errors and no warnings.
gcc –Wall pneumonia.c
2. Test your program with the script.
chmod +x try_penumonia
./try_pneumonia
3. Submit both pneumonia.c and pneumonia_Florida.csv (for grading purposes).
Grading:
Total points: 100
1. A program that does not compile will result in a zero.
2. Runtime error and compilation warning 5%
3. Commenting and style 15%
4. Functionality 80% (functions were declared and implemented as required)
Programming Style Guidelines
The major purpose of programming style guidelines is to make programs easy to read and understand.
Good programming style helps make it possible for a person knowledgeable in the application area to
quickly read a program and understand how it works.
1. Your program should begin with a comment that briefly summarizes what it does. This
comment should also include your name.
2. In most cases, a function should have a brief comment above its definition describing what it
does. Other than that, comments should be written only needed in order for a reader to
understand what is happening.
3. Information to include in the comment for a function: name of the function, purpose of the
function, meaning of each parameter, description of return value (if any), description of side
effects (if any, such as modifying external variables)
4. Variable names and function names should be sufficiently descriptive that a knowledgeable
reader can easily understand what the variable means and what the function does. If this is not
possible, comments should be added to make the meaning clear.
5. Use consistent indentation to emphasize block structure.
6. Full line comments inside function bodies should conform to the indentation of the code where
they appear.
7. Macro definitions (#define) should be used for defining symbolic names for numeric constants.
For example: #define PI 3.141592
8. Use names of moderate length for variables. Most names should be between 2 and 12 letters
long.
9. Use underscores to make compound names easier to read: tot_vol or total_volumn is
clearer than totalvolumn
