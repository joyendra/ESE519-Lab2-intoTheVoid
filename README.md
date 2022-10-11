# ESE519-Lab2-intoTheVoid
Lab 2 of ESE 5190 Embedded Systems 

## Lab 2A - Guide to installing softwares
To get started with this lab you'd need your all reliable old friend - QTPy! And some additional softwares whose names might seem daunting, but in reality they're your friends. This lab helps you take a leap of faith from the safe cradles of MicroPython to the barebone C language which will be used in the coming labs.
Let's start by refering the [`official Getting Started documentation`](https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf) for the RaspberryPi Pico C/C++ SDK. If you are not using a Raspberry Pi to program your board (which I am pretty sure you aren't), it's neat to go through the specified section in the document rather than jumping directly to installations.

![image](https://user-images.githubusercontent.com/36339255/194967732-4419a6c2-a2be-47da-908f-e176b47e74b0.png)

## The Softwares!
Since I used a Windows device, running Windows 10 (64-bit), this guide will follow the steps for the same. Refer to other guides if you use a different setup.
The tools we'd need for this lab are:
- [ARM GNU Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/downloads)
- [Cmake](https://cmake.org/download/)
- [Build Tools for Visual Studio](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2022)
- [Python 3.10](https://www.python.org/downloads/windows/)
- [Git](https://git-scm.com/download/win)

If you feel confident in setting these up, you can jump to [post installation](/joyendra/ESE519-Lab2-intoTheVoid/blob/main/README.md#post-installation) section

## Installation Walkthrough <sub> (Done on 10th October, 2022. Stable versions might have changed if viewing much later) </sub>
Let's install the softwares one-by-one.
### 1. ARM GNU Toolchain

After you click on the link, you should scroll down to the stable releases and be able to locate something like this

![image](https://user-images.githubusercontent.com/36339255/194969391-e65a0ef4-803f-462e-9e52-d7f40902ecac.png)

Click on the highlighted link to start downloading. 
Now click on the .exe file and a wizard like this should pop open

![Screenshot (29)](https://user-images.githubusercontent.com/36339255/194969505-0a0d5180-0d07-4eb8-9334-e21670cae3e0.png)

Follow the instructions on screen to install the software. During installation you should tick the box to register the path to the Arm compiler as an environment variable in the Windows shell when prompted to do so.

### 2. Cmake

CMake is an open-source, cross-platform family of tools designed to build, test and package software. CMake is used to control the software compilation process using simple platform and compiler independent configuration files, and generate native makefiles and workspaces that can be used in the compiler environment of your choice. 

Click on the link and click on [**latest stable**](https://cmake.org/download/#latest) to reach something like this 
![image](https://user-images.githubusercontent.com/36339255/194969971-e7ae87d3-8f28-40c7-8944-67cc39d85bc6.png)

Select the .msi file which stands for Microsoft Installer and follow the wizard. During the installation add CMake to the system *PATH* for all users when prompted by the installer.

### 3. Build Tools for Visual Studio

The screenshot explains what Build Tools for Visual Studio are and to click what to start the installation.

![image](https://user-images.githubusercontent.com/36339255/194970533-8d14466b-409f-494b-a57e-dae1b3afbb89.png)

Select the follow settings (C++ build tools and check the boxes on the right as shown)

![image](https://user-images.githubusercontent.com/36339255/194970726-6b487a93-5078-46af-a168-c60263d8d783.png)

Now you should be able to launch the Build Tools command line by clicking **launch** and should look something like this

![image](https://user-images.githubusercontent.com/36339255/194970967-4c46758f-9ab1-464f-aaa9-5347d41aab03.png)

### 4. Python 3.10

Python can be simply installed by going to the link provided and clicking on 

![image](https://user-images.githubusercontent.com/36339255/194971153-a54f07b4-973c-4308-96f1-c7074a90e304.png)

During the installation, ensure that it’s installed 'for all users' and add Python 3.10 to the system PATH when prompted by
the installer. You should additionally disable the MAX_PATH length limit when prompted at the end of the Python
installation.

You can check the installation by **Win+R -> type "cmd" -> Run -> type "python --version"**. If you get 3.10.x, you are good to go!

### 5. Git

Go to the link and click on 

![image](https://user-images.githubusercontent.com/36339255/194971448-3b04e848-10b1-44a5-8c71-9e8ee0f7573e.png)

Follow these settings 

![image](https://user-images.githubusercontent.com/36339255/194972921-ac153570-22af-4f9b-ac1e-97a4aee41ecc.png)

![image](https://user-images.githubusercontent.com/36339255/194973215-05ed26b2-7c75-4204-ba5e-fe5f856a8ae3.png)

![image](https://user-images.githubusercontent.com/36339255/194973431-baa788ee-8916-4f2d-9430-dc04892eb3bf.png)

Rest all settings are default unless you want to change them.

## Post Installation
Now that we have installed the files, time to start with running the **hello-usb** example.

Create a new folder and run the following in your command line or git bash.

  1. C:\Users\pico\Downloads> git clone -b master https://github.com/raspberrypi/pico-sdk.git (Clones the SDK to local environment)
  2. C:\Users\pico\Downloads> cd pico-sdk (changes working directory to SDK)
  3. C:\Users\pico\Downloads\pico-sdk> git submodule update --init (initializes a submodule update)
  4. C:\Users\pico\Downloads\pico-sdk> cd .. (moves out of directory)
  5. C:\Users\pico\Downloads> git clone -b master https://github.com/raspberrypi/pico-examples.git (Clones exmaples to local environment)
  
To build hello-world the suggested command from Build Tools is  
  `C:\Users\pico\Downloads> setx PICO_SDK_PATH "..\..\pico-sdk"`

But sometimes one may encounter an issue like 
  ```Installing, this may take a few minutes...
      WslRegisterDistribution failed with error: 0x80370102
      Error: 0x80370102 The virtual machine could not be started because a required feature is not installed.
  ```
In such a case a neat trick is to set the path to the SDK manually.

For that navigate to **Folder containing pico-examples -> move to build folder -> Find the CMakeCache file where PATH will be uninitialized -> Copy path to SDK and paste it there -> Save and Exit** 
This should fix the issue.

Then it's easy.
  - Mount the device
  - Reboot the device by pressing BOOT and RESET
  - Drag and drop the hello-usb.uf2 file onto the board
  - Go to Device Manager to determine the COM PORT being used
  - Open Putty and select Serial
  - Enter the COM PORT and select baud rate to 115200
  - You should see
 
![Screenshot (32)](https://user-images.githubusercontent.com/36339255/194975261-2f185d91-b1b8-4e78-aae0-a1957f18bd97.png)

That's all for the first example! Happy building!

