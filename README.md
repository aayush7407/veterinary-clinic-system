***Veterinary Clinic System***

**Overview**

The Veterinary Clinic System is a C-based application designed to manage patient records for a veterinary clinic. The system provides functionalities for adding, editing, searching, 
and removing patient records, as well as displaying patient information in different formats. The system manages pet records, including pet details and their owners' contact information.
This system is developed with the intention to help clinics manage their patient records in an organized and efficient way. The project utilizes C programming and its standard library 
to handle the core functionalities.

**Features**

Add New Patient: Add a pet with details like name, patient number, and owner contact.

Edit Patient: Modify existing patient details.

Search Patient: Find patients by patient number or phone number.

Remove Patient: Delete patient records.

Display All Patients: View all records.

Data Validation: Ensures correct phone numbers and patient details.

**Technologies Used**

Programming Language: C

Data Structures: Arrays, Structs

File Handling: File I/O for saving/loading data

Compiler: GCC (GNU Compiler Collection)

**How to Set up and Run this system:**

1.Clone the repository:
git clone https://github.com/aayush7407/veterinary-clinic-system.git

2.Navigate to the project directory:
cd veterinary-clinic-system

3.Compile the project:
gcc -o clinic_system clinic.c core.c

4.Run the program:
./clinic_system

**Usage:**
After starting the program, use the menu to: Add, edit, or remove patient records, Search for patients by number or phone and Display all patient records.


**What I Learned:**
From working on this project, I learned:

1. Data Management: How to manage structured data in C using arrays and structs to represent patient and phone records.
2. File I/O Operations: How to use file handling in C to store and retrieve data, ensuring persistence between program runs.
3. Function Modularization: How to break down the application into modular functions that handle specific tasks like adding, editing, and removing records, making the code more organized and maintainable.
4. Data Validation: How to implement custom validation for user inputs, particularly for phone numbers and patient details.
5. C Programming Techniques: Enhanced my skills in using C programming concepts like arrays, structs, and file handling, and improved my debugging skills through testing and resolving issues during development.
6. User Interface Design in Console: Improved my understanding of designing text-based menus and user interactions within the terminal, making the program user-friendly and functional.

**Acknowledgements**
I would like to thank the professors and teaching assistants of the IPC144 course at Seneca Polytechnic for providing a solid foundation through the course materials and initial code templates, 
which allowed me to focus on implementing key functionalities for the veterinary clinic management system.
