---@enum EAIState
local EAIState = {
    Wait = 0,
    Move = 1,
    Action = 2,
    Reset = 3,
    EAIState_MAX = 4,
}

---@enum EAchievementType
local EAchievementType = {
    CUSTOM = 0,
    STAT = 1,
    MAX = 2,
}

---@enum EAirplanePartType
local EAirplanePartType = {
    STABLILZER_LEFT = 0,
    STABLILZER_RIGHT = 1,
    WING_LEFT = 2,
    WING_RIGHT = 3,
    MAX = 4,
}

---@enum EAttractWreckError
local EAttractWreckError = {
    NOT_DELIVERED_YET = 0,
    ALL_SPOTS_OCCUPIED = 1,
    RESERVED_BY_SEAN = 2,
    MOVING_LOCKED = 3,
    PROJECT_IN_PROGRESS = 4,
    MAX = 5,
}

---@enum EBBQItemState
local EBBQItemState = {
    RAW = 0,
    PERFECT = 1,
    BURNT = 2,
    EBBQItemState_MAX = 3,
}

---@enum EBBQSelectSlotDirection
local EBBQSelectSlotDirection = {
    NONE = 0,
    UP = 1,
    DOWN = 2,
    RIGHT = 3,
    LEFT = 4,
    EBBQSelectSlotDirection_MAX = 5,
}

---@enum EBBQStage
local EBBQStage = {
    RAW = 0,
    COOKING = 1,
    READY = 2,
    EBBQStage_MAX = 3,
}

---@enum EBarCustomerNativeType
local EBarCustomerNativeType = {
    None = 0,
    OridnaryBarCustomer = 1,
    Gang_Policemen = 2,
    Gang_Coyotes = 3,
    Gang_Bears = 4,
    Gang_Hatters = 5,
    Gang_Clowns = 6,
    MAX = 7,
}

---@enum EBaseWidgetFocusType
local EBaseWidgetFocusType = {
    Focused = 0,
    NotFocused = 1,
    Any = 2,
    MAX = 3,
}

---@enum EBuildingAreaType
local EBuildingAreaType = {
    GAS_STATION_INSIDE = 0,
    GAS_STATION_OUTSIDE = 1,
    GARAGE = 2,
    WAREHOUSE = 3,
    PLAYER_ROOM = 4,
    EVERYWHERE = 5,
    NONE = 6,
    MAX = 7,
}

---@enum EBuildingPathStationState
local EBuildingPathStationState = {
    OPEN = 0,
    CLOSED = 1,
    NOT_ACQUIRED = 2,
    MAX = 3,
}

---@enum EBuildingType
local EBuildingType = {
    MAIN_STATION = 0,
    WORKSHOP = 1,
    WAREHOUSE = 2,
    CAR_WASH = 3,
    FUEL_PUMP = 4,
    CAR_LIFT = 5,
    PARKING = 6,
    ICE_CREAM_STAND = 7,
    PARTY_SPOT = 8,
    PARTY_TIME = 9,
    AIRPORT = 10,
    TRADE_CENTER = 11,
    BARN = 12,
    TOWYS_GARAGE = 13,
    RADIO_TOWER = 14,
    AIRPORT_STORAGE = 15,
    OTHER = 16,
    TOILET = 17,
    EMPLOYEE_CARAVAN = 18,
    BUS_STOP = 19,
    SCUBA_RENTAL = 20,
    WINDSURFING_RENTAL = 21,
    WC = 22,
    SHOWER = 23,
    WATER_FUEL_PUMP = 24,
    JUNKYARD = 25,
    OFFICE = 26,
    JUNKYARD_STORAGE = 27,
    CHEMICAL_BATH = 28,
    JUNKYARD_WRECKS_SPOT = 29,
    JUNKYARD_WORKSHOP = 30,
    JUNKYARD_EXHIBITION = 31,
    DRIVE_IN_CINEMA = 32,
    FIGHTCLUB = 33,
    CASINO = 34,
    CONFERENCE_HALL = 35,
    PARKINGDEAL = 36,
    SHOOTING_RANGE = 37,
    FAKE_SHELVES = 38,
    TWEAKING_STATION = 39,
    GYM = 40,
    FIRE_PIT = 41,
    CASINO_SHADY_STUFF = 42,
    PRISON_BUS_STOP = 43,
    WASHING_MACHINE = 44,
    RV_CAMP = 45,
    RV_Parking = 46,
    RV_Service = 47,
    RV_CousinHouse = 48,
    RV_Concert = 49,
    MAX = 50,
}

---@enum EButtonState
local EButtonState = {
    Normal = 0,
    Hovered = 1,
    Pressed = 2,
    EButtonState_MAX = 3,
}

---@enum ECameraType
local ECameraType = {
    FEATURE = 0,
    DECORATION = 1,
    MAX = 2,
}

---@enum ECamperWashingEfficiency
local ECamperWashingEfficiency = {
    NORMAL = 0,
    ECO = 1,
    ECamperWashingEfficiency_MAX = 2,
}

---@enum ECarPartStat
local ECarPartStat = {
    ACCELERATION = 0,
    TOP_SPEED = 1,
    HANDLING = 2,
    STRENGTH = 3,
    MAX = 4,
}

---@enum ECarWreckMarking
local ECarWreckMarking = {
    NONE = 0,
    CRUSH = 1,
    MOVE = 2,
    DISASSEMBLE_PARTS = 3,
    ASSEMBLE_PARTS = 4,
    GRIND = 5,
    MAX = 6,
}

---@enum ECarWreckMarkingError
local ECarWreckMarkingError = {
    DEFAULT = 0,
    NO_PARTS_TO_DISASSEMBLE = 1,
    PARTS_NOT_DISASSEMBLED = 2,
    NOT_RUSTY = 3,
    CANT_BE_MOVED = 4,
    NOT_ON_PLATFORM = 5,
    NO_SPACE_IN_GARAGE = 6,
    NO_SPACE_IN_STORAGE = 7,
    ASSEMBLY_ACTIVE = 8,
    ECarWreckMarkingError_MAX = 9,
}

---@enum ECarWreckPlaceableAreaType
local ECarWreckPlaceableAreaType = {
    WRECKS_SPOT = 0,
    SHREDDER = 1,
    PLATFORM = 2,
    EXHIBITION_SPOT = 3,
    PHOTO_MODE = 4,
    MAX = 5,
}

---@enum ECarWreckState
local ECarWreckState = {
    FREE = 0,
    ATTACHED_TO_MAGNET = 1,
    JUST_DROPPED_BY_MAGNET = 2,
    ATTACHED_TO_TOW_TRUCK = 3,
    WAITING_AT_TOW_TRUCK = 4,
    PLACED_ON_AREA = 5,
    SHREDDED = 6,
    MAX = 7,
}

---@enum ECategoryFilter
local ECategoryFilter = {
    DECORATIONS = 0,
    SHELVES = 1,
    PRODUCTS = 2,
    CAR_PARTS = 3,
    KEY_ITEMS = 4,
    ICE_CREAMS = 5,
    RENTAL_EQUIPMENT = 6,
    None = 7,
    ECategoryFilter_MAX = 8,
}

---@enum ECharacterGender
local ECharacterGender = {
    Male = 0,
    Female = 1,
    ECharacterGender_MAX = 2,
}

---@enum ECharacterState
local ECharacterState = {
    NORMAL = 0,
    CASH_SHOP_MINIGAME = 1,
    LOCK_PICKING_MINIGAME = 2,
    FUEL_MINIGAME = 3,
    FUEL_JERRYCAN = 4,
    INVENTORY = 5,
    MINIGAME = 6,
    UIONLY = 7,
    MINIGAME_GARAGE_OIL = 8,
    MINIGAME_GARAGE_COOLANT = 9,
    MINIGAME_GARAGE_CARBATTERY = 10,
    MINIGAME_GARAGE_SPARKPLUG = 11,
    MINIGAME_GARAGE_BREAKDISC = 12,
    MINIGAME_RCCAR = 13,
    MINIGAME_MINIGOLF = 14,
    MINIGAME_GARAGE_WHEEL = 15,
    MINIGAME_GARAGE_MIRROR = 16,
    MINIGAME_GARAGE_SCRATCH = 17,
    MINIGAME_ICE_CREAM = 18,
    MINIGAME_MARSHAL_WANDS = 19,
    SETTING_FUEL_PRICES = 20,
    MINIGAME_CRANE = 21,
    CINEMATIC = 22,
    MINIGAME_WRENCH = 23,
    MINIGAME_VALIDATION = 24,
    MINIGAME_RVCAMP = 25,
    MAX = 26,
}

---@enum EChunchumanchuAnger
local EChunchumanchuAnger = {
    HAPPY = 0,
    LOW = 1,
    HIGH = 2,
    ERUPTION = 3,
    MAX = 4,
}

