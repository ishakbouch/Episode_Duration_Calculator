# Episode_Duration_Calculator
The Episode Duration Calculator repository is a collection of C++ files that provide two implementations of a calculator for calculating the total duration of watching a TV series. The calculator takes into account the duration of each episode and the number of episodes.
**README**

This repository contains two C++ files: `calculator.cpp` and `calculator_with_interface.cpp`. These files implement an episode duration calculator, which calculates the total duration of watching a TV series based on the duration of each episode and the number of episodes.

**`calculator.cpp`**

This file is a command-line version of the episode duration calculator. It uses the standard input and output streams for user interaction. Here's how it works:

1. The program prompts the user to enter the duration of each episode in minutes.
2. The user enters the episode duration.
3. The program prompts the user to enter the number of episodes.
4. The user enters the number of episodes.
5. The program calculates the total duration in hours and minutes.
6. The program outputs the calculated duration in the format: `<hours>h and <minutes>min`.

**Compilation and Execution:**
To compile and run `calculator.cpp`, you can use the following commands in a terminal:

```bash
g++ calculator.cpp -o calculator
./calculator
```

**`calculator_with_interface.cpp`**

This file extends the functionality of the episode duration calculator by adding a graphical user interface (GUI) using the GTK+ library. The GUI version provides a more user-friendly interface for input and displays the calculated duration in a label. Here's how it works:

1. The program creates a GTK+ window with various widgets for input and output.
2. The user enters the episode duration and the number of episodes in the provided entry fields.
3. The user clicks the "Calculate" button.
4. The program retrieves the input values from the entry fields, performs the calculation, and updates the result label with the calculated duration.
5. The user can repeat the calculation by modifying the input values and clicking the "Calculate" button again.

**Compilation and Execution:**
To compile and run `calculator_with_interface.cpp`, you need to have the GTK+ library installed on your system. Assuming you have GTK+ installed, you can use the following commands to compile and run the program:

```bash
g++ calculator_with_interface.cpp -o calculator_with_interface `pkg-config --cflags --libs gtk+-3.0`
./calculator_with_interface
```

The program will display a GUI window where you can enter the episode duration and the number of episodes. After clicking the "Calculate" button, the calculated duration will be shown in the result label.

Please note that the GUI version requires the GTK+ library and its development packages to be installed on your system. Additionally, the compilation commands may vary depending on your operating system and the specific GTK+ installation.

For more information and detailed instructions, please refer to the code files and comments in this repository.
