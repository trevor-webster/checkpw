FROM ubuntu

RUN apt-get update
RUN apt-get install build-essential gdb -y

WORKDIR /w
COPY . .

CMD ["/bin/bash"]

