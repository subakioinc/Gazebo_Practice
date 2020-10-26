#include <gazebo/gazebo.hh>

namespace gazebo
{
  class HelloPlugin : public WorldPlugin
  {
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
               printf("Hello World!\n");
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(HelloPlugin)
}
