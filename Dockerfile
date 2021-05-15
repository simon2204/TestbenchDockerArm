FROM arm64v8/ubuntu

RUN apt-get -y update \
&& apt-get -y upgrade

RUN DEBIAN_FRONTEND=noninteractive apt -y install git-all

RUN apt-get -y install zip

RUN curl -s https://packagecloud.io/install/repositories/swift-arm/release/script.deb.sh | sudo bash

RUN apt-get -y install swiftlang=5.4-3-ubuntu-focal

WORKDIR /home

COPY TestbenchDirectories TestbenchDirectories

RUN git clone https://github.com/simon2204/TestbenchAPI.git \
&& cd TestbenchAPI \
&& swift package resolve \
&& swift package update \
&& swift build -c release

WORKDIR /home/TestbenchAPI

ENTRYPOINT [ "swift", "run", "-c", "release", "--skip-build", "Run", "serve", "--hostname", "0.0.0.0", "--port", "8080" ]

EXPOSE 8080