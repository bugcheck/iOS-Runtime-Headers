/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableSet, NSSet, NSString, VKMapModel, VKStyleManager;

@interface VKMapTileModel : VKModelObject <VKMapLayer, VKStyleManagerObserver> {
    VKMapModel *_mapModel;
    unsigned char _maximumZ;
    unsigned char _minimumZ;
    NSMutableSet *_previousTilesInScene;
    NSMutableSet *_tilesExitingScene;
    NSMutableSet *_tilesInScene;
    NSMutableSet *_tilesInScenePlusExitingTiles;
    NSMutableSet *_tilesWillEnterScene;
    NSMutableSet *_tilesWillExitScene;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property VKMapModel * mapModel;
@property(readonly) unsigned char maximumZ;
@property(readonly) unsigned char minimumZ;
@property(readonly) VKStyleManager * styleManager;
@property(readonly) Class superclass;
@property(readonly) NSSet * tilesInScene;
@property(readonly) NSSet * tilesInScenePlusExitingTiles;

+ (bool)reloadOnActiveTileGroupChange;
+ (bool)reloadOnStylesheetChange;

- (void)activeTileGroupChanged;
- (void)clearCollections;
- (void)createCollections;
- (void)createCollectionsIfNecessary;
- (void)dealloc;
- (void)didMoveToSupermodel;
- (id)init;
- (unsigned long long)mapLayerPosition;
- (id)mapModel;
- (unsigned char)maximumZ;
- (bool)maximumZoomLevelBoundsCamera;
- (unsigned char)minimumZ;
- (bool)minimumZoomLevelBoundsCamera;
- (void)removePersistingExitingTiles:(id)arg1;
- (void)reset;
- (void)setMapModel:(id)arg1;
- (bool)shouldLayoutWithoutStyleManager;
- (id)styleManager;
- (void)stylesheetDidChange;
- (void)stylesheetWillChange;
- (id)tilesInScene;
- (id)tilesInScenePlusExitingTiles;
- (void)updateTilesInScene:(id)arg1 withContext:(id)arg2 categorize:(bool)arg3;
- (void)willStartDrawingTiles:(id)arg1;
- (void)willStopDrawingTiles:(id)arg1;

@end
