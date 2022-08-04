## Generate cbindgen for go

````
cd libgo_owasm
cbindgen --config cbindgen.toml  --output ../api/bindings.h
```

## Build shared object library

Currently, we support only build on linux. Osx build will be available.

- run `make docker-images` to pre-built dependencies
- run `make release` to build current code to `libgo_owasm.so`
````
