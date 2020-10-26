# Move Box Plugin

## 목표 
-  box(link)의 x좌표를 증가 시켜 움직이는 효과를 만드는 플러그인 구현 

## move_box 디렉토리 생성 

```bash
 > mkdir ~/project/moveBox
 > cd ~/project/moveBox
  ```
- [CMakeLists.txt](./CMakeLists.txt)
- [move_box.cpp](./move_box.cpp)

## 빌드 방법 
- build 디렉토리 생성
  ```bash
  > cd ~/project/moveBox/
  > mkdir build
  ```
- 빌드 
  ```bash
  > cd build
  > cmake ..
  > make
  ```
## Plugin path 추가 
  ```bash
  > export GAZEBO_PLUGIN_PATH=$HOME/project/moveBox/build:$GAZEBO_PLUGIN_PATH
  ```
## box world 생성하기 

- Gazebo 실행
  ```bash
    > gazebo 
  ```
- Box link 추가 
- box.world 형태로 저장 
  - 저장 위치 : ~/project/moveBox/
  ![](./boxWorld.png)

## world 파일에 플러그인 추가하기 

- VSC로 box.world 열기 
  ```bash
   > cd ~/project/moveBox/
   > code ./box.world
  ```
- model element 내에 plugin 추가
  - model name ='unit_box'
  - 추가 sdf :
  ```xml
   <plugin name="move_box" filename="libmove_box.so"/>
  ```
  ![](./boxWorldSDF.png)

## box world 실행 
  ```bash
  > cd  ~/project/moveBox/
  > gazebo ./box.world
  ```


