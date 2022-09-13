/*name: Anthony Ibarra        Project 1
 * course: CS 251   
 * program overview: manages files with lists of emails 
 * can show those elements in the files check or filter through those files 
 * for spam. 
 * 
*/

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include "ourvector.h"
#include <string> 
using namespace std;



     

  

//beginning of comManage function...
    // manage commands function...(manages the commands given from the user for simpler use)
void comManage(string c0, string& c1, string& c2, string& c3){
        
        istringstream inSS (c0);
        
        inSS >> c1;
        inSS >> c2;
        inSS >> c3;
        
             
        return;
    }
    // end of manage command func. *************



//beginning of load function..
    // function to check the file given to load or give error if there is no file...
void initiateLoad(string filename, vector<string>& vec){
        
    ifstream inFS; 
    ifstream infile(filename);
    int fileNum = 1;
    string value;
    infile >> value;
    
    
    if (!infile.is_open()){        // gives an error to user if file given was not found....
        
        cout << "**Error, unable to open '" << filename << "'" << endl;
       
        return;
    }
    
    
    
    while (!infile.eof()){
            
   infile >> value;
            
   fileNum++;
   vec.push_back(value);// vector used in filter from loaded spam...
            
   }
        cout << "Loading " << "'" << filename << "'" << endl;
        cout << "# of spam entries: " << (fileNum -1) << endl;

   }
//ending of load function...



//beginning of display function...
    // display function shows all elements from given file........
void displayRun(string filename){
        
    ifstream inFS; 
    ifstream infile(filename);
    int i = 0;
    string value;
    infile >> value; 
    string s1;
    
    if (!infile.is_open()){        // gives an error to user if file given was not found...
               
        return;// returns if file could not be open
    }
    
        i = filename.find("email");//displays email file
          if (i == 0){
              cout << "9";
              
              while (!infile.eof()){
                  
             getline(infile, s1);
                  cout << s1 << endl;
                
                 }
          }
        
        else{
                while (!infile.eof()){//displays spam file
            
                
               cout <<  value << endl;

                
               infile >> value;
            
                 }
        }
        
    }
//ending of display function--------
    


//beginning of check functions...
    //start of binary search for check function(finds given element or address in spamlist).....    
void binarySearch(string word, ourvector<string>& words, int& numel){
		
    int o = 0;   
    int y = 0;
    int mid = 0;
    int low = 0;
    int high = numel - 1;
    string domain;
    string username;

    int i = 0;
   
    i = word.find("@");
    if (i == -1){
       numel = 0;
       return;
    }
    
    domain = word.substr(i+1);
    username = word.substr(0,i);
 

   while (high >= low) {// finds the given element using binarySearch
      mid = (high + low) / 2;
       
      if (words[mid] < domain) {
         low = mid + 1;
      }
       
      else if (words[mid] > domain) {
         high = mid - 1;
      }    

    }
       
       string email = words[low];
       
    y = email.find(username);
    
       o = email.find("*");//finds * in element to know if it is spam or not
       numel = 1;
    
    if( y != -1){
        numel = 1;
    }
      else if (o == -1){
           numel = 0;
       }  

      return;
        
}
//***************************


    // start of checkspam function***********************
bool checkspam(string name, string filename, ourvector<string>& filevec){   
         
   ifstream inFS;
   int fileNum = 1;     

   ifstream infile(filename);

    string value;
    infile >> value; 

   if (!infile.is_open()) {

      return -1; 
   }
        
        
    while (!infile.eof()){
 

    infile >> value;
    fileNum++;
                                               
     filevec.push_back(value);
    }
      binarySearch(name, filevec, fileNum);//uses function to find if name is spam or not from a singular file


   // Done with file, so close it
    inFS.close();
    
        return fileNum;

}



    //start of checkf3files functions-----------------------------
void checkf3files(string usercommand2, ourvector<string>& youn, string loadedf){//checks if address given from user is spam or not from all three spam files available
    int i = -1;
    int j = -1;
    int k = -1;
    int l = -1;
    
    
    if (loadedf == "spamlist1.txt"){
       i =  checkspam(usercommand2, loadedf , youn);           //checks the addres in the first spamlist if it is spam then it 

    }
    
    if (loadedf == "spamlist2.txt"){                                                //skips the other spamlist because it is unnecesary
       j =  checkspam(usercommand2, loadedf , youn);
    }
    
    else if ( loadedf == "spamlist3.txt"){
        l =  checkspam(usercommand2, loadedf , youn);
      
    }
    
    else if (loadedf == "spamlist_10k.txt"){
        k =  checkspam(usercommand2, loadedf , youn);
    }
    
    if (  (i == 0) | (j == 0) | (k == 0) | (l == 0)){                 //ouputs if address is atleast spam in one file or not
        cout << usercommand2 << " is not spam" << endl;
    }
    
    else if( (i == 1) | (j == 1) | (k == 1) | (l == 1)){
        cout << usercommand2 << " is spam" << endl;
    }
    
    else{
        cout << usercommand2 << " is not spam" << endl;
    }
    
}
//ending of check functions....