---@enum ECircularMenuChoice
local ECircularMenuChoice = {
    HAND = 0,
    BROOM = 1,
    VACUUM_GUN = 2,
    TRASH_BAG = 3,
    INVENTORY = 4,
    LOCKPICK = 5,
    DECAL_SPRAYING_TOOL = 6,
    JERRY_CAN = 7,
    HAMMER = 8,
    PAINTBRUSH = 9,
    HANDHELD_PC = 10,
    COMMUNICATION_DEVICE = 11,
    CANNON = 12,
    JUNKYARD_STORAGE = 13,
    BASE_STORAGE = 14,
    WRENCH = 15,
    GUEST_BOOK = 16,
    TRAY = 17,
    RAG = 18,
    PLUNGER = 19,
    DIRTY_MONEY_BAG = 20,
    MAX = 21,
}

---@enum EColorType
local EColorType = {
    BASIC = 0,
    METALIC = 1,
    WALLPAPER = 2,
    MAX = 3,
}

---@enum EConstructType
local EConstructType = {
    SnapToPoint = 0,
    SnapToGround = 1,
    EConstructType_MAX = 2,
}

---@enum EContainerAnimation
local EContainerAnimation = {
    NO_ANIM = 0,
    CONTAINER_UP = 1,
    CONTAINER_DOWN = 2,
    SPOONT_TO_CONE = 3,
    MAX = 4,
}

---@enum EContractDifficulty
local EContractDifficulty = {
    EASY = 0,
    MEDIUM = 1,
    HARD = 2,
    MAX = 3,
}

---@enum EContractPaintRequirement
local EContractPaintRequirement = {
    COLOR = 0,
    FINISH_TYPE = 1,
    PAINT_TYPE = 2,
    MAX = 3,
}

---@enum EContractRequirement
local EContractRequirement = {
    CAR_WRECK_CLASS = 0,
    CAR_WRECK_TIER = 1,
    CAR_PARTS_TIER = 2,
    CAR_PARTS_CLASS = 3,
    HANDLING_STAT = 4,
    ACCELERATION_STAT = 5,
    STRENGTH_STAT = 6,
    TOP_SPEED_STAT = 7,
    PAINT_TYPE = 8,
    PAINT_MASK = 9,
    PAINT_COLOR = 10,
    DECALS = 11,
    MAX = 12,
}

---@enum EContractType
local EContractType = {
    WRECKS_COLLECTION = 0,
    PARTS_DISASSEMBLY = 1,
    MOBILE_REPAIR = 2,
    SPECIAL_CONTRACT = 3,
    MAX = 4,
}

---@enum ECountableObjectiveDisplayType
local ECountableObjectiveDisplayType = {
    REGULAR = 0,
    TIME = 1,
    MAX = 2,
}

---@enum ECountryOfOrigin
local ECountryOfOrigin = {
    NONE = 0,
    Mexico = 1,
    Cuba = 2,
    Brazil = 3,
    Canada = 4,
    Argentina = 5,
    Bolivia = 6,
    Colombia = 7,
    Uruguay = 8,
    PuertoRico = 9,
    Venezuela = 10,
    GreatBritain = 11,
    Germany = 12,
    Australia = 13,
    Poland = 14,
    Netherlands = 15,
    France = 16,
    MAX = 17,
}

---@enum ECountryRegion
local ECountryRegion = {
    LATIN_AMERICA = 0,
    EUROPE = 1,
    ALL = 2,
    NONE = 3,
    ECountryRegion_MAX = 4,
}

---@enum ECurrentStatus
local ECurrentStatus = {
    InQueue = 0,
    FlyingToDestination = 1,
    Arrived = 2,
    TakingOff = 3,
    Cancelled = 4,
    ECurrentStatus_MAX = 5,
}

---@enum ECustomTextVariableType
local ECustomTextVariableType = {
    ECTVT_SavedServiceName = 0,
    ECTVT_SomeOtherNonsense = 1,
    MAX = 2,
}

---@enum ECustomerType
local ECustomerType = {
    FUEL = 0,
    REPAIR = 1,
    CAR_WASH = 2,
    SHOPPING = 3,
    ICE_CREAM = 4,
    SCUBA = 5,
    WINDSURFING = 6,
    PARTYING = 7,
    WC = 8,
    DRIVE_IN_CINEMA = 9,
    BAR = 10,
    RV = 11,
    MAX = 12,
}

---@enum ECustomizationContractType
local ECustomizationContractType = {
    REGULAR = 0,
    VIP = 1,
    RACE = 2,
    DESTRUCTION_DERBY = 3,
    DRIFT_FESTIVAL = 4,
    CAR_STUNT_SHOW = 5,
    VIP_PLUS = 6,
    REGULAR_PLUS = 7,
    NEW_PLUS = 8,
    MAX = 9,
}

---@enum ECustomizationPaintType
local ECustomizationPaintType = {
    NONE = 0,
    STRIPES = 1,
    FLAMES = 2,
    FLOWERS = 3,
    FUTURISTIC = 4,
    GRADIENT1 = 5,
    GRADIENT2 = 6,
    CAMO = 7,
    TIGER = 8,
    SPORTSTRIPES = 9,
    LSD = 10,
    MAX = 11,
}

---@enum EDLCName
local EDLCName = {
    NONE = 0,
    ANY = 1,
    ALL = 2,
    BASE = 3,
    CUSTOMIZATION = 4,
    PARTY_TIME = 5,
    AIRSTRIP = 6,
    PARADISE_ISLAND = 7,
    SHADY_DEALS = 8,
    JUNKYARD = 9,
    DRIVEINCINEMA = 10,
    RVCAMP = 11,
    MAX = 12,
}

---@enum EDecaFunctionality
local EDecaFunctionality = {
    DecalPaint = 0,
    DecalText = 1,
    DecalCarPaint = 2,
    EDecaFunctionality_MAX = 3,
}

---@enum EDecalColor
local EDecalColor = {
    Generic = 0,
    Artistic = 1,
    EDecalColor_MAX = 2,
}

---@enum EDecalSprayingState
local EDecalSprayingState = {
    PLACING = 0,
    CLEANING = 1,
    PAINTING = 2,
    MAX = 3,
}

---@enum EDecalStationLevel
local EDecalStationLevel = {
    StationLvl_0 = 0,
    StationLvl_1 = 1,
    StationLvl_2 = 2,
    StationLvl_3 = 3,
    StationLvl_4 = 4,
    StationLvl_5 = 5,
    StationLvl_6 = 6,
    StationLvl_7 = 7,
    MAX = 8,
}

---@enum EDecalType
local EDecalType = {
    PaintedDecal = 0,
    DirtyDecal = 1,
    EDecalType_MAX = 2,
}

---@enum EDecalUnlockType
local EDecalUnlockType = {
    All = 0,
    Pictograms = 1,
    Frames = 2,
    Scribbles = 3,
    Candies = 4,
    Cute = 5,
    GirlPower = 6,
    Patterns = 7,
    FunnyMonster = 8,
    Commercials = 9,
    PinUp = 10,
    Events = 11,
    Generic = 12,
    Artistic = 13,
    Favourite = 14,
    Halloween1 = 15,
    Halloween2 = 16,
    Custom = 17,
    Christmas = 18,
    Valentines = 19,
    CarPaint = 20,
    CarDecals = 21,
    CarPaintColor = 22,
    CarDecalsTribal = 23,
    CarDecalsFlames = 24,
    CarDecalsSport = 25,
    CarDecalsFuturistic = 26,
    CarDecalsArtistic = 27,
    CarDecalsGeometry = 28,
    CarDecalsGraffiti = 29,
    CarDecalsBasic = 30,
    EDecalUnlockType_MAX = 31,
}

---@enum EDecorationCameraType
local EDecorationCameraType = {
    NORMAL_DECORATION = 0,
    INTERACTIVE_DECORATION = 1,
    FEATURES = 2,
    MAX = 3,
}

---@enum EDialogueClass
local EDialogueClass = {
    STORY = 0,
    BARK = 1,
    MAX = 2,
}

---@enum EDialogueSpeaker
local EDialogueSpeaker = {
    ANY = 0,
    PRIMARY = 1,
    SECONDARY = 2,
    MAX = 3,
}

---@enum EDishPlacementResult
local EDishPlacementResult = {
    SUCCESS = 0,
    INVALID_DISH = 1,
    DIRTY_DISH = 2,
    WRONG_DISH_STACK = 3,
    NOT_ENOUGH_SPACE = 4,
    EDishPlacementResult_MAX = 5,
}

---@enum EDishType
local EDishType = {
    PLATE = 0,
    BOWL = 1,
    CUP = 2,
    COOKWARE = 3,
    EDishType_MAX = 4,
}

---@enum EDishwashingEfficiency
local EDishwashingEfficiency = {
    NORMAL = 0,
    ECO = 1,
    ECO_PLUS = 2,
    EDishwashingEfficiency_MAX = 3,
}

---@enum EDoorSide
local EDoorSide = {
    LEFT = 0,
    RIGHT = 1,
    MAX = 2,
}

---@enum EDoorState
local EDoorState = {
    OPEN = 0,
    CLOSED = 1,
    LOCKED = 2,
    MAX = 3,
}

---@enum EDriveState
local EDriveState = {
    DRIVING = 0,
    SLOWING_FOR_TURN = 1,
    STOPPING_GOAL = 2,
    STOPPING_OBSTACLE = 3,
    STOPPED = 4,
    MAX = 5,
}

---@enum EDriverCarState
local EDriverCarState = {
    Inside = 0,
    Outside = 1,
    EDriverCarState_MAX = 2,
}

