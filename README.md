# Table of Contents
1. Repository Breakdown
  - This shows what files are included
2. Professional Self-Assessment
  - A holistic introduction of myself and my skills presented in this portfolio
3. Software Design and Engineering Enhancement
4. Algorithms and Data Structure Enhancement
5. Databases Enhancement

# CS-499 Repository Breakdown
This Repository houses the following items:
- The Original Artifacts of pet.java and banking.cpp
- A compressed version of my Code Review describing pet.java and banking.cpp
- A Plan explaining these artifacts and how I plan to enhance them
- The Enhanced versions of the above artifacts
  - EnhancedPet.zip is an Android Application including a login/signup and pet check-in systems.
  - EnhancedBanking.zip is a Java version of banking.cpp which includes an encrypted username/password system & a non-hardcoded structure which holds client information
- Narratives explaining the enhancements and the skills I have demonstrated

Note: Though there are only two artifacts, there were a total of three enhancements performed for this course. This is shown by the three narrative files.

# Professional Self-Assessment:
I have been in computer science program since the beginning of 2022, though I have been working on this degree since 2020. I was previously a math major who turned to the computer science program in order to further develop skills that would aid me in my goals to become a data analyst. I have learned a plethora of skills in this program including not only how to work in different IDEs and languages, but also the value of professionalism. One of the biggest skills I learned was the values of proper file naming conventions, tone and formatting throughout my documents, and overall how to properly showcase my skills to potential employers. Learning the technical skills is also important, but they aren't much use when you can't properly communicate this. 
Throughout my files you will notice they are properly named in order to easily understand what is contained in each, all code files include proper in-line comments which allow future developers to access this information, understand what it is used for and how it works. Thus, this practice helps promote my skills of collaborating within a team environment. Moreover, my work that is written within each narrative allows stakeholders to easily be communicated with as I took my technical skills and presented them in a way that is easy to understand for a non-technical audience.  

Throughout my first (and third) artifact's enhancement (pet.java) I showcased my work in both software engineering, databases, and security. I both designed and created an android application essentially from nothing but the idea of a pet check-in service which includes user-friendly UI that also upholds android application standards, databases for both the pet and user that are separate, but still linked to one another, and created a secure, encrypted login/sign-up system. 
My second artifact's (banbking.cpp) enhancement upholds the topics of both data structures and algorithms, as well as security. I switched the original language over to Java in order to showcase my understanding of java hashing algorithms, which I used to encrypt the username and password systems. Moreover, I upgraded the previously hardcoded algorithm which held the client's information, into an arraylist which allows a user to easily input new client information from the main menu. 
As a whole, these enhancements showcase my abilities in keeping a secure mindset throughout development, creating user-friendly applications which anyone should be able to use, and my skills in promoting and explaining this information to non-technical users. 

# Software Design and Engineering Enhancement
For this enhancement, I chose the artifact pet.java, a project that originated from a previous course, IT 145. It is a simple java file which includes a constructor, setter and getter methods. There is not an explicit goal with this artifact, however I created my enhancement with the goal of creating a working check-in application. I used Android Studio to create a user-friendly application which would gather the pet's information. For this first artifact, I focused on creating the home page and the respective UI elements to gather the pet's information from the user. This enhancement is further developed within the Databases Enhancement below. 

### List of Enhancements Performed
1. Changed the IDE over to Android Studio in order to change this .java file into a working Android Applicaiton
2. Created an appealing background displaying the application's title and a short description
3. Used a cardview to house text and a button which takes the user to the request form which includes spaces for the user to input the pet's name, species, how many days the pet is staying, and if they want their dog groomed.
4. Coded the logic behind each button
 - On the main screen the "Take me there now!" button switches the screen over to the request form screen
 - On the request form screen, the "Request" button's functionality is further developed within the database enhancement
5. Implemented in-line comments throughout each java file which explains what each file is for and how it functions

# Algorithms and Data Structure Enhancement
For this enhancement, I chose the artifact banking.cpp, a project that originated from a previous course, CS340. This is a simple banking software which first prompts the user for their username/password and then takes them over to a main menu which they can then work through. The original project included finding the vulnerabilities within this file, and then fixing each one. I originally implemented verification for the user's choice and added a username verification. For this enhancement, I focused on creating hashing algorithms which would further encrypt the username and password and thus verify each through this encryption. 

### List of Enhancements Performed
1. Changed the language over to Java to showcase my skills with Java Hashing Algorithms
2. Added another file which would house the new client structure
3. Created an ArrayList structure using the new file 
4. Implemented in-line comments throughout both files which explain what they are for and how they function
5. Implemented MD5 (Message Digest) Hashing algorithms for the username and password
6. Used these algorithms to create password and username checks against the now encrypted password and username values
7. Added a method which allows a user to add a new client from the main menu (Using the ArrayList structure from above)
8. Upgraded the previous display option to a more readable version which includes the first and last name as well as the client's service choice
9. Implemented verification throughout each function, accounting for improper user actions

# Databases Enhancement
For this enhancement, I continued to work on the enhancement I used for the Software Design and Engineering enhancement. For this, I added a database behind the pet's information request page using SQLite. I then added login and sign-up screens which also hold a user's database behind them (also using SQLite). For this enhancement, I solely focused on the database design and developing my skills using SQL within a Java encironment. 

### List of Enhancements Performed
1. Added Login and Signup screens
2. Added a Database behind the Check-in Request screen which houses pet information
  - This database is fully implemented to be able to be read from, verifed against, updated, and deleted from.
4. Added a Database behind the Login/Signup screens which houses the user's information
  - Like the Pet's database, this one is also implemented to be able to be read from, verified against, updated, and deleted from.
  - When Signing up, the system automatically checks if the user already exists, and thus warns them against it
  - There are multiple verification checks to see if the user left in empty fields, if the program malfunctions somewhere, etc.
  - When logging in, the system verifies against information on users who have previously signed up
  - These databases are not hardcoded, meaning this is a secure system.
