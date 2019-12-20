# getting base image ubuntu
FROM ubuntu



RUN apt-get update
RUN apt-get install -y cmake
RUN apt install -y g++

COPY PDFL-Parser PDFL-Parser/
COPY start.sh .

RUN chmod +x start.sh
RUN ./start.sh








