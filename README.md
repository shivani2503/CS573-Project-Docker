# Project Docker

## To Build-
1. Clone this repository
2. Switch to the cloned directory.

## To Create Image
3. Run "docker build ."

## To Run the Container
4. Run "docker run [image-id]"
   
   This step will install cmake, g++ and then start building libraries. I couldn't use github links to copy source files 
   for these libraries as they are being constantly developed changed. Hence, I have saved the stable version in my repository
   and using the same for this docker.
   
I started working on my actual parser last week so I have a running test case. In order to run that-

1. Run command "docker run -d [image-id]"
2. Run command "docker ps". Copy the container name.
3. Run command "docker exec -it [container-name-copied-above] /bin/bash". You will enter the container's terminal.
4. In the container's terminal run "cd PDFL-Parser/build"
5. And then execute ./PDFL-Parser
