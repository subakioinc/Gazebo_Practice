# 무중력 world plugin 구현

## 목표
- gazebo api 사용 및 world property 값 적용

## Gazebo GUI로 무중력 world 만들기

- 결과 
![](./result_image.png)

- Gazebo 실행
```
> gazebo
```
- gravity 값 바꾸기 
    - World tap > Physics > gravity   
![](./gui_physics.png)

----

## 코드로 무중력 world 구현하기 
- [Gazebo World Class API 참조](https://osrf-distributions.s3.amazonaws.com/gazebo/api/dev/classgazebo_1_1physics_1_1World.html#details)
- [Vector3](https://ignitionrobotics.org/api/math/4.0/classignition_1_1math_1_1Vector3.html#ac40804b7686a1152bcba217dfe5dde6f)
- Load 함수 
    - setGravity()

## Todo 구현하기 
- zero_gravity.cpp
- CMakeLists.txt 

## build 방법 

- 실습 코드 git clone
```
> mkdir ~/project
> cd ~/project
> git clone https://github.com/Jaeeunykim/Gazebo_Practice.git
```

- build 디렉토리 생성
```bash
> cd ~/projects/Gazebo_Practice/2.zero_gravity_world_plugin
> mkdir build 
```    
- Plugin 빌드
```bash
> cd build
> cmake ..
> make
```
## 환경변수 설정
- export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${PX4_Simulation}/demo/velodyne_plugin/build
```bash
> export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$(pwd)
```

## 실행 
```bash
> gazebo --verbose ../gravity.world
```
