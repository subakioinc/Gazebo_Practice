# Move Box Plugin

## 목표 
- Model Plugin 구현 및 빌드 방법 익히기
- Message Publish를 통한 model 제어 구현

## build 방법 
- 실습 코드 git clone
  ```bash
  > mkdir ~/project
  > cd ~/project
  > git clone https://github.com/Jaeeunykim/Gazebo_Practice.git
  ```

- build 디렉토리 생성
  ```bash
  > cd ~/projects/Gazebo_Practice/5.move box/
  > mkdir build
  ```
- build 

  ```bash
  > cd build
  > cmake ..
  > make
  ```
- Plugin Path 추가 
  ```bash
  > export GAZEBO_PLUGIN_PATH=$HOME/projects/Gazebo_Practice/5.move box/build:$GAZEBO_PLUGIN_PATH
  ```
