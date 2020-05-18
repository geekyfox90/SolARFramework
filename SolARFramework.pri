HEADERS += interfaces/SharedBuffer.hpp \
interfaces/SharedCircularBuffer.hpp \
interfaces/SharedFifo.hpp \
interfaces/core/SolARFrameworkDefinitions.h \
interfaces/api/display/I2DOverlay.h \
interfaces/api/display/I3DOverlay.h \
interfaces/api/display/IImageViewer.h \
interfaces/api/display/IMatchesOverlay.h \
interfaces/api/display/I3DPointsViewer.h \
interfaces/api/features/IContoursExtractor.h \
interfaces/api/features/IDescriptorMatcher.h \
interfaces/api/features/IContoursFilter.h \
interfaces/api/features/IDescriptorsExtractor.h \
interfaces/api/features/IDescriptorsExtractorSBPattern.h \
interfaces/api/features/IKeypointDetector.h \
interfaces/api/features/IKeypointDetectorRegion.h \
interfaces/api/features/IKeypointsReIndexer.h \
interfaces/api/features/ISBPatternReIndexer.h \
interfaces/api/features/IMatchesFilter.h \
interfaces/api/fusion/IVisualInertialFusion.h \
interfaces/api/geom/I2DTransform.h \
interfaces/api/geom/I3DTransform.h \
interfaces/api/geom/IProject.h \
interfaces/api/geom/IUnproject.h \
interfaces/api/geom/IImage2WorldMapper.h \
interfaces/api/geom/IUndistortPoints.h \
interfaces/api/image/IImageConvertor.h \
interfaces/api/image/IImageFilter.h \
interfaces/api/image/IImageLoader.h \
interfaces/api/image/IPerspectiveController.h \
interfaces/api/input/devices/ICamera.h \
interfaces/api/input/devices/ICameraCalibration.h \
interfaces/api/input/devices/IIMU.h \
interfaces/api/input/files/IMarker.h \
interfaces/api/input/files/IMarker2DNaturalImage.h \
interfaces/api/input/files/IMarker2DSquared.h \
interfaces/api/input/files/IMarker2DSquaredBinary.h \
interfaces/api/reloc/IKeyframeRetriever.h \
interfaces/api/reloc/IRelocalizer.h \
interfaces/api/solver/pose/IHomographyValidation.h \
interfaces/api/solver/pose/I2DTransformFinder.h \
interfaces/api/solver/pose/I2Dto3DTransformDecomposer.h \
interfaces/api/solver/pose/I2Dto3DTransformDecomposerValidation.h \
interfaces/api/solver/pose/I2D3DCorrespondencesFinder.h\
interfaces/api/solver/pose/I3DTransformFinderFrom2D3D.h \
interfaces/api/solver/pose/I3DTransformFinderFrom2D2D.h \
interfaces/api/solver/map/IBundler.h\
interfaces/api/solver/map/ITriangulator.h\
interfaces/api/solver/map/IMapFilter.h\
interfaces/api/solver/map/IMapper.h\
interfaces/api/storage/IKeyframesStorage.h \
interfaces/api/storage/IPointCloudStorage.h \
interfaces/api/storage/IVisibilityStorage.h \
interfaces/core/SolARFramework.h \
interfaces/core/Messages.h \
interfaces/core/Log.h \
interfaces/datastructure/BufferInternal.hpp \
interfaces/datastructure/CameraDefinitions.h \
interfaces/datastructure/CloudPoint.h \
interfaces/datastructure/DescriptorBuffer.h \
interfaces/datastructure/DescriptorMatch.h \
interfaces/datastructure/GeometryDefinitions.h \
interfaces/datastructure/Image.h \
interfaces/datastructure/Keypoint.h \
interfaces/datastructure/Keyframe.h \
interfaces/datastructure/Frame.h \
interfaces/datastructure/MathDefinitions.h \
interfaces/datastructure/SquaredBinaryPattern.h \
interfaces/datastructure/PrimitiveInformation.h \
interfaces/api/input/files/IMarker.h \
interfaces/api/input/files/IMarker2DNaturalImage.h \
interfaces/api/input/files/IMarker2DSquared.h \
interfaces/api/input/files/IMarker2DSquaredBinary.h \
interfaces/api/display/I3DPointsViewer.h \
interfaces/api/solver/pose/I3DTransformFinderFrom2D2D.h \
interfaces/api/solver/pose/I3DTransformFinderFrom2D3D.h \
interfaces/api/solver/pose/I3DTransformSACFinderFrom2D3D.h \
interfaces/api/solver/pose/I3DTransformFinderFrom2D2D.h \
interfaces/api/solver/map/IKeyframeSelector.h \
interfaces/api/tracking/IOpticalFlowEstimator.h \
interfaces/api/pipeline/IPipeline.h \
interfaces/api/sink/ISinkPoseImage.h \
interfaces/api/sink/ISinkPoseTextureBuffer.h \
interfaces/api/sink/ISinkReturnCode.h \
interfaces/api/source/ISourceImage.h \
interfaces/api/source/ISourceReturnCode.h

SOURCES += src/core/SolARFramework.cpp \
    src/core/Log.cpp \
    src/datastructure/DescriptorBuffer.cpp \
    src/datastructure/Image.cpp \
    src/datastructure/Keypoint.cpp \
    src/datastructure/SquaredBinaryPattern.cpp \
    src/datastructure/Frame.cpp \
    src/datastructure/Keyframe.cpp \
    src/datastructure/CloudPoint.cpp
