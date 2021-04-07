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

#ifndef SOLAR_SPARSEMAP_H
#define SOLAR_SPARSEMAP_H

#include <vector>
#include "core/SolARFrameworkDefinitions.h"
#include "datastructure/GeometryDefinitions.h"
#include "datastructure/Map.h"
#include "datastructure/PointCloud.h"
#include "datastructure/KeyframeCollection.h"
#include "datastructure/CovisibilityGraph.h"
#include "datastructure/KeyframeRetrieval.h"
#include "xpcf/core/refs.h"

// Definition of Map Class //
// part of SolAR namespace //

namespace SolAR {
namespace datastructure {

/**
* @class Map
* @brief <B>A sparse map is inherited from a generic map and consists of a feature point cloud, a keyframe collection, 
a covisibility graph and a keyframe retrieval.</B>
* This class provides a sparse map.
*/
class  SOLARFRAMEWORK_API SparseMap : public Map {
public:
	///
	/// @brief SparseMap constructor.
	///
	SparseMap() = default;
	SparseMap(const SparseMap& other) = default;
	SparseMap& operator=(const SparseMap& other) = default;

	///
	/// @brief ~SparseMap
	///
	~SparseMap() = default;

	///
	/// @brief This method returns the point cloud
	/// @return the point cloud
	///
	const SRef<PointCloud<FeatureCloudPoint>> & getConstPointCloud() const;

	///
	/// @brief This method returns the point cloud
	/// @param[out] pointCloud the point cloud
	/// @return the point cloud
	///
	std::unique_lock<std::mutex> getPointCloud(SRef<PointCloud<FeatureCloudPoint>>& pointCloud);

	///
	/// @brief This method is to set the point cloud
	/// @param[in] pointCloud the point cloud
	///
	void setPointCloud(const SRef<PointCloud<FeatureCloudPoint>> pointCloud);

	///
	/// @brief This method returns the keyframe collection
	/// @return the keyframe collection
	///
	const SRef<KeyframeCollection> & getConstKeyframeCollection() const;

	///
	/// @brief This method returns the keyframe collection
	/// @param[out] keyframeCollection the keyframe collection of map
	/// @return the keyframe collection
	///
	std::unique_lock<std::mutex> getKeyframeCollection(SRef<KeyframeCollection>& keyframeCollection);

	///
	/// @brief This method is to set the keyframe collection
	/// @param[in] keyframeCollection the keyframe collection of map
	///
	void setKeyframeCollection(const SRef<KeyframeCollection> keyframeCollection);

	///
	/// @brief This method returns the covisibility graph
	/// @return the covisibility graph
	///
	const SRef<CovisibilityGraph> & getConstCovisibilityGraph() const;

	///
	/// @brief This method returns the covisibility graph
	/// @param[out] covisibilityGraph the covisibility graph of map
	/// @return the covisibility graph
	///
	std::unique_lock<std::mutex> getCovisibilityGraph(SRef<CovisibilityGraph>& covisibilityGraph);

	///
	/// @brief This method is to set the covisibility graph
	/// @param[in] covisibilityGraph the covisibility graph of map
	///
	void setCovisibilityGraph(const SRef<CovisibilityGraph> covisibilityGraph);

	///
	/// @brief This method returns the keyframe retrieval
	/// @return the keyframe retrieval
	///
	const SRef<KeyframeRetrieval> & getConstKeyframeRetrieval() const;

	///
	/// @brief This method returns the keyframe retrieval
	/// @param[out] keyframeRetrieval the keyframe retrieval of map
	/// @return the keyframe retrieval
	///
	std::unique_lock<std::mutex> getKeyframeRetrieval(SRef<KeyframeRetrieval>& keyframeRetrieval);

	///
	/// @brief This method is to set the keyframe retrieval
	/// @param[in] keyframeRetrieval the keyframe retrieval of map
	///
	void setKeyframeRetrieval(const SRef<KeyframeRetrieval> keyframeRetrieval);

private:	
    friend class boost::serialization::access;
    template <typename Archive>
    void serialize(Archive &ar, const unsigned int version);

	SRef<PointCloud<FeatureCloudPoint>> m_pointCloud;
	SRef<KeyframeCollection>			m_keyframeCollection;
	SRef<CovisibilityGraph>				m_covisibilityGraph;
	SRef<KeyframeRetrieval>				m_keyframeRetrieval;
};

DECLARESERIALIZE(SparseMap);

}
}  // end of namespace SolAR
#endif // SOLAR_SPARSEMAP_H
