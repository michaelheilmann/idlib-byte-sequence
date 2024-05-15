# `idlib_byte_sequence_fill`

## C Signature
```
idlib_status
idlib_byte_sequence_fill
  (
    void* p,
    size_t n,
    uint8_t v
  );
```

## Description
Assign each Byte of a memory block `(p,n)` the specified value.

## Parameters
- `p` A pointer to the memory block.
- `n` The size, in Bytes, of the memory block.
- `v` The value to assign to each element in the memory block.

## Return values
`IDLIB_SUCCESS` on success.
The following error status codes are returned on failure:
- `IDLIB_ARGUMENT_INVALID` `p` is a null pointer.
