FROM ubuntu:latest
RUN apt-get update && apt-get -y install gcc make g++ cpputest
RUN ln -s /usr/lib/x86_64-linux-gnu/libCppUTest.a /usr/lib/libCppUTest.a
RUN ln -s /usr/lib/x86_64-linux-gnu/libCppUTestExt.a /usr/lib/libCppUTestExt.a
COPY . /project
WORKDIR /project/app/tests
CMD ["make"]
