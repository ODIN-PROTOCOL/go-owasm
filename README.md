## Generate bindings.h for go

```
cd libgo_owasm
cargo build --release
```

## Build shared object library

Currently, we support only build on linux. Osx build will be available.

- run `make docker-images` to pre-built dependencies
- run `make releases` to build current code to `libgo_owasm.so` and `libgo_owasm.dylib`
