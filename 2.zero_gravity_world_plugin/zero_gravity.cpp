#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>

namespace gazebo
{
  class ZeroGravityPlugin : public WorldPlugin
  {
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
              // Todo
              // SetGravity() 함수이용하여 gravity 0으로 설정

            }
  };
  GZ_REGISTER_WORLD_PLUGIN(ZeroGravityPlugin)
}