---@enum EDumbbellContainerType
local EDumbbellContainerType = {
    STAND = 0,
    GRIFFIN = 1,
    EDumbbellContainerType_MAX = 2,
}

---@enum EEconomyDetailedYieldType
local EEconomyDetailedYieldType = {
    PRODUCTS = 0,
    GAS = 1,
    CAR_PARTS = 2,
    DECORATIONS = 3,
    LANDMARKS = 4,
    UPGRADES = 5,
    SERVICES = 6,
    SALARIES = 7,
    FEATURES = 8,
    WORKSHOP = 9,
    CAR_WASH = 10,
    CARDS = 11,
    ICE_CREAMS = 12,
    TOOLS = 13,
    SHELVES = 14,
    LOAN = 15,
    MINIGAMES = 16,
    TIPS = 17,
    SCUBA_DIVING = 18,
    SURFING = 19,
    LOTTERY = 20,
    DRIVE_IN_CINEMA = 21,
    JUNKYARD = 22,
    WRECK_DELIVERIES = 23,
    CHEMICAL_BATH = 24,
    INVESTOR_SHAER = 25,
    SALE_FEE = 26,
    CAR_CONTRACTS = 27,
    CAR_SALES = 28,
    SELLING_CAR_PARTS = 29,
    CINEMA = 30,
    POPCORN = 31,
    TICKETS = 32,
    RVCAMP = 33,
    DELIVERY = 34,
    NOT_RELEVANT = 35,
    MAX = 36,
}

---@enum EEconomyGeneralYieldType
local EEconomyGeneralYieldType = {
    REVENUE = 0,
    COST = 1,
    NOT_RELEVANT = 2,
    MAX = 3,
}

---@enum EEconomyType
local EEconomyType = {
    CASH_SHOP_PRODUCT = 0,
    GARAGE_PRODUCT = 1,
    MAX = 2,
}

---@enum EEmployeeSkill
local EEmployeeSkill = {
    Cleaning = 0,
    Shop = 1,
    Fuel = 2,
    Garage = 3,
    Ice_Cream_Vending = 4,
    Cinema = 5,
    Restock = 6,
    None = 7,
    Barman = 8,
    Server = 9,
    Cook = 10,
    EEmployeeSkill_MAX = 11,
}

---@enum EEmployeeTask
local EEmployeeTask = {
    CLEANING = 0,
    CASH_REGISTER = 1,
    FUEL = 2,
    GARAGE = 3,
    ICE_CREAM_VENDING = 4,
    BOAT_FUEL = 5,
    CINEMA = 6,
    HOME = 7,
    WAIT = 8,
    RESTOCK = 9,
    BARMAN = 10,
    SERVER = 11,
    BARBACK = 12,
    COOK = 13,
    MAX = 14,
}

---@enum EFameRewardCategory
local EFameRewardCategory = {
    COLORS = 0,
    DECALS = 1,
    PAINT_STYLES = 2,
    PAINT_TYPES = 3,
    DECORATIONS = 4,
    LANDMARKS = 5,
    WRECKS = 6,
    MAX = 7,
}

---@enum EFinishMaskType
local EFinishMaskType = {
    NONE = 0,
    CARBON_FIBER = 1,
    CHAMELEON = 2,
    DAMASCUS = 3,
    MATTE = 4,
    MAX = 5,
}

---@enum EFuelMagazine
local EFuelMagazine = {
    GAS_STATION = 0,
    AIRPORT = 1,
    EFuelMagazine_MAX = 2,
}

---@enum EFuelState
local EFuelState = {
    IsOk = 0,
    NoOk = 1,
    NoFuel = 2,
    EFuelState_MAX = 3,
}

---@enum EFunctionType
local EFunctionType = {
    LINEAR = 0,
    EXPONENTIAL = 1,
    MAX = 2,
}

---@enum EGSS_Stat
local EGSS_Stat = {
    SHOP_CUSTOMER_SERVED = 0,
    FUEL_CUSTOMER_SERVED = 1,
    TIP_TIMES = 2,
    CAR_TRUNK_LOCKPICK = 3,
    TRASH_PICKUP = 4,
    DECAL_CLEANED_BROOM = 5,
    DECORATION_FOUND = 6,
    PAINTING = 7,
    CARS_REPAIRED = 8,
    EXTERIOR_DECORATIONS_BOUGHT = 9,
    MONEY_EARNED = 10,
    HAPPY_EARNED = 11,
    POPULARITY_LEVEL = 12,
    CARS_WASHED = 13,
    WATER_VEHICLE_FUELED = 14,
    ICE_CREAM_CUSTOMERS_SERVED = 15,
    SACRIFICE_COCONUT = 16,
    SCUBA = 17,
    SURING = 18,
    TOILET = 19,
    SHOWER = 20,
    SACRIFICE_COCONUT_SPOT1 = 21,
    SACRIFICE_COCONUT_SPOT2 = 22,
    SACRIFICE_COCONUT_SPOT3 = 23,
    DAYS_SINCE_VOLCANIC_ERUPTION = 24,
    DAYS_SINCE_DEATH = 25,
    SHADY_TRASH_PICKUP = 26,
    MAX = 27,
}

---@enum EGameAction
local EGameAction = {
    END_CONVERSATION = 0,
    START_DIALOGUE = 1,
    TRIGGER_RANDOM_NPC_DIALOGUE = 2,
    TRIGGER_SPECIFIC_NPC_DIALOGUE = 3,
    FINISH_ACTIVE_QUEST = 4,
    FIRE_ACTIVE_QUEST_EXTERNAL_EVENT = 5,
    MAX = 6,
}

---@enum EGameActivityType
local EGameActivityType = {
    DIGGER = 0,
    FUELING = 1,
    PAINTING = 2,
    CASH_REGISTER = 3,
    RACING_CAR_1 = 4,
    LOCK_PICK = 5,
    TRASH_BAG = 6,
    JERRY_CAN = 7,
    BROOM = 8,
    GARAGE_WHEEL = 9,
    MIRROR_GARAGE = 10,
    GARAGE_SCRATCH = 11,
    GARAGE_OIL = 12,
    GARAGE_BATTERY = 13,
    GARAGE_COOLANT = 14,
    GARAGE_SPARKPLUG = 15,
    GARAGE_MAIN_TUTORIAL = 16,
    EMPLOYEE = 17,
    EMPLOYEE_RESTOCK_SHELVES = 18,
    REFILL_SHELVES_PRODUCTS = 19,
    REFILL_SHELVES_PARTS = 20,
    PRODUCT_PRICE_PRODUCTS = 21,
    PRODUCT_PRICE_CAR_PARTS = 22,
    CARWASH = 23,
    HAMMER = 24,
    DECAL_TOOL = 25,
    VACUME_GUN = 26,
    PARTY_SPOT = 27,
    ICE_CREAM_MINIGAME = 28,
    ICE_CREAM_PRODUCTS = 29,
    AIRSTRIP_TOWY_DRIVING = 30,
    AIRSTRIP_TOWY_MAGNET = 31,
    AIRSTRIP_TAPING_MINIGAME = 32,
    AIRSTRIP_MARSHAL_MINIGAME = 33,
    AIRSTRIP_DEPARTURE_SCREEN = 34,
    AIRSTRIP_FUELING_PLANE = 35,
    AIRSTRIP_COMMUNICATION_DEVICE = 36,
    SPIDER_WEBS = 37,
    POPULARITY = 38,
    CANNON = 39,
    SHARK = 40,
    BOAT_FUELING = 41,
    SCUBA_DIVING = 42,
    WINDSURFING = 43,
    BOATS_DELIVERY = 44,
    CHUNCHUMANCHU_INTRODUCTION = 45,
    ALTAR = 46,
    VOLCANO = 47,
    LOTTERY_MACHINE = 48,
    TRAFFIC = 49,
    TRAFFIC_METER = 50,
    FUEL_PRICE_BOARD = 51,
    GRINDER = 52,
    LEVEL_TELEPORT = 53,
    VIP = 54,
    DRIVE_IN_CINEMA = 55,
    POPCORN_MACHINE = 56,
    TOILET_PLUNGER = 57,
    BAR_RAG = 58,
    BAR_TRAY = 59,
    BEER_KEG = 60,
    SERVING_DRINKS = 61,
    EVAPORATOR = 62,
    SHADY_DEALS = 63,
    CASINO = 64,
    FIGHT_CLUB = 65,
    PAINTGUN = 66,
    MULTITOOL = 67,
    WRENCH = 68,
    JUNKYARD_BOARD = 69,
    WRECK_DELIVERIES = 70,
    WRECK_CONTRACTS = 71,
    WRECK_SALES = 72,
    JUNKYARD_FAME = 73,
    CRANE_CRUSHER = 74,
    CAR_PARTS = 75,
    CHEMICAL_BATH = 76,
    PLATFORM_PANEL = 77,
    CAR_CUSTOMIZATION = 78,
    PHOTO_SPOT = 79,
    CAR_EXHIBITION = 80,
    PROJECTORS = 81,
    SEAN = 82,
    CINEMA_VALIDATOR = 83,
    CINEMA_PROJECTOR = 84,
    CINEMA_CLEANING = 85,
    POPCORN_THROWING = 86,
    CUSTOM_MOVIE = 87,
    AUTOMATIC_VALIDATION = 88,
    RV_CAMP = 89,
    RV_Service = 90,
    RV_GuestBook = 91,
    LAUNDRY = 92,
    BENCH_PRESS = 93,
    BBQ = 94,
    DISHWASHING = 95,
    WOOD_CHOPPING = 96,
    SHOOTING_RANGE = 97,
    PICNIC_BASKET = 98,
    SAUNA = 99,
    LEVELING = 100,
    CONCERT = 101,
    RV_BOOKING = 102,
    RV_UPGRADES = 103,
    RV_MANAGERS = 104,
    RV_ServiceGuest = 105,
    RV_OvernightGuest = 106,
    RV_ConcertGuests = 107,
    MAX = 108,
}

