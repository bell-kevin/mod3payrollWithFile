# mod3payrollWithFile

This exercise demonstrates your competency in the skills learned in this module. You must complete this exercise on your own, without any help from an instructor or another student. If you get stuck, go back through the relevant sections in the book, the quizzes, and the assignments for this module -- everything you need to do in this exercise has been covered in this and previous modules.

These are skills you practiced in this module and will now demonstrate:

Reading and writing files
Using a while or do-while loop
Using a loop for input validation
Using IF structures
Using functions
 

Module 3 Competency Exercise: Payroll with a File

In this project, you will write data to a file for employee names and pay rate, then read that data from the file to ask the user how many hours each employee worked, calculate their gross pay, and calculate the total payroll.

In the first part of the project, ask the user for first and last names of an employee and their rate of pay, which is a decimal number. Write the data to a file. The user can enter the data for as many employees as they want, until they signal they are done with a sentinel value.

In the second part of the project, read each employee's data from the file, ask for the employee's hours, calculate gross pay for the employee, print out the employee's gross pay, and add that pay to the total payroll. Once all employees' data has been processed, print out the total of the payroll.

Use a function to ask the user for the employee's hours, which is a decimal number. Validate that data: the minimum number of hours is 0, the maximum number is 40 (no one works overtime). Loop to repeatedly ask for valid data if necessary. The function returns the hours worked for that employee.

Use another function to calculate the gross pay for a single employee and add it to the total payroll. This function needs arguments for the employee's hours and rate of pay, and a reference variable for the total payroll. It calculates the employee's gross pay, prints that result on the screen, and adds that gross pay to the total payroll variable.  

When the last employee's gross pay has been calculated, display the total payroll.

For both gross pay and total payroll, always show the decimal point and 2 decimal places.

Run the program two times, once with all valid input, once with some invalid input. For each execution, take a screenshot showing the results of the program, then open the file using NotePad++ or a similar text processor, and take a screenshot of that data. You can find the file that was created inside the folder with the project name. That is, the root folder has 3 folders inside of it -- "Debug", "ipch", and another with the same name as the project. Open that folder with the same name to find the file created when the project ran.

Here is an example with good input:

M3 Competency good 

This is the file that was written in that execution:

File written in program   

Here is an example of the program with invalid data entered for number of hours worked for the first 2 employees, and 0 for the third employee:

 M3 Competency bad  

Create a table of test cases BEFORE coding the project. Create at least 4 test cases which specify the information used and calculated in this project. You cannot use the same data shown in the images here. Be sure to use your test cases when you run the project to verify that it produces correct results.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots, the table of test cases,  AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
