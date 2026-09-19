---@meta

---@class FMovieSceneGeometryCacheParams
---@field GeometryCacheAsset UGeometryCache
---@field FirstLoopStartFrameOffset FFrameNumber
---@field StartFrameOffset FFrameNumber
---@field EndFrameOffset FFrameNumber
---@field PlayRate float
---@field bReverse boolean
---@field StartOffset float
---@field EndOffset float
---@field GeometryCache FSoftObjectPath
local FMovieSceneGeometryCacheParams = {}



---@class FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate
---@field params FMovieSceneGeometryCacheSectionTemplateParameters
local FMovieSceneGeometryCacheSectionTemplate = {}



---@class FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams
---@field SectionStartTime FFrameNumber
---@field SectionEndTime FFrameNumber
local FMovieSceneGeometryCacheSectionTemplateParameters = {}



---@class UMovieSceneGeometryCacheSection : UMovieSceneSection
---@field params FMovieSceneGeometryCacheParams
local UMovieSceneGeometryCacheSection = {}



---@class UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack
---@field AnimationSections TArray<UMovieSceneSection>
local UMovieSceneGeometryCacheTrack = {}



