---@meta

---@class ABP_Oceanology_Infinity_C : AQuadTree
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ['Distance Field'] UStaticMeshComponent
---@field Volumetric UStaticMeshComponent
---@field Debug UStaticMeshComponent
---@field Infinite_Compound UInfinite_Compound
---@field ['Underwater Post'] UPostProcessComponent
---@field ['Post Process Volume'] UBoxComponent
---@field FarOceanMesh UStaticMeshComponent
---@field WaterPreviewGrid UHierarchicalInstancedStaticMeshComponent
---@field Scene USceneComponent
---@field ['3 Underwater Post-Process Material'] UMaterialInstance
---@field ['Post-Process DYN'] UMaterialInstanceDynamic
---@field ['Ocean surface'] UMaterialInstanceDynamic
---@field ['Ocean surface (Far)'] UMaterialInstanceDynamic
---@field ['Ocean Level'] float
---@field GlobalDisplacement FGlobal_Displacement
---@field BaseOffset FBaseOffset
---@field Max_Waves Max_Waves::Type
---@field ['World Position'] FVector
---@field Height FVector
---@field Ocean UMaterialInterface
---@field ['Ocean (Far)'] UMaterialInstance
---@field ['Σ1'] Fwave_1
---@field ['Σ2'] Fwave_2
---@field ['Σ3'] Fwave_3
---@field ['Σ4'] Fwave_4
---@field ['Use Distance Field'] boolean
---@field ['Shoreline Interaction (Texture)'] FShoreline_Interaction
---@field ['Heightmap ( Debug ) '] UMaterialInstanceDynamic
---@field Surface_Light FSurface_Light
---@field Foam_Generator FFoam_Generator
---@field Refraction FRefraction
---@field Normal FNormals_Calculation
---@field Underwater FUnderwater
---@field GodRays FGodRays
---@field ['Quad Tree'] FQuadTree_INF
---@field ['Shoreline Interaction (Distance Field)'] FDistanceField
---@field Caustics FCaustics
---@field VL UMaterialInstanceDynamic
---@field ['Mesh Quality'] FMeshQuality
---@field ['Change Quality'] ChangeQuality::Type
local ABP_Oceanology_Infinity_C = {}

