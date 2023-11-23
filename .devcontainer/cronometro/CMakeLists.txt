add_executable(cronometro
        cronometro.c
        )

# pull in common dependencies
target_link_libraries(cronometro pico_stdlib)

# create map/bin/hex file etc.
pico_add_extra_outputs(cronometro)

