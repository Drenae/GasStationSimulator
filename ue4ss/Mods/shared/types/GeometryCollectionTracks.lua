---@meta

---@class FMovieSceneGeometryCollectionParams
---@field GeometryCollectionCache FSoftObjectPath
---@field StartFrameOffset FFrameNumber
---@field EndFrameOffset FFrameNumber
---@field PlayRate float
local FMovieSceneGeometryCollectionParams = {}



---@class FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate
---@field params FMovieSceneGeometryCollectionSectionTemplateParameters
local FMovieSceneGeometryCollectionSectionTemplate = {}



---@class FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams
---@field SectionStartTime FFrameNumber
---@field SectionEndTime FFrameNumber
local FMovieSceneGeometryCollectionSectionTemplateParameters = {}



---@class UMovieSceneGeometryCollectionSection : UMovieSceneSection
---@field params FMovieSceneGeometryCollectionParams
local UMovieSceneGeometryCollectionSection = {}



---@class UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack
---@field AnimationSections TArray<UMovieSceneSection>
local UMovieSceneGeometryCollectionTrack = {}



