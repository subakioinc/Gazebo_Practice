# Velodyne sensor 속도 조절 plugin 구현

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
```bash
> export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${PX4_Simulation}/demo/velodyne_plugin/build

> export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$(pwd)
```
## 실행 
```bash
> gazebo --verbose ../velodyne.world
> ./vel 3  (new terminal)
```