# Introduction #

So how do you start developing Zoundry Raven?  Minimally you need to install Python, followed by all of the Python Libraries that Zoundry Raven depends upon.  Once that is done, you need to download the Zoundry Raven source code, verify that it runs correctly for you, and then start hacking!  This wiki page will take you through these necessary steps in sufficient detail to get you started.

_Note:  all of the files you should need are available in the "Downloads" section of this Google Code project page._

_Note:  in order to develop Zoundry Raven, you will need to install several pieces of software on your computer.  To keep your workstation clean, you may want to consider doing your development on a virtual machine.  See http://www.virtualbox.org/ for details._


# Details #

### Install Python ###
Download Python 2.4.4 from this project's "Downloads" section.  Once downloaded, install it to a well-known location such as C:\RavenDevelopment\python2.4

### Install Raven Dependencies ###
Download and unpack the RavenDependencies.zip from this project's "Downloads" section.  Once downloaded, unpack and install each dependency, in the following order:

  1. wxMSW-2.8.9-Setup.exe
  1. wxPython2.8-win32-unicode-2.8.9.1-py24.exe
  1. 4Suite-XML-1.0.2.win32-py2.4.exe
  1. ctypes-1.0.1.win32-py2.4.exe
  1. egenix-mx-base-2.0.6.win32-py2.4.exe
  1. egenix-mx-experimental-0.9.0.win32-py2.4.exe
  1. PIL-1.1.6.win32-py2.4.exe
  1. pysqlite-2.3.3.win32-py2.4.exe
  1. pywin32-212.win32-py2.4.exe
  1. PyXML-0.8.4.win32-py2.4.exe
  1. pycrypto-2.0.1.win32-py2.4.exe
  1. pytz-2008i.zip

NOTE: Windows Vista owners - you should install the above with Administrator priviledges (right click, Run-As-Administrator).

There are a couple of tricky dependencies, including:

  1. rng.py
  1. uTidy.py

These two dependencies come with their own .readme files.  Please see those files for details on how to install.

To install pytz-2008i.zip, unpack it to a temporary directory and type in "C:\path\to\python24\python.exe setup.py install" from the command prompt.

_Note: cygtidy-0-99-0.dll can be copied to either your system32 directory or your python24 directory (drop it right next to your python.exe)._


### Download Zoundry Raven Source Code ###
Use Subversion to download the Zoundry Raven source from this Google Code project.  See the "Source" tab for details.

### Test that Zoundry Raven Works ###
Now it's time to run Zoundry Raven, since you've gone to all this trouble.  To run, open a command/cmd prompt and cd into the following directory:

C:\PathToZoundryRaven\src\python

Then type:

C:\PathToPython24\python.exe zoundry\blogapp\raven.py

It should work!

_Note: it might take some time the first time you run it, since Python will have to compile a lot of stuff.  Future launches should be faster._