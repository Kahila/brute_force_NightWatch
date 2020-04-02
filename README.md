# brute_force_NightWatch

This repo contains a programe that can be used to brute force passwords with a specific username, this can be used in situations where one has more then one password and is unable to try all of them at manualy.

the programe is made up of two parts
1. A c programe that generates a javascript with all the passwords to be tested.
2. A javascript files that will be run using nightwatch js.

### Requirements

In order to run this programe make sure you have *npm (node package manager)* abd the *chrome browser*  installed and make sure that you have the *gcc compiler* installed but if you'e using linux or unix then you don't have to worry as those operating systems already have the gcc compiler.

### Running the programe

1. go into the scrap directory.

![alt text](https://github.com/Kahila/brute_force_NightWatch/blob/master/imges/img.png)

2. Install the programs dependancies using **npm install**

![alt text](https://github.com/Kahila/brute_force_NightWatch/blob/master/imges/img2.png)

3. move back to the root directory and open the run.sh file using a text editor of your choice

![alt text](https://github.com/Kahila/brute_force_NightWatch/blob/master/imges/img3.pngi)

![alt text](https://github.com/Kahila/brute_force_NightWatch/blob/master/imges/img4.png)

4. past the *url of the login page*, the *name of the html input field*, replace password with the  *password file name*, the "id of the button or input for submiting" and lastly the wordlist containing the passwords, if you do not have a wordlist for testing you can use the rockyou.txt file in the repo.

![alt text](https://github.com/Kahila/brute_force_NightWatch/blob/master/imges/img5.png)

5. save and exit the text editor.

6. run the script by using *sh run.sh*
![alt text](https://github.com/Kahila/brute_force_NightWatch/blob/master/imges/img6.png)
