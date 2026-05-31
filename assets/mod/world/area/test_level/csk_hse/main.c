EntryList Entrances = {
    { 0.0, 0.0, 0.0, 0.0 },
};

EvtScript EVS_BindExitTriggers = {
    Return
    End
};

EvtScript EVS_Main = {
    Set(GB_WorldLocation, LOCATION_TOAD_TOWN)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)

    Set(LVar0, Ref(EVS_BindExitTriggers))
    Exec(EnterWalk)

    Return
    End
};

export MapSettings settings = {
    .main = &EVS_Main,
    .entryList = &Entrances,
    .entryCount = ENTRY_COUNT(Entrances),
    .bgName = "kmr_bg",
    .textureArchive = "kmr",
};
