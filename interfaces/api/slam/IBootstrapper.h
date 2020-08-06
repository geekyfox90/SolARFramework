/**
 * @copyright Copyright (c) 2017 B-com http://www.b-com.com/
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SOLAR_IBOOTSTRAPPER_H
#define SOLAR_IBOOTSTRAPPER_H


#include "xpcf/api/IComponentIntrospect.h"
#include "core/Messages.h"
#include "datastructure/CameraDefinitions.h"
#include "datastructure/MathDefinitions.h"
#include "datastructure/GeometryDefinitions.h"

namespace SolAR {
using namespace datastructure;
namespace api {
namespace slam {

/**
* @class IBootstrapper
* @brief <B>Initialization SLAM using an image stream of a camera.</B>
* <TT>UUID: b0515c62-cc81-4600-835c-8acdfedf39b5</TT>
*/

class IBootstrapper : virtual public org::bcom::xpcf::IComponentIntrospect {
public:
	/// @brief IBootstrapper default constructor
	IBootstrapper() = default;

	/// @brief IBootstrapper default destructor
	virtual ~IBootstrapper() = default;

	/// @brief this method is used to set intrinsic parameters and distorsion of the camera
	/// @param[in] Camera calibration matrix parameters.
	/// @param[in] Camera distorsion parameters.
	virtual void setCameraParameters(const CamCalibration & intrinsicParams, const CamDistortion & distorsionParams) = 0;

	/// @brief This method applies a transformation (4x4 float matrix) to a set of 3D points
	/// @return FrameworkReturnCode::_SUCCESS_ if initialization succeed, else FrameworkReturnCode::_ERROR.
	virtual FrameworkReturnCode run() = 0;
};

}
}
}

XPCF_DEFINE_INTERFACE_TRAITS(SolAR::api::slam::IBootstrapper,
	"b0515c62-cc81-4600-835c-8acdfedf39b5",
	"IBootstrapper",
	"SolAR::api::slam::IBootstrapper");


#endif //SOLAR_IBOOTSTRAPPER_H

