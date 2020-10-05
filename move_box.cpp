#include <functional>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <ignition/math/Vector3.hh>


namespace gazebo 
{
    class MoveBoxPlugin : public ModelPlugin
    {
        public: void Load(physics::ModelPtr _parent, sdf::ElementPtr)
        {
            //model에 모델 포인터를 저장 
            this->model = _parent;

            // update이벤트를 듣는다. 이 이벤트는 시물레이션의 iteration마다 broadcast 한다 
            this->updateConnection = event::Events::ConnectWorldUpdateBegin(std::bind(&MoveBoxPlugin::OnUpdate, this));
        }
        
        // World의 update 이벤트가 시작되면 호출된다
        public: void OnUpdate(){
            
            //모델의 x 값을 0.001씩 업데이트
            x = x + 0.001;
            
            //model에 적용
            ignition::math::Pose3d pose = ignition::math::Pose3d(ignition::math::Vector3d(x, 0, 0),ignition::math::Quaterniond(0, -0, 0));
            this->model->SetLinkWorldPose(pose, "link");
            
            
        }

        // model 포인터
        private: physics::ModelPtr model;

        // update 이벤트 포이터
        private: event::ConnectionPtr updateConnection;

        // box의 pose 정보 
        private: double x = 0;
    };
    // 이 플러그인을 시물레이션 등록 
    GZ_REGISTER_MODEL_PLUGIN(MoveBoxPlugin)
}
