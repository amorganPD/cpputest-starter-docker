FROM ubuntu:16.04

RUN apt-get update && apt-get -y install gcc make g++ cpputest \
    --no-install-recommends \
    && rm -rf /var/lib/apt/lists/*

RUN ln -s /usr/lib/x86_64-linux-gnu/libCppUTest.a /usr/lib/libCppUTest.a && \
    ln -s /usr/lib/x86_64-linux-gnu/libCppUTestExt.a /usr/lib/libCppUTestExt.a

WORKDIR /project/app/tests
CMD ["make"]
