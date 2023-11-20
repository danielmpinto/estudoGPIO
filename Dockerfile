
FROM ubuntu:20.04
ENV REFRESHED_AT 2023-11-20
ENV PROCESSOR RP2040
ENV TZ=America/São_Paulo
ENV DEBIAN_FRONTEND=noninteractive
WORKDIR /home/dev

RUN apt-get update \
&& apt-get -y install git cmake gcc-arm-none-eabi python3 g++ libnewlib-arm-none-eabi build-essential

# rp2040 related staff
RUN git clone https://github.com/raspberrypi/pico-sdk --branch master /opt/sdk/pico-sdk \
    && cd /opt/sdk/pico-sdk \
    && git submodule update --init \
    && cd /home/dev \
    && git clone https://github.com/raspberrypi/pico-examples --branch master
ENV PICO_SDK_PATH=/opt/sdk/pico-sdk
