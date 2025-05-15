# FILE-MANAGEMENT-TOOL

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: RACHAKONDA ASHOK

*INTERN ID*: CTO8DA473 

*DOMAIN*: C++

*DURATION*: 8 WEEKS

*MENTOR*: NEELA SANTOSH KUMAR

#Here’s a detailed description of the given C++ code:

---

 *Overview:*

This C++ program allows the user to *write to, **read from, and **append to* a text file. It uses the fstream library for file operations and provides a menu-based interface for user interaction.

---

 📁 *Included Libraries:*

cpp
#include <iostream>  // For input/output operations
#include <fstream>   // For file handling (ifstream, ofstream)
#include <string>    // For using the string data type


---

🧩 *Function Descriptions:*

 1. writeFile(const string& filename)

* Opens the file for *writing* (ofstream).
* If the file is successfully opened:

  * Prompts the user to enter lines of text.
  * Writes each line to the file until the user types "END".
  * Closes the file.
* If the file fails to open, an error is shown.

 2. readFile(const string& filename)

* Opens the file for *reading* (ifstream).
* If the file is open:

  * Reads and displays the contents line-by-line.
* If the file fails to open, an error message is shown.

 3. appendFile(const string& filename)

* Opens the file in *append mode* (ofstream with ios::app).
* If the file is open:

  * Prompts the user to input lines to append.
  * Continues until "END" is entered.
  * Closes the file.
* Shows an error if the file can’t be opened.

---

 🧠 **Main Function (main)**

1. *Prompts user* to enter a filename.
2. *Displays a menu* in a loop:

   * 1 → Call writeFile() to overwrite content.
   * 2 → Call readFile() to read and display file content.
   * 3 → Call appendFile() to add new content.
   * 4 → Exit the application.
3. Handles *invalid choices* using a default case in the switch.

---

 🔄 *Looping Logic:*

* Uses a do-while loop to continuously display the menu until the user chooses to exit (choice == 4).

---

💡 *Key Points:*

* cin.ignore() is used after cin to handle leftover newline characters.
* The sentinel value "END" is used to signal the end of input in both write and append modes.
* Error handling is included for file operations.

---

 ✅ *Sample Use Case:*

A user wants to create a diary:

1. Runs the program, enters "diary.txt" as filename.
2. Chooses option 1 to start writing.
3. Later, chooses option 3 to add more entries.
4. Can always use option 2 to read previous entries.

*CONCLUSION*

   The conclusion is, i am gathering the all the tools from youtube and other social medias and "vs code" is use to run the code and execute it.
   and this code can perform read,write,append the data in a file that's why we named as "FILE MANAGEMENT
   TOOL".
   
