#pragma once
#ifndef HELPER_FUNC_H
#define HELPER_FUNC_H
/*
 * This file contains function declarations 
 * for helper functions for the Liszt project.
 * See helper.c for the definitions.
 */


/*
 * Given the name of a faulty command,
 * exits the program with a 1 error code
 * and prints some help information
 * to the console
 */
void sendErrorMessage(char* command);


/*
 * Prints the name of the current note
 * to the console
 */
void printCurrentNoteName();


/*
 * Fills the given currentNoteName char array
 * with the name of the current note name 
 */
void getCurrentNoteName(char* currentNoteName);


/*
 * Returns the name and path of the current working note
 */
void getCurrentNote(char* currentNotePath, char* currentNoteName);


/*
 * Fills the given currentNotePath char array
 * with the name of the current note path
 */
void getCurrentNotePath(char* currentNotePath);


/*
 * Sets the current note to 'default'
 */
void setToDefault();


/*
 * Finds the path to the data_file
 */
void getDataFile(char* dataFile); 


/*
 * Given the dir in which a note is located,
 * either ~/.liszt/notes or ~/.liszt/archive,
 * finds the full path to the note 
 */
void getNotePath(char* dirName, char* noteName, char* notePath);


/*
 * Given two filepaths, copies the text from the
 * first file into the second file
 */
void copyFile(char* firstFile, char* secondFile);


/*
 * Given the name of a file, returns the int
 * value of the number of lines in the file
 */
int getFileSize(char* filename);


/*
 * Given two strings, compares them without case
 * sensitivity (whereas strcmp does)
 * Returns 0 if string are not the same, -1 if they are 
 */
int checkSame(char* first, char* second);


/*
 * Given the path to a directory, populates
 * the given files array with the names of files
 * in the directory
 */
void readDirectory(char* dirName, char* files[], int* numFiles);


/*
 * Given the path to a directory, prints the names
 * of the files in that directory (not the paths)
 */
void printDirectory(char* dirName, char* shortName);

/*
 * Given a filename and a row number, 
 * confirms that the entered row is a valid row number.
 * Returns 0 if successful, -1 if not
 */ 
int checkRow(char* filename, char* charRow);


/*
 * Given the data_file.json file and a filename and a
 * dirname, overwrites the existing data_file.json 
 */
void overwriteFilenameToDataFile(char* filename, char* dirname);


/*
 * Given the data_file.json file and a filename, 
 * changes the filename held in data_file 
 */
void writeFilenameToDataFile(char* filename);


/*
 * Given a prompt, captures the user's answer as either 'y' or 'n'
 */ 
void requestUserPermission(char* prompt, char* decision);


#include "helper.c"
#endif

