# ddsmq
A type safe, brokerless queue built with DDS

## Description
This project provides a type safe API for reading messages from an ordered queue. Unlike most MQ protocols, this queue implementation is type safe, meaning that an application receives serialized samples instead of raw byte buffers.

The implementation supports multiple queue's. Because the implementation is DDS based, the queue doesn't require a broker. Data is delivered using a reliable protocol.

## Building
A simple build.sh file is included that builds the project. Note that the build.sh file is written for [OpenSplice](https://github.com/PrismTech/opensplice).

## Usage
Under construction
