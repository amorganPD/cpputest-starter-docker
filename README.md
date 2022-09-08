# cpputest-starter-docker
Starter project for cpputest that uses docker to wrap the environment for windows development

To build the container run the following:

```bash
> ./scripts/docker-build.sh
``` 

To run the tests run the following from project root 

```bash
> ./scripts/run-tests.sh
```
___

## Notes

- If using `git bash` use:
  ```bash
  docker run --rm -itv /$(PWD):/project starterexample:latest
  ```
  which escapes the path.

- On Windows 10, in order to get mounting to work I had to go to the Docker Settings and unshare drive > apply, then share the drive > apply.
