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

#ifndef SOLAR_IDENTIFICATION_H
#define SOLAR_IDENTIFICATION_H

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/lexical_cast.hpp>
#include <core/SerializationDefinitions.h>
#include "datastructure/MathDefinitions.h"
#include "datastructure/GeometryDefinitions.h"
#include "core/Log.h"
#include <iostream>
#include <string>
#include <chrono>
#include <mutex>

namespace SolAR {
namespace datastructure {

/**
	* @class Identification component
	* @brief <B>This component includes identification informations specified a map.</B>
	*/
class SOLARFRAMEWORK_API Identification
{
public:
	///
	/// @brief Identification constructor
	///
	Identification();

	///
	/// @brief ~Identification
	///
	~Identification() = default;

	/// 
	/// @brief Set UUID of map
	/// @param[in] uuid: the uuid. It can be generated by using boost::uuids::random_generator()()
	/// 
	bool setUUID(const boost::uuids::uuid& uuid);

	/// 
	/// @brief Set UUID of map
	/// @param[in] uuid: the string uuid
	/// 
	bool setUUID(const std::string& uuid);

	/// 
	/// @brief Get UUID of map
	/// @return the uuid 
	/// 
	const boost::uuids::uuid& getUUID() const;

	/// 
	/// @brief Get UUID of map
	/// @return the uuid string
	/// 
    const std::string getUUIDString() const;

	/// 
	/// @brief Set name of map
	/// @param[in] name: the name
	/// 
	void setName(const std::string &name);

	/// 
	/// @brief Get name of map
	/// @return the name of map
	/// 
	const std::string& getName() const;

	/// 
	/// @brief Set author of map
	/// @param[in] author: the author name
	/// 
	void setAuthor(const std::string &author);

	/// 
	/// @brief Get author of map
	/// @return the author of map
	/// 
	const std::string& getAuthor() const;

	///
	/// @brief This method returns the last updated time of the primitive element
	/// @return the last updated time
	///
	const std::chrono::system_clock::time_point& getCreatedTime() const;

	///
	/// @brief This method updates the last updated time of the primitive element
	/// @param[in] updateTime: the update time. You can get current time by using std::chrono::system_clock::now()
	///
	void setCreatedTime(const std::chrono::system_clock::time_point& createdTime);

	///
	/// @brief This method returns the last updated time of the primitive element
	/// @return the last updated time
	///
	const std::chrono::system_clock::time_point& getLastUpdateTime() const;

	///
	/// @brief This method updates the last updated time of the primitive element
	/// @param[in] updateTime: the update time. You can get current time by using std::chrono::system_clock::now()
	///
	void setLastUpdateTime(const std::chrono::system_clock::time_point& updateTime);

	/// 
	/// @brief Set 3D bounding box of map
	/// @param[in] bbox: the bounding box
	/// 
	void setBBox3D(const BBox3Df& bbox);

	/// 
	/// @brief Get 3D bounding box of map
	/// @return the name of map
	/// 
	const BBox3Df& getBBox3D() const;

private:
	friend class boost::serialization::access;
	template<typename Archive>
	void serialize(Archive &ar, const unsigned int version);
	
private:
	boost::uuids::uuid							m_uuid;
	std::string									m_name;			
	std::string									m_author;			
	std::chrono::system_clock::time_point		m_createdTime;
	std::chrono::system_clock::time_point		m_lastUpdatedTime;
	BBox3Df										m_bbox;
};

DECLARESERIALIZE(Identification);

}
}

#endif //SOLAR_DESCRIPTORMATCH_H