---@enum EGameMode
local EGameMode = {
    GameMode = 0,
    UIMode = 1,
    EGameMode_MAX = 2,
}

---@enum EGamePadType
local EGamePadType = {
    GAMEPAD_XBOX = 0,
    GAMEPAD_PS = 1,
    GAMEPAD_STEAM = 2,
    MAX = 3,
}

---@enum EGameVersion
local EGameVersion = {
    NormalVersion = 0,
    DemoVersion = 1,
    EGameVersion_MAX = 2,
}

---@enum EGarageMinigame
local EGarageMinigame = {
    WHEEL_REPLACE = 0,
    MIRROR = 1,
    SCRATCH_REMOVER = 2,
    OIL_CHECK = 3,
    BATTERY_CHECK = 4,
    COOLANT_CHECK = 5,
    SPARKPLUG_CHECK = 6,
    MAX = 7,
}

---@enum EGarageNotification
local EGarageNotification = {
    BROKEN_MIRROR = 0,
    BROKEN_DOOR = 1,
    BROKEN_WHEEL = 2,
    BROKEN_SPARKPLUG = 3,
    BROKEN_COOLANT = 4,
    BROKEN_BATTERY = 5,
    BROKEN_OIL = 6,
    MAX = 7,
}

---@enum EGlobalStationEvent
local EGlobalStationEvent = {
    STATION_CLOSED = 0,
    VOLCANO_ERUPTION = 1,
    UFO = 2,
    MAX = 3,
}

---@enum EGuestServiceDifficulty
local EGuestServiceDifficulty = {
    EASY = 0,
    MEDIUM = 1,
    HARD = 2,
    MAX = 3,
}

---@enum EGuestServiceLocationType
local EGuestServiceLocationType = {
    CAMP_SPOT = 0,
    RV_BUILDING = 1,
    GAS_STATION = 2,
    MAX = 3,
}

---@enum EHammerEditType
local EHammerEditType = {
    DEFAULT = 0,
    QUEUE = 1,
    ROOF = 2,
    WALL = 3,
    PLACEABLE_ACTOR = 4,
    FINISHED = 5,
    CASH_DESK = 6,
    MAX = 7,
}

---@enum EHoldButton
local EHoldButton = {
    RMB = 0,
    LMB = 1,
    F = 2,
    NONE = 3,
    MAX = 4,
}

---@enum EHumanType
local EHumanType = {
    Normal = 0,
    Delivery = 1,
    Party = 2,
    Employee = 3,
    Police = 4,
    PartySpot = 5,
    Prisoner = 6,
    Camper = 7,
    RVGuest = 8,
    EHumanType_MAX = 9,
}

---@enum EIceCreamConeSize
local EIceCreamConeSize = {
    SMALL = 0,
    MEDIUM = 1,
    BIG = 2,
    MAX = 3,
}

---@enum EIceCreamFlavours
local EIceCreamFlavours = {
    STRAWBERRY = 0,
    GREEN_APPLE = 1,
    CHOCOLATE = 2,
    VANILLA = 3,
    BLUEBERRY = 4,
    COTTON_CANDY = 5,
    ROCKY_ROAD = 6,
    NEOPOLITAN = 7,
    RASPBERRY_RIPPLE = 8,
    PISTACCHIO = 9,
    MAX = 10,
}

---@enum EIceCreamMakingState
local EIceCreamMakingState = {
    DEFAULT = 0,
    PLACING_CONE = 1,
    MAKING_SCOOP = 2,
    SELECTING_CONE_TO_PLACE_SCOOP = 3,
    PLACING_SCOOP_ON_CONE = 4,
    CLEANING_SPOON = 5,
    MAX = 6,
}

---@enum EIceCreamPadTargetSection
local EIceCreamPadTargetSection = {
    UPPER_SECTION = 0,
    ICE_CREAM_CONTAINER_TOP = 1,
    ICE_CREAM_CONTAINER_BOTTOM = 2,
    MAX = 3,
}

---@enum EIceCreamPadTargetType
local EIceCreamPadTargetType = {
    ICE_CREAM_CONE_CONTAINER = 0,
    ICE_CREAM_HOLDER = 1,
    ICE_CREAM_CONTAINER = 2,
    BELL = 3,
    MAX = 4,
}

---@enum EInteractableTaskType
local EInteractableTaskType = {
    BUY_ICE_CREAM_STAND = 0,
    GO_RELAX_CUSTOMER = 1,
    GO_TO_BUS_STOP = 2,
    GO_TO_CAR_REPAIR = 3,
    GO_TO_CAR_WASH = 4,
    GO_TO_CASH = 5,
    GO_TO_FUEL_MAGAZINE = 6,
    GO_TO_GARBAGE = 7,
    GO_TO_HOME = 8,
    GO_TO_ICE_CREAM_RELAX = 9,
    GO_TO_MAGAZINE = 10,
    GO_TO_TRASH_BIN = 11,
    TAKE_ALCOHOL = 12,
    TAKE_CAR_CARE = 13,
    TAKE_CIGARETTES = 14,
    TAKE_FOOD = 15,
    TAKE_FUEL = 16,
    TAKE_GLASSES = 17,
    TAKE_HAT = 18,
    TAKE_ICE_CREAM = 19,
    TAKE_NEWSPAPER = 20,
    TAKE_PASTRY = 21,
    TAKE_SOFT_DRINK = 22,
    TAKE_TEDDYBEAR = 23,
    TAKE_TOILET = 24,
    TAKE_TOY = 25,
    DLC_AIRSTRIP_TAKE_ALCOHOL_R1 = 26,
    DLC_AIRSTRIP_TAKE_ALCOHOL_R2 = 27,
    DLC_AIRSTRIP_TAKE_HAT_R1 = 28,
    DLC_AIRSTRIP_TAKE_HAT_R2 = 29,
    DLC_AIRSTRIP_TAKE_GLASSES_R1 = 30,
    DLC_AIRSTRIP_TAKE_GLASSES_R2 = 31,
    DLC_AIRSTRIP_TAKE_CIGARETTES_R1 = 32,
    DLC_AIRSTRIP_TAKE_FOOD_R1 = 33,
    DLC_AIRSTRIP_TAKE_FOOD_R2 = 34,
    DLC_AIRSTRIP_TAKE_SOFT_DRINK_R1 = 35,
    DLC_AIRSTRIP_TAKE_SOFT_DRINK_R2 = 36,
    DLC_AIRSTRIP_TAKE_PASTRY_R1 = 37,
    DLC_AIRSTRIP_TAKE_PASTRY_R2 = 38,
    DLC_AIRSTRIP_TAKE_TOY_R1 = 39,
    DLC_AIRSTRIP_TAKE_TOY_R2 = 40,
    DLC_AIRSTRIP_TAKE_PREMIUM_DRINKS_R1 = 41,
    DLC_AIRSTRIP_TAKE_PREMIUM_DRINKS_R2 = 42,
    DLC_AIRSTRIP_TAKE_SOFT_TOY_R1 = 43,
    DLC_AIRSTRIP_TAKE_SOFT_TOY_R2 = 44,
    GO_TO_SCUBA = 45,
    GO_TO_WINDSURFING = 46,
    SCUBA_DIVE = 47,
    WINDSURF = 48,
    GO_TO_DANCE = 49,
    TAKE_SHOWER = 50,
    TAKE_LOTTERY_TICKET = 51,
    GO_TO_LOTTERY_RELAX = 52,
    GO_TO_CINEMA = 53,
    GO_TO_GUESTSERVICE = 54,
    GO_TO_CONCERT = 55,
    GO_PANIC = 56,
    LEAVE_CAMPER = 57,
    GO_TO_CAMPER = 58,
    GO_TO_LEAVING_CAMPER = 59,
    MAX = 60,
}

---@enum EInteractionButton
local EInteractionButton = {
    TAB = 0,
    LMB = 1,
    RMB = 2,
    SPACE = 3,
    Q = 4,
    E = 5,
    ESC = 6,
    F = 7,
    R = 8,
    EInteractionButton_MAX = 9,
}

---@enum EInteractionOutput
local EInteractionOutput = {
    Pressed = 0,
    Released = 1,
    EInteractionOutput_MAX = 2,
}

---@enum EInteractionPrefix
local EInteractionPrefix = {
    CLICK = 0,
    HOLD = 1,
    RELEASE = 2,
    PRESS = 3,
    EInteractionPrefix_MAX = 4,
}