---@param Height FVector
ABP_Oceanology_Infinity_C['Base offset + Σ1+ Σ2+ Σ3+ Σ4'] = function(self, Height) end
---@param Height FVector
ABP_Oceanology_Infinity_C['Base offset + Σ1+ Σ2+ Σ3 '] = function(self, Height) end
---@param Height FVector
ABP_Oceanology_Infinity_C['Base offset + Σ1+ Σ2 '] = function(self, Height) end
---@param Height FVector
ABP_Oceanology_Infinity_C['Base offset + Σ1'] = function(self, Height) end
---@param Height FVector
ABP_Oceanology_Infinity_C['Base offset'] = function(self, Height) end
ABP_Oceanology_Infinity_C['Location Offset'] = function(self, ) end
---@param Heightmap FShoreline_Interaction
ABP_Oceanology_Infinity_C['Update Heightmap'] = function(self, Heightmap) end
ABP_Oceanology_Infinity_C['OnRep_Shoreline Interaction (Texture)'] = function(self, ) end
ABP_Oceanology_Infinity_C['Landscape Modulator'] = function(self, ) end
ABP_Oceanology_Infinity_C['OnRep_Quad Tree'] = function(self, ) end
---@param Quad_Tree FQuadTree_INF
ABP_Oceanology_Infinity_C['Update Quad Tree'] = function(self, Quad_Tree) end
function ABP_Oceanology_Infinity_C:OnRep_Foam_Generator() end
---@param Foam_Generator FFoam_Generator
function ABP_Oceanology_Infinity_C:UpdateFoamGenerator(Foam_Generator) end
function ABP_Oceanology_Infinity_C:OnRep_Max_Waves() end
---@param Max_Waves Max_Waves::Type
function ABP_Oceanology_Infinity_C:UpdateMax_Waves(Max_Waves) end
---@param _4 Fwave_4
ABP_Oceanology_Infinity_C['Update Σ4'] = function(self, _4) end
---@param _3 Fwave_3
ABP_Oceanology_Infinity_C['Update Σ3'] = function(self, _3) end
ABP_Oceanology_Infinity_C['OnRep_Σ4'] = function(self, ) end
ABP_Oceanology_Infinity_C['OnRep_Σ3'] = function(self, ) end
---@param _2 Fwave_2
ABP_Oceanology_Infinity_C['Update Σ2'] = function(self, _2) end
ABP_Oceanology_Infinity_C['OnRep_Σ2'] = function(self, ) end
ABP_Oceanology_Infinity_C['OnRep_Σ1'] = function(self, ) end
---@param _1 Fwave_1
ABP_Oceanology_Infinity_C['Update Σ1'] = function(self, _1) end
---@param BaseOffset FBaseOffset
ABP_Oceanology_Infinity_C['Update Base Offset'] = function(self, BaseOffset) end
function ABP_Oceanology_Infinity_C:OnRep_BaseOffset() end
---@param GlobalDisplacement FGlobal_Displacement
function ABP_Oceanology_Infinity_C:UpdateGlobalDisplacement(GlobalDisplacement) end
function ABP_Oceanology_Infinity_C:OnRep_GlobalDisplacement() end
---@param Point_Location FVector
---@param Point_Thickness float
---@param IsUnder boolean
---@param Amount float
---@param Z float
function ABP_Oceanology_Infinity_C:EvaluateWaveHeight(Point_Location, Point_Thickness, IsUnder, Amount, Z) end
---@param Location FVector
---@param Height FVector
ABP_Oceanology_Infinity_C['Get Wave Height'] = function(self, Location, Height) end
---@param World_Position FVector
---@param Amplitude float
---@param Steepness float
---@param Speed float
---@param Wave_Length float
---@param Direction float
---@param NumWaves float
---@param Direction_Offset float
---@param Height FVector
function ABP_Oceanology_Infinity_C:GerstnerWavesQuadruple(World_Position, Amplitude, Steepness, Speed, Wave_Length, Direction, NumWaves, Direction_Offset, Height) end
---@param World_Position FVector
---@param Direction_XY float
---@param Speed float
---@param Wave_Length float
---@param Amplitude float
---@param Steepness float
---@param NumWaves float
---@param Height FVector
ABP_Oceanology_Infinity_C['Gerstner Wave'] = function(self, World_Position, Direction_XY, Speed, Wave_Length, Amplitude, Steepness, NumWaves, Height) end
function ABP_Oceanology_Infinity_C:Inizialize() end
function ABP_Oceanology_Infinity_C:UserConstructionScript() end
---@param BaseOffset FBaseOffset
function ABP_Oceanology_Infinity_C:SetBaseOffsetServer(BaseOffset) end
---@param _1 Fwave_1
ABP_Oceanology_Infinity_C['SetΣ1Server'] = function(self, _1) end
---@param _2 Fwave_2
ABP_Oceanology_Infinity_C['SetΣ2Server'] = function(self, _2) end
---@param _3 Fwave_3
ABP_Oceanology_Infinity_C['SetΣ3Server'] = function(self, _3) end
---@param _4 Fwave_4
ABP_Oceanology_Infinity_C['SetΣ4Server'] = function(self, _4) end
---@param Max_Waves Max_Waves::Type
function ABP_Oceanology_Infinity_C:SetMaxWavesServer(Max_Waves) end
---@param Foam_Generator FFoam_Generator
function ABP_Oceanology_Infinity_C:SetFoamGeneratorServer(Foam_Generator) end
---@param GlobalDisplacement FGlobal_Displacement
function ABP_Oceanology_Infinity_C:SetGlobalDisplacementServer(GlobalDisplacement) end
function ABP_Oceanology_Infinity_C:ReceiveBeginPlay() end
ABP_Oceanology_Infinity_C['ExitedWater?'] = function(self, ) end
ABP_Oceanology_Infinity_C['EnteredWater?'] = function(self, ) end
---@param Quad_Tree FQuadTree_INF
function ABP_Oceanology_Infinity_C:SetUpdateQuadTreeServer(Quad_Tree) end
---@param Heightmap FShoreline_Interaction
function ABP_Oceanology_Infinity_C:SetUpdateHeightmapServer(Heightmap) end
---@param EntryPoint int32
function ABP_Oceanology_Infinity_C:ExecuteUbergraph_BP_Oceanology_Infinity(EntryPoint) end


