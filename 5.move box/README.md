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
## box world 생성하기 

- Gazebo 실행
  ```bash
    > gazebo 
  ```
- Box link 추가 
- box.world 형태로 저장 
  - 저장 위치 : ~/projects/Gazebo_Practice/5.move box/
  ![](./boxWorld.png)

## world 파일에 플러그인 추가하기 

- VSC로 box.world 열기 
  ```bash
   > cd ~/projects/Gazebo_Practice/5.move box/
   > code ./box.world
  ```
- model element 내에 plugin 추가
  - model name ='unit_box'
  - 추가 sdf :
  ```xml
   <plugin name="move_box" filename="libmove_box.so"/>
  ```
  ![](./boxWorldSDF.png)

## box.world 실행 
```bash
> cd  ~/projects/Gazebo_Practice/5.move box/
> gazebo ./box.world
```