---@enum EInteractionPriority
local EInteractionPriority = {
    First = 0,
    Second = 1,
    Third = 2,
    EInteractionPriority_MAX = 3,
}

---@enum EInteractionSofix
local EInteractionSofix = {
    PLACE = 0,
    HIDE = 1,
    INTERACT = 2,
    ROTATE = 3,
    CANCEL = 4,
    PICK_UP = 5,
    PICK_ALL = 6,
    STORE_SINGLE = 7,
    STORE_ALL = 8,
    PAINT = 9,
    OPEN_INVENTORY = 10,
    HIDE_TOOL = 11,
    THROW = 12,
    DROP = 13,
    TANK = 14,
    TALK = 15,
    CUSTOMIZE = 16,
    EDIT_QUEUE = 17,
    TO_EDIT_CASH_DESK = 18,
    USE_SEAN = 19,
    EInteractionSofix_MAX = 20,
}

---@enum EInventoryChildType
local EInventoryChildType = {
    BasicInventory = 0,
    AltarInventory = 1,
    EInventoryChildType_MAX = 2,
}

---@enum EInventoryType
local EInventoryType = {
    ITEM_INVENTORY = 0,
    AIRSTRIP_INVENTORY = 1,
    MAX = 2,
}

---@enum EItemIconVisibility
local EItemIconVisibility = {
    VISIBLE = 0,
    NOT_ENOUGH_LEVEL = 1,
    NOT_READY = 2,
    NONE = 3,
    EItemIconVisibility_MAX = 4,
}

---@enum EItemTypeCategory
local EItemTypeCategory = {
    None = 0,
    ALL_DECORATIONS = 1,
    FAVORITES_DECORATIONS = 2,
    STANDING = 3,
    HANGING = 4,
    ALL_SHELVES = 5,
    FAVORITES_SHELVES = 6,
    BIG_SHELVES = 7,
    SMALL_SHELVES = 8,
    SPECIFIC_SHELVES = 9,
    STANDING_SHELVES = 10,
    HANGING_SHELVES = 11,
    FAVORITES_PRODUCTS = 12,
    ALL_PRODUCTS = 13,
    SNACKS = 14,
    SOFT_DRINKS = 15,
    ICE_CREAMS = 16,
    ALCOHOL = 17,
    TOBACCO = 18,
    NEWSPAPER = 19,
    CAR_CARE = 20,
    HATS = 21,
    GLASSES = 22,
    TOYS = 23,
    SOFT_TOYS = 24,
    PASTERIES = 25,
    PREMIUM_DRINKS = 26,
    FAVORITES_PARTS = 27,
    ALL_PARTS = 28,
    PARTS = 29,
    COSMETICS = 30,
    KEY_ITEMS = 31,
    WHEEL = 32,
    SCRATCH_REMOVER = 33,
    CAR_MIRROR = 34,
    OIL = 35,
    BATTERY = 36,
    SPARK_PLUG = 37,
    COOLANT = 38,
    Engine_Oil = 39,
    Duct_Tape = 40,
    IceCream_Containers = 41,
    Strawberry = 42,
    GreenApple = 43,
    Chocolate = 44,
    Vanilla = 45,
    Blueberry = 46,
    CottonCandy = 47,
    RockyRoad = 48,
    Neapolitan = 49,
    Raspberry = 50,
    Pistachio = 51,
    SCUBA_EQUIPMENT = 52,
    SURFING_EQUIPMENT = 53,
    MUGS = 54,
    MEAT = 55,
    ALCOHOL_VESSELS = 56,
    BEER = 57,
    WHISKY = 58,
    VODKA = 59,
    GIN = 60,
    TEQUILA = 61,
    MAX = 62,
}

---@enum EJoeAirplaneState
local EJoeAirplaneState = {
    CRASHED = 0,
    TOWING = 1,
    TAPE_FIXING = 2,
    FUELING = 3,
    LIFTING_OFF = 4,
    FLYING_AWAY = 5,
    MAX = 6,
}

---@enum EJoeOrderType
local EJoeOrderType = {
    BLUEPRINT = 0,
    MONEY = 1,
    MAX = 2,
}

---@enum EJoeSittingState
local EJoeSittingState = {
    Breathing = 0,
    Drinking = 1,
    Smoking = 2,
    MAX = 3,
}

---@enum EJoeTasksPlaces
local EJoeTasksPlaces = {
    BENCH = 0,
    MAX = 1,
}

---@enum EJunkyardCarPartType
local EJunkyardCarPartType = {
    FRONTBUMPER = 0,
    REARBUMPER = 1,
    LEFTDOOR = 2,
    RIGHTDOOR = 3,
    FRONTWHEELS = 4,
    BACKWHEELS = 5,
    SPOILER = 6,
    EXHAUST = 7,
    MIRRORS = 8,
    ENGINE = 9,
    TURBO = 10,
    HOOD = 11,
    BATTERY = 12,
    SPARKPLUG = 13,
    CARBODY = 14,
    LOGO = 15,
    MAX = 16,
}

---@enum EJunkyardCarWreckType
local EJunkyardCarWreckType = {
    CAR1 = 0,
    CAR2 = 1,
    CAR3 = 2,
    CAR4 = 3,
    CAR5 = 4,
    CAR6 = 5,
    CAR7 = 6,
    CAR8 = 7,
    CAR_NON_CUSTOMIZABLE1 = 8,
    CAR_NON_CUSTOMIZABLE2 = 9,
    CAR_NON_CUSTOMIZABLE3 = 10,
    MAX = 11,
}

---@enum EJunkyardDecalPossibility
local EJunkyardDecalPossibility = {
    PAINTABLE = 0,
    RUSTY = 1,
    NOTPAINTABLE = 2,
    MISSINGPARTS = 3,
    NOTONPLATFORM = 4,
    MAX = 5,
}

---@enum EJunkyardFilters
local EJunkyardFilters = {
    All = 0,
    FrontBumper = 1,
    RearBumper = 2,
    Doors = 3,
    Hood = 4,
    Rims = 5,
    Spoiler = 6,
    Exhaust = 7,
    Mirrors = 8,
    Engine = 9,
    Turbo = 10,
    EJunkyardFilters_MAX = 11,
}

---@enum EJunkyardPartRarity
local EJunkyardPartRarity = {
    FAKE = 0,
    SUBSTITUTE = 1,
    ORIGINAL = 2,
    NONE = 3,
    MAX = 4,
}

---@enum EJunkyardSortings
local EJunkyardSortings = {
    Alphabetical = 0,
    Alphabetical_Descending = 1,
    Tiers_Ascending = 2,
    Tiers_Descending = 3,
    EJunkyardSortings_MAX = 4,
}

---@enum ELeaderboardDataType
local ELeaderboardDataType = {
    Global = 0,
    GlobalAroundUser = 1,
    Friends = 2,
    Users = 3,
    ELeaderboardDataType_MAX = 4,
}

---@enum EMagnetDetachErrorReason
local EMagnetDetachErrorReason = {
    DEFAULT = 0,
    TOO_CLOSE_TO_PLANE_DROP_ZONE = 1,
    NO_DROPPABLE_AREA = 2,
    AREA_OCCUPIED = 3,
    AREA_DISABLED = 4,
    INVALID_ACTOR_CLASS = 5,
    AREA_LOCKED = 6,
    MAX = 7,
}

---@enum EMagnetState
local EMagnetState = {
    OBJECT_ATTACHED = 0,
    OBJECT_NOT_ATTACHED = 1,
    OBJECT_ROTATION_ADJUSMENT = 2,
    MAX = 3,
}

---@enum EMapRquiredType
local EMapRquiredType = {
    BARN = 0,
    BARN_PROPSAL_ADDON = 1,
    TOWY_HOUSE = 2,
    AIR_PORT = 3,
    TRADE_CENTER = 4,
    EMapRquiredType_MAX = 5,
}

---@enum EMarshalWandsMinigameDifficulty
local EMarshalWandsMinigameDifficulty = {
    EASY = 0,
    MEDIUM = 1,
    HARD = 2,
    MAX = 3,
}

---@enum EMeshMovementDirection
local EMeshMovementDirection = {
    FORWARD = 0,
    BACK = 1,
    MAX = 2,
}

---@enum EMinigame
local EMinigame = {
    None = 0,
    Digger = 1,
    Fueling = 2,
    Painting = 3,
    CashRegister = 4,
    RacingCar = 5,
    LockPick = 6,
    Decorations = 7,
    Shelfs = 8,
    Throwing = 9,
    TrashBag = 10,
    JerryCan = 11,
    Broom = 12,
    Money = 13,
    RacingCar2 = 14,
    Popularity = 15,
    WheelGarage = 16,
    MirrorGarage = 17,
    ScratchGarage = 18,
    OilGarage = 19,
    CoolantGarage = 20,
    SparkplugGarage = 21,
    GarageMainTutorial = 22,
    Employee = 23,
    RefillShelvsProducts = 24,
    RefillShelvsCarParts = 25,
    ProductPriceProducts = 26,
    ProductPriceCarParts = 27,
    Max = 28,
}

