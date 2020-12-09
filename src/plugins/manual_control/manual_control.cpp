// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see
// https://github.com/mavlink/MAVSDK-Proto/blob/master/protos/manual_control/manual_control.proto)

#include <iomanip>

#include "manual_control_impl.h"
#include "plugins/manual_control/manual_control.h"

namespace mavsdk {

ManualControl::ManualControl(System& system) : PluginBase(), _impl{new ManualControlImpl(system)} {}

ManualControl::ManualControl(std::shared_ptr<System> system) :
    PluginBase(),
    _impl{new ManualControlImpl(system)}
{}

ManualControl::ManualControl(SystemImpl* system_impl) :
    PluginBase(),
    _impl{new ManualControlImpl(system_impl)}
{}

ManualControl::~ManualControl() {}

void ManualControl::start_position_control_async(const ResultCallback callback)
{
    _impl->start_position_control_async(callback);
}

ManualControl::Result ManualControl::start_position_control() const
{
    return _impl->start_position_control();
}

void ManualControl::start_altitude_control_async(const ResultCallback callback)
{
    _impl->start_altitude_control_async(callback);
}

ManualControl::Result ManualControl::start_altitude_control() const
{
    return _impl->start_altitude_control();
}

ManualControl::Result
ManualControl::set_manual_control_input(float x, float y, float z, float r) const
{
    return _impl->set_manual_control_input(x, y, z, r);
}

std::ostream& operator<<(std::ostream& str, ManualControl::Result const& result)
{
    switch (result) {
        case ManualControl::Result::Unknown:
            return str << "Unknown";
        case ManualControl::Result::Success:
            return str << "Success";
        case ManualControl::Result::NoSystem:
            return str << "No System";
        case ManualControl::Result::ConnectionError:
            return str << "Connection Error";
        case ManualControl::Result::Busy:
            return str << "Busy";
        case ManualControl::Result::CommandDenied:
            return str << "Command Denied";
        case ManualControl::Result::Timeout:
            return str << "Timeout";
        case ManualControl::Result::InputOutOfRange:
            return str << "Input Out Of Range";
        case ManualControl::Result::InputNotSet:
            return str << "Input Not Set";
        default:
            return str << "Unknown";
    }
}

} // namespace mavsdk