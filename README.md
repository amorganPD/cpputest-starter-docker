# cpputest-starter-docker
Starter project for cpputest that uses docker to wrap the environment for windows development

To build the container run the following:

```bash
docker build . -t starterexample:latest
``` 

To run the tests run the following from project root 

```bash
docker run -itv $(PWD):/project  starterexample:latest
```