---@enum EMirrorSide
local EMirrorSide = {
    LEFT = 0,
    RIGHT = 1,
    MAX = 2,
}

---@enum EMoneyType
local EMoneyType = {
    Normal = 0,
    Fuel = 1,
    Cash = 2,
    Garage = 3,
    EMoneyType_MAX = 4,
}

---@enum EMontageCancelReason
local EMontageCancelReason = {
    NewTask = 0,
    Dialog = 1,
    MAX = 2,
}

---@enum EMontagePilotState
local EMontagePilotState = {
    Mounted = 0,
    Mounting = 1,
    UnMounted = 2,
    UnMounting = 3,
    Unpatient_1 = 4,
    Unpatient_2 = 5,
    MAX = 6,
}

---@enum EMontageStatus
local EMontageStatus = {
    Start = 0,
    Stop = 1,
    EMontageStatus_MAX = 2,
}

---@enum EMovementGroundType
local EMovementGroundType = {
    Walk = 0,
    Jog = 1,
    Run = 2,
    Dance_1 = 3,
    Dance_2 = 4,
    Elvis = 5,
    Panic = 6,
    EMovementGroundType_MAX = 7,
}

---@enum EMovementState
local EMovementState = {
    NORMAL = 0,
    LADDER = 1,
    MAX = 2,
}

---@enum EMovementType
local EMovementType = {
    Walking = 0,
    Vehicle = 1,
    Flying = 2,
    EMovementType_MAX = 3,
}

---@enum EMyEnum
local EMyEnum = {
    BranchA = 0,
    BranchB = 1,
    EMyEnum_MAX = 2,
}

---@enum ENPCAccent
local ENPCAccent = {
    AMERICAN = 0,
    AUSTRALIAN = 1,
    BRITISH = 2,
    FRENCH = 3,
    EASTERN_EUROPEAN = 4,
    PORTUGESE = 5,
    SPANISH = 6,
    MAX = 7,
}

---@enum ENPCConversationType
local ENPCConversationType = {
    GREETING = 0,
    FAREWELL = 1,
    TRADING = 2,
    TRADE_HOLD = 3,
    TRADE_ACCEPTED = 4,
    TRADE_DENIED = 5,
    RESIGN = 6,
    DENIED_OFFER = 7,
    GOOD_REFUELING = 8,
    BAD_REFUELING = 9,
    LOST_DELIVERY = 10,
    ROUNDABOUT_WAY = 11,
    JOE_CRASHING = 12,
    JOE_CRASHSITE = 13,
    JOE_TOWYING = 14,
    JOE_REPARING = 15,
    JOE_MARSHALL = 16,
    JOE_TAKINGOFF = 17,
    JOE_STUNTS = 18,
    JOE_WAITING = 19,
    JOE_DELIVERY = 20,
    JOE_RANDOM_CALLS = 21,
    JOE_GOOD_FUELING = 22,
    JOE_BAD_FUELING = 23,
    SEAN_FIXING_ENGINE = 24,
    SEAN_SITTING_IN_OFFICE = 25,
    SEAN_MOVING_WRECK = 26,
    SEAN_CRUSHING_WRECK = 27,
    SEAN_ASSEMBLING = 28,
    SEAN_GRINDING = 29,
    SEAN_NEW_FAME_LEVEL = 30,
    SEAN_AFTER_UFO = 31,
    SEAN_AFTER_SELLING_CAR = 32,
    SEAN_AFTER_BUYING_UPGRADE = 33,
    SEAN_LONG_GREETING = 34,
    SEAN_DANCING_BEFORE = 35,
    SEAN_DANCING_DURING = 36,
    SEAN_DANCING_AFTER = 37,
    MAX = 38,
}

---@enum ENPCGender
local ENPCGender = {
    MALE = 0,
    FEMALE = 1,
    JOE = 2,
    MAX = 3,
}

---@enum ENotificationType
local ENotificationType = {
    CarWash = 0,
    Garage = 1,
    EmployeeNotWorking = 2,
    FuelDelivery = 3,
    WaterFuelDelivery = 4,
    AiportFuelDelivery = 5,
    MagazineTruck = 6,
    WaterMagazineDelivery = 7,
    CashShop = 8,
    Fuel = 9,
    WaterFuel = 10,
    TrashBinFull = 11,
    LowPressure = 12,
    IceCream = 13,
    ShowMail = 14,
    NoOk = 15,
    NoFuel = 16,
    Scuba = 17,
    Windsurfing = 18,
    Lottery = 19,
    Wreck = 20,
    Cinema = 21,
    RVService = 22,
    SDFightClub = 23,
    SDParkingDeal = 24,
    SDShadyWarehouse = 25,
    SDCasino = 26,
    SDCustomerAtBar = 27,
    SDGangPartyInProgress = 28,
    SDFightClubTraining = 29,
    ENotificationType_MAX = 30,
}

---@enum ENozzleRotation
local ENozzleRotation = {
    HORIZONTAL = 0,
    VERTICAL = 1,
    ENozzleRotation_MAX = 2,
}

---@enum ENumberOfDancingNPC
local ENumberOfDancingNPC = {
    One = 0,
    Three = 1,
    Six = 2,
    Eight = 3,
    Eleven = 4,
    Thirteen = 5,
    MAX = 6,
}

---@enum EObstacleSide
local EObstacleSide = {
    NoObstacle = 0,
    Left = 1,
    Right = 2,
    EObstacleSide_MAX = 3,
}

---@enum EOrdersType
local EOrdersType = {
    OrderProducts = 0,
    OrdersCarParts = 1,
    OrdersIceCream = 2,
    EOrdersType_MAX = 3,
}

---@enum EPhoneCallType
local EPhoneCallType = {
    PHONE_NOTIFICATION = 0,
    PHONE_PROLOGUE = 1,
    PHONE_SECOND = 2,
    PHONE_THIRD = 3,
    PHONE_POPULARITY = 4,
    PHONE_EMPLOYEE = 5,
    PHONE_BEFORE_SANDSTAROM = 6,
    PHONE_LAST_DEBT = 7,
    OPEN_TRUNK = 8,
    PHONE_SEAN_FIRST = 9,
    NOT_SET = 10,
    MAX = 11,
}

---@enum EPicnicProductType
local EPicnicProductType = {
    EPPT_Empty = 0,
    EPPT_Water = 1,
    EPPT_Beer = 2,
    EPPT_Apple = 3,
    EPPT_Carrots = 4,
    EPPT_Chips = 5,
    EPPT_Blanket = 6,
    EPPT_Donut = 7,
    EPPT_Grapes = 8,
    EPPT_Sandwich = 9,
    EPPT_Cups = 10,
    EPPT_Truck = 11,
    EPPT_MAX = 12,
}

---@enum EPilotGender
local EPilotGender = {
    FEMALE = 0,
    MALE = 1,
    MAX = 2,
}

---@enum EPlayerState
local EPlayerState = {
    Walk = 0,
    Driver = 1,
    Constructor = 2,
    EPlayerState_MAX = 3,
}

---@enum EPriceBoardInteractionType
local EPriceBoardInteractionType = {
    FromWorld = 0,
    FromPC = 1,
    MAX = 2,
}

---@enum EPriorityTraffic
local EPriorityTraffic = {
    Vehicle = 0,
    CarWash = 1,
    Cinema = 2,
    MAX = 3,
}

---@enum EProductArray
local EProductArray = {
    CiggaretShop = 0,
    FoodsShop = 1,
    HatsShop = 2,
    SoftDrinksShop = 3,
    AlcoholsShop = 4,
    MAX = 5,
}

---@enum EProductCashShopState
local EProductCashShopState = {
    TO_SCAN = 0,
    ON_BELT = 1,
    SCANNED = 2,
    MAX = 3,
}

---@enum EProductReason
local EProductReason = {
    Full = 0,
    NotEnough = 1,
    ProductPut = 2,
    TimeOver = 3,
    MAX = 4,
}

---@enum EProductVectorPointType
local EProductVectorPointType = {
    BUY_PRICE = 0,
    SELL_PRICE = 1,
    AVG_PRICE = 2,
    MAX = 3,
}

---@enum EProgressState
local EProgressState = {
    AVAILABLE = 0,
    IN_PROGRESS = 1,
    WAITING = 2,
    WRECK_ON_WAY = 3,
    COMPLETED = 4,
    FAILED = 5,
    MAX = 6,
}

---@enum EQuestShowType
local EQuestShowType = {
    ProgressBar = 0,
    Timer = 1,
    EQuestShowType_MAX = 2,
}

---@enum EQuestState
local EQuestState = {
    QuestSuccess = 0,
    QuestFailed = 1,
    QuestIgnored = 2,
    EQuestState_MAX = 3,
}

---@enum EQuestStateType
local EQuestStateType = {
    none = 0,
    Passed = 1,
    Allow = 2,
    OnQuest = 3,
    EQuestStateType_MAX = 4,
}

---@enum EQuestZoneShape
local EQuestZoneShape = {
    BOX = 0,
    CYLINDER = 1,
    MAX = 2,
}

---@enum EQueueType
local EQueueType = {
    EQT_None = 0,
    EQT_Fast = 1,
    EQT_Slow = 2,
    EQT_MAX = 3,
}