//beginning of filter functions
    //takes out the spam from the email file and creat a file.txt for email without spam..
void ridf_spam(int & n, string email, string outlist, string lo, ourvector<string>& filevec){

    string outfilename;//makes file from user input name
    outfilename = outlist;

    int k = 0;
   
    
    k = checkspam(email, lo, filevec);
    
     ofstream outfile(outfilename);// write to file
    
    if (!outfile.good()){//could not open file
        
        cout << "**Error, unable to open " << "'" << email << "'" << endl;
    }
        
    else{

        if (k == 0){
           
           n++;
           outfile << email << endl;
          outfile.close();
        }     


    }
    
   
}
    //filters email list from spam and returns output file-------------------------------
void checkf_spam(string elist, string lo, string outlist, ourvector<string>& filevec){
    
    string outfilename;
    ifstream inFS; 
    ifstream infile(elist);
    int i = 0;
    int o = 0;
    string value;
    infile >> value; 
    string s1;
    
    if (!infile.is_open()){        // gives an error to user if file given was not found...
                cout << "**Error, unable to open " << "'" << elist << "'" << endl;
        return;// returns if file could not be open
    }
    

    outfilename = outlist;
    ofstream outfile(outfilename);
    
    i = elist.find("email");
    
    if (i == 0){
      
          while (!infile.eof()){
                  
             getline(infile, s1);


             ridf_spam(o, s1, outlist, lo, filevec);
              
               i++;
            } 
        outfile.close();
        
        cout << "# emails processed: " << i-1 << endl;
        
        cout <<"# non-spam emails:  " << o-8 << endl;

              
     }
    inFS.close();
}
    

    
// start of check file with filter function..(used for filter to find spam in email file)
void checkf_filter(string usercommand2, string loadedf, string outlist, ourvector<string>& youn){//checks if address given from user is spam or not from all three spam files available

    
    if (loadedf == "spamlist1.txt"){
       checkf_spam(usercommand2, loadedf, outlist, youn);           //checks the addres in the first spamlist if it is spam then it 

    }
    if (loadedf == "spamlist2.txt"){                                                //skips the other spamlist because it is unnecesary
       checkf_spam(usercommand2, loadedf, outlist, youn);
    }
    else if ( loadedf == "spamlist3.txt"){
        checkf_spam(usercommand2, loadedf, outlist, youn);
      
    }
    else if (loadedf == "spamlist_10k.txt"){
        checkf_spam(usercommand2, loadedf, outlist, youn);
    }
    else if ((loadedf != "spamlist1.txt") && (loadedf != "spamlist2") && (loadedf != "spamlist3") && (loadedf != "spamlist_10k")){
        checkf_spam(usercommand2, "null", outlist, youn);
    }
    

    
} 
//ending of filter functions---





// start of main fundtion.*----*
int main(){
    
    string usercommand;
    string usercommand1 = "asdf";
    string usercommand2 = "jkl";
    string usercommand3 = "adf";
    string load;
    
    load.clear();
    
    vector<string> spvec;
    ourvector<string> young;
    
    
    cout << "** Welcome to spam filtering app **" << endl;
      
    cout << endl << "Enter command of # to exit> ";
    
    getline(cin, usercommand);    
    
    
    // start the function to manage commands from user...
    comManage(usercommand, usercommand1, usercommand2, usercommand3);     
    
    while (usercommand != "#"){
        
         if ( (usercommand1 != "filter") && (usercommand1 != "check") &&  (usercommand1 != "load") && (usercommand1 != "display")){
            
            cout << "**invalid command "<< endl;        // input wrong command input command again
                        
        }
    
        
        if ("load" == usercommand1){       // starts the load command for given file
            
            spvec.clear();// clears past vector loaded with spam...
            initiateLoad(usercommand2, spvec);
            load = usercommand2;
            
                        
        }
        if ("display" == usercommand1){    // display the elements in the given file
            
            displayRun(usercommand2);                        
            
        }
        else if ("check" == usercommand1){  //checks for address for spam in spamfiles
            
            checkf3files(usercommand2, young, load);
            
                       
        }
        else if ("filter" == usercommand1){// filters through the file for spam and returns a file with spam removed
            
            checkf_filter(usercommand2, load, usercommand3, young);
                        
        }        
        
        
        cout << endl << "Enter command of # to exit> ";
            getline(cin, usercommand); 
        
        comManage(usercommand, usercommand1, usercommand2, usercommand3); 
        
    }
    //clears vectors for next use
            load.clear();
            young.clear();
          
    return 0;
}
