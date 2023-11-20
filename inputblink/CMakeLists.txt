add_executable(inputblink
        btn.c
        )

# pull in common dependencies
target_link_libraries(inputblink pico_stdlib)

# create map/bin/hex file etc.
pico_add_extra_outputs(inputblink)

