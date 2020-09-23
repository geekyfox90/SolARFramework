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

#ifndef SOLAR_POINTCLOUD_H
#define SOLAR_POINTCLOUD_H

#include <vector>
#include "core/SolARFrameworkDefinitions.h"
#include "datastructure/GeometryDefinitions.h"
#include "datastructure/CloudPoint.h"
#include "xpcf/core/refs.h"
#include <map>

// Definition of PointCloud Class //
// part of SolAR namespace //

namespace SolAR {
namespace datastructure {

/**
* @class PointCloud
* @brief <B>A 3D cloud composed of multiple CloudPoints.</B>
* This class provides a point cloud.
*/
class  SOLARFRAMEWORK_API PointCloud {

   public:
		///
		/// @brief Cloudpoint constructor.
		///
		PointCloud() = default;
		PointCloud(const PointCloud& other) = default;
		PointCloud& operator=(const PointCloud& other) = default;

		///
		/// \brief ~PointCloud
		///
		~PointCloud() = default;

		///
		/// @brief This method returns the point cloud
		/// @return the point cloud
		///
		const std::vector<CloudPoint>& getConstPointCloud() const;

		///
		/// @brief This method returns the point cloud
		/// @return the point cloud
		///
		std::vector<CloudPoint>& getPointCloud();

    private:
        std::vector<CloudPoint> m_points;
};

}
}  // end of namespace SolAR

#endif // SOLAR_POINTCLOUD_H