---@enum ERVBookingView
local ERVBookingView = {
    BOOKING = 0,
    OVERVIEW = 1,
    UPGRADE = 2,
    MAX = 3,
}

---@enum ERVCamperLeftReason
local ERVCamperLeftReason = {
    FULFILLED = 0,
    DISMISSED = 1,
    MAX = 2,
}

---@enum ERVCamperState
local ERVCamperState = {
    ARRIVING = 0,
    PARKED = 1,
    LEAVING = 2,
    MAX = 3,
}

---@enum ERVChallengeTarget
local ERVChallengeTarget = {
    ECT_CampersAmount = 0,
    ECT_GuestAmount = 1,
    ECT_RelaxBelow = 2,
    ECT_DifferentGuestServicePerformed = 3,
    ECT_MoneyEarn = 4,
    MAX = 5,
}

---@enum ERVChallengeTimeTrackType
local ERVChallengeTimeTrackType = {
    ETT_UNLIMITED = 0,
    ETT_Hours = 1,
    ETT_WholeTurnout = 2,
    ETT_MAX = 3,
}

---@enum ERVCustomerState
local ERVCustomerState = {
    INTERESTED = 0,
    BOOKED = 1,
    ACTIVE = 2,
    WAITING_CHECK_OUT = 3,
    CHECKED_OUT = 4,
    MAX = 5,
}

---@enum ERVEventType
local ERVEventType = {
    UFO = 0,
    DENIS = 1,
    SANDSTORM = 2,
    MAX = 3,
}

---@enum ERVGuestType
local ERVGuestType = {
    SERVICE = 0,
    SLEEPOVER = 1,
    CONCERT = 2,
    MAX = 3,
}

---@enum ERVMinigameCameraBlendOutMode
local ERVMinigameCameraBlendOutMode = {
    END_MINIGAME = 0,
    LATE_END_MINIGAME = 1,
    ERVMinigameCameraBlendOutMode_MAX = 2,
}

---@enum ERVMinigameStage
local ERVMinigameStage = {
    INACTIVE = 0,
    EARLY = 1,
    NORMAL = 2,
    POST_END = 3,
    ERVMinigameStage_MAX = 4,
}

---@enum ERVResource
local ERVResource = {
    POWER = 0,
    WATER = 1,
    SEWERAGE = 2,
    MAX = 3,
}

---@enum ERVServiceState
local ERVServiceState = {
    NORMAL = 0,
    LOCKED = 1,
    COMPLETED = 2,
    AUTOMATED = 3,
    AUTOMATED_UNPAID = 4,
    MAX = 5,
}

---@enum ERVUpgradableBuilding
local ERVUpgradableBuilding = {
    CAMP_SPOT = 0,
    SERVICE = 1,
    RESOURCE = 2,
    OFFICE = 3,
    CONCERT = 4,
    COUSIN_HOUSE = 5,
    MAX = 6,
}

---@enum ERefuelObjectiveType
local ERefuelObjectiveType = {
    LESS = 0,
    NEARLY_EQUALS = 1,
    MORE = 2,
    MAX = 3,
}

---@enum ERelativeDirection
local ERelativeDirection = {
    FRONT = 0,
    FRONT_RIGHT = 1,
    RIGHT = 2,
    BACK_RIGHT = 3,
    BACK = 4,
    BACK_LEFT = 5,
    LEFT = 6,
    FRONT_LEFT = 7,
    MAX = 8,
}

---@enum ERelativeDirectionReturnAmount
local ERelativeDirectionReturnAmount = {
    TWO = 0,
    FOUR = 1,
    EIGHT = 2,
    MAX = 3,
}

---@enum ERelativeDistance
local ERelativeDistance = {
    ERD_CLOSEST = 0,
    ERD_FARTHEST = 1,
    ERD_MAX = 2,
}

---@enum ERenown_Reasons
local ERenown_Reasons = {
    SHOP_CUSTOMER_SERVED = 0,
    FUEL_CUSTOMER_SERVED = 1,
    CARS_WASHED = 2,
    GARAGE_CUSTOMER_SERVED = 3,
    ICE_CREAM_CUSTOMERS_SERVED = 4,
    TRASH = 5,
    TOILET = 6,
    CHALLENGES = 7,
    HELPING_JOE = 8,
    WAITED_TOO_LONG = 9,
    PARTY_SPOT = 10,
    BIKER = 11,
    CHEATS = 12,
    DIRTY = 13,
    STEALING = 14,
    OTHER = 15,
    NO_RENOWN = 16,
    TIME = 17,
    SACRIFICE = 18,
    CUSTOMER_DIED = 19,
    PLAYER_LITTERING = 20,
    SHOWER = 21,
    BUILDING_BOUGHT = 22,
    LANDMARK_BOUGHT = 23,
    LOTTERY = 24,
    MAX = 25,
}

---@enum ERunway
local ERunway = {
    MiddleStrip = 0,
    ThirdStrip = 1,
    MAX = 2,
}

---@enum ESDFightClubAttackResult
local ESDFightClubAttackResult = {
    DamageDealt = 0,
    DamageNegated = 1,
    DamageAvoided = 2,
    KnockOut = 3,
    MAX = 4,
}

---@enum ESDFightClubGloves
local ESDFightClubGloves = {
    DefaultGloves = 0,
    ReducedPadding = 1,
    GravelPadding = 2,
    BuckshotFilled = 3,
    Horseshoe = 4,
    MAX = 5,
}

---@enum ESDFightClubPhase
local ESDFightClubPhase = {
    None = 0,
    Training = 1,
    Fight = 2,
    MAX = 3,
}

---@enum ESDFightClubWinReason
local ESDFightClubWinReason = {
    None = 0,
    EnemyKnockOut = 1,
    JudgesPoints = 2,
    MAX = 3,
}

---@enum ESDFightClubZone
local ESDFightClubZone = {
    None = 0,
    Red = 1,
    Blue = 2,
    MAX = 3,
}

---@enum ESDFirePitMeatStatus
local ESDFirePitMeatStatus = {
    None = 0,
    Raw = 1,
    Cooked = 2,
    Burnt = 3,
    MAX = 4,
}

---@enum ESDGangActivityResult
local ESDGangActivityResult = {
    Success = 0,
    Fail = 1,
    CriticalFail = 2,
    CaughtFail = 3,
    Silent = 4,
    MAX = 5,
}

---@enum ESDGangActivityType
local ESDGangActivityType = {
    FightClub = 0,
    Conference = 1,
    ParkingMeet = 2,
    Warehouse = 3,
    SheriffPatrol = 4,
    Casino = 5,
    PrisonBus = 6,
    MAX = 7,
}

---@enum ESDMinigameEndReason
local ESDMinigameEndReason = {
    Success = 0,
    TimeOut = 1,
    CrucialActorLost = 2,
    Cancel = 3,
    Fail = 4,
    CriticalFail = 5,
    CaughtBySheriff = 6,
    MAX = 7,
}

---@enum ESDPenaltyType
local ESDPenaltyType = {
    LastDayIncomePercent = 0,
    FixedPenalty = 1,
    MAX = 2,
}

---@enum ESDShadynessModifierPersistance
local ESDShadynessModifierPersistance = {
    Instant = 0,
    Duration = 1,
    ESDShadynessModifierPersistance_MAX = 2,
}

---@enum ESeanTaskBark
local ESeanTaskBark = {
    NONE = 0,
    FIXING_ENGINE = 1,
    SITTING_IN_OFFICE = 2,
    MOVING_WRECK = 3,
    CRUSHING_WRECK = 4,
    ASSEMBLING = 5,
    GRINDING = 6,
    ESeanTaskBark_MAX = 7,
}

---@enum EShelfSize
local EShelfSize = {
    BIG_SHELVE = 0,
    SMALL_SHELVE = 1,
    EShelfSize_MAX = 2,
}

---@enum EShelfType
local EShelfType = {
    ShopShelf = 0,
    GarageShelf = 1,
    TapeShelf = 2,
    PartyShelf = 3,
    EShelfType_MAX = 4,
}

---@enum EShelveSortType
local EShelveSortType = {
    NOT_SORTED = 0,
    QUANTITY_ASCENDING = 1,
    QUANTITY_DESCENDING = 2,
    EShelveSortType_MAX = 3,
}

---@enum EShiftType
local EShiftType = {
    DAY = 0,
    NIGHT = 1,
    MAX = 2,
}

---@enum EShootingRangeDifficulty
local EShootingRangeDifficulty = {
    StandUp = 0,
    Movable = 1,
    ZigZag = 2,
    UFO = 3,
    Coyot = 4,
    MAX = 5,
}

---@enum ESnapType
local ESnapType = {
    Wall = 0,
    Shelf = 1,
    Special = 2,
    ESnapType_MAX = 3,
}

---@enum ESortType
local ESortType = {
    ALPHABETICAL = 0,
    TYPE = 1,
    NEWEST = 2,
    PRICE_ASCENDING = 3,
    PRICE_DESCENDING = 4,
    QUANTITY_ASCENDING = 5,
    QUANTITY_DESCENDING = 6,
    FAVOURITES = 7,
    ESortType_MAX = 8,
}

---@enum ESpecialCharacterType
local ESpecialCharacterType = {
    DEFAULT = 0,
    VIP = 1,
    MAX = 2,
}

---@enum ESpiderPositionType
local ESpiderPositionType = {
    NONE = 0,
    WEB_STANDING = 1,
    WEB_WALL = 2,
    WEB_WALL_01 = 3,
    WEB_HANGING = 4,
    WEB_HANGING_01 = 5,
    WEB_HANGING_01_LONG = 6,
    WEB_HANGING_01_SHORT = 7,
    ESpiderPositionType_MAX = 8,
}

---@enum ESpoonAnimation
local ESpoonAnimation = {
    NO_ANIM = 1,
    FOLLOW_MOUSE = 2,
    SPOON_WITH_SCOOP = 3,
    SPOON_TO_CONTAINER = 4,
    SPOON_TO_CONE = 5,
    TO_HAND = 6,
    FLIP = 7,
    MAX = 8,
}

---@enum EState
local EState = {
    TEXAS = 0,
    NEW_MEXICO = 1,
    OKLAHOMA = 2,
    KANSAS = 3,
    MISSOURI = 4,
    ILLINOIS = 5,
    ARIZONA = 6,
    CALIFORNIA = 7,
    MAX = 8,
}

---@enum EStorageOpenCase
local EStorageOpenCase = {
    BaseStorage = 0,
    ChemicalMiniGame = 1,
    PartSelecting = 2,
    EStorageOpenCase_MAX = 3,
}

---@enum EStorageType
local EStorageType = {
    WARE_HOUSE_STORAGE = 0,
    AIRPORT_STORAGE = 1,
    ALL = 2,
    EStorageType_MAX = 3,
}

---@enum EStructureType
local EStructureType = {
    WALL = 0,
    WINDOW = 1,
    GAS_STATION_DOOR = 2,
    TOILET_DOOR = 3,
    DOOR = 4,
    PILLAR = 5,
    ROOF = 6,
    FLOOR = 7,
    OTHER = 8,
    DEFAULT = 9,
    MAX = 10,
}

---@enum ESwitchState
local ESwitchState = {
    ON = 0,
    OFF = 1,
    MAX = 2,
}

---@enum ETargetTeam
local ETargetTeam = {
    Red = 0,
    Blue = 1,
    Neutral = 2,
    ETargetTeam_MAX = 3,
}

---@enum ETaskAreaType
local ETaskAreaType = {
    None = 0,
    GasStation = 1,
    Restauration = 2,
    ETaskAreaType_MAX = 3,
}

---@enum ETaskResult
local ETaskResult = {
    TaskSuccess = 0,
    TaskFalse = 1,
    TaskIgnore = 2,
    ETaskResult_MAX = 3,
}

---@enum EToolItemState
local EToolItemState = {
    UNLOCKED = 0,
    LOCKED = 1,
    OWNED = 2,
    EToolItemState_MAX = 3,
}

---@enum ETradingBoosts
local ETradingBoosts = {
    HOT_STUFF = 0,
    STEAL_OF_A_DAY = 1,
    HOSSA = 2,
    LOST_DELIVERY = 3,
    ROUNDABOUT_WAY = 4,
    NONE = 5,
    ETradingBoosts_MAX = 6,
}

---@enum ETradingCenterUpgrade
local ETradingCenterUpgrade = {
    HEADQUATERS = 0,
    RADIO_TOWER = 1,
    COM_CENTER = 2,
    MAX = 3,
}

---@enum ETradingSkill
local ETradingSkill = {
    EXTRA_TIME = 0,
    COGENCY = 1,
    THE_POWER_OF_CALM = 2,
    EXPRESSION_OF_GRATITUDE = 3,
    DENY_SKILL = 4,
    CARGO_INTEL_SKILL = 5,
    NONE = 6,
    ETradingSkill_MAX = 7,
}

---@enum EUIState
local EUIState = {
    MAIN_COMPUTER = 0,
    COMPUTER_SUBLVL = 1,
    AGREE_STATE = 2,
    DELIVERY_ACCEPT = 3,
    MINI_GAME_FUEL = 4,
    MINI_GAME_AIR = 5,
    MAX = 6,
}

---@enum EUnlockableGameplayStuffState
local EUnlockableGameplayStuffState = {
    LOCKED = 0,
    UNLOCKED = 1,
    MAX = 2,
}

---@enum EUnlockableUIState
local EUnlockableUIState = {
    HIDDED = 0,
    LOCKED = 1,
    UNLOCKED = 2,
    MAX = 3,
}

---@enum EUpgradeBuildingType
local EUpgradeBuildingType = {
    GAS_STATION = 0,
    WAREHOUSE = 1,
    WORKSHOP = 2,
    CAR_WASH = 3,
    PARTY_TIME = 4,
    PARTY_SPOT = 5,
    ICE_CREAM_STAND = 6,
    BARN = 7,
    AIRPORT = 8,
    AIRPORT_STORAGE = 9,
    TRADE_CENTER = 10,
    RADIO_TOWER = 11,
    BUS_STOP = 12,
    PARKING_SPOT = 13,
    TOILET = 14,
    EMPLOYEE_CARAVAN = 15,
    MAX = 16,
}

---@enum EVIPState
local EVIPState = {
    RESTING = 0,
    TRAVELING = 1,
    ON_MAP = 2,
    GOING_BACK = 3,
    AWAITING = 4,
    MAX = 5,
}

---@enum EVehicleDirection
local EVehicleDirection = {
    Forward = 0,
    Right = 1,
    Left = 2,
    EVehicleDirection_MAX = 3,
}

---@enum EVehicleHoodState
local EVehicleHoodState = {
    CLOSED = 0,
    CLOSING = 1,
    OPEN = 2,
    OPENING = 3,
    MAX = 4,
}

---@enum EVehicleMoveState
local EVehicleMoveState = {
    Driving = 0,
    Stopped = 1,
    Flying = 2,
    EVehicleMoveState_MAX = 3,
}

---@enum EVehicleMovementState
local EVehicleMovementState = {
    Move = 0,
    Block = 1,
    EVehicleMovementState_MAX = 2,
}

---@enum EVehicleOptymalizeType
local EVehicleOptymalizeType = {
    Default = 0,
    Fuel = 1,
    Repair = 2,
    CarWash = 3,
    EVehicleOptymalizeType_MAX = 4,
}

---@enum EVehicleSpawnType
local EVehicleSpawnType = {
    Car = 0,
    Boat = 1,
    EVehicleSpawnType_MAX = 2,
}

---@enum EVehicleState
local EVehicleState = {
    Idle = 0,
    Move = 1,
    Repair = 2,
    EVehicleState_MAX = 3,
}

---@enum EVehicleType
local EVehicleType = {
    Vehicle = 0,
    Truck = 1,
    Bus = 2,
    EVehicleType_MAX = 3,
}

---@enum EWallSide
local EWallSide = {
    Front = 0,
    Back = 1,
    EWallSide_MAX = 2,
}

---@enum EWarehouseAdditionalFeautures
local EWarehouseAdditionalFeautures = {
    AutomaticValve = 0,
    EWarehouseAdditionalFeautures_MAX = 1,
}

---@enum EWheelSide_FourWheel
local EWheelSide_FourWheel = {
    FRONT_LEFT = 0,
    FRONT_RIGHT = 1,
    BACK_LEFT = 2,
    BACK_RIGHT = 3,
    MAX = 4,
}

---@enum EWorkerWorkType
local EWorkerWorkType = {
    FUEL = 0,
    REPAIR = 1,
    CLEANING = 2,
    CASH_REGISTER = 3,
    ICE_CREAM_VENDING = 4,
    CINEMA = 5,
    RESTOCK_SHELVES = 6,
    MAX = 7,
}

---@enum eCinemaProjectorState
local eCinemaProjectorState = {
    READY = 0,
    INPROGRESS = 1,
    eCinemaProjectorState_MAX = 2,
}

---@enum eDialogueAction
local eDialogueAction = {
    END_CONVERSATION = 0,
    MAX = 1,
}

---@enum eDialogueRequirement
local eDialogueRequirement = {
    MAX = 0,
}

---@enum eDialogueType
local eDialogueType = {
    GREETING = 0,
    NPC_TEXT = 1,
    NPC_TEXT_RESPOND = 2,
    PLAYER_TEXT = 3,
    MAX = 4,
}

---@enum eLotteryState
local eLotteryState = {
    READY = 0,
    ACTIVE = 1,
    FINISHED = 2,
    eLotteryState_MAX = 3,
}

---@enum ePopcornMachineState
local ePopcornMachineState = {
    READY = 0,
    INPROGRESS = 1,
    ePopcornMachineState_MAX = 2,
}

---@enum eTicketParameters
local eTicketParameters = {
    DIGIT_ID = 0,
    MOVIE_NAME = 1,
    CINEMA_NAME = 2,
    FILM_IMAGE = 3,
    FILM_TIME = 4,
    MAX = 5,
}

---@enum eTicketState
local eTicketState = {
    UNDEFINED = 0,
    UNVERIFIED = 1,
    VALIDATED = 2,
    GOING_HOME = 3,
    eTicketState_MAX = 4,
}

