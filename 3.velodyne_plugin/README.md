# Velodyne sensor 속도 조절 plugin 구현

## 목표 
- gazebo pub/sub 구조 익히기 

## build 방법 

- 실습 코드 git clone
```
> mkdir ~/project
> cd ~/project
> git clone https://github.com/Jaeeunykim/Gazebo_Practice.git
```

- build 디렉토리 생성
```bash
> cd ~/projects/Gazebo_Practice/3.velodyne_plugin
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
> cd ~/projects/Gazebo_Practice/3.velodyne_plugin
> gazebo --verbose ./velodyne.world
> ./vel 3  (new terminal)
```

## 구조
- [참조](https://docs.google.com/presentation/d/11C3PVAzqHK14ZM_cgx_pS-CnYFGBnMZJrMPDjCvj8r4/edit#slide=id.p) 