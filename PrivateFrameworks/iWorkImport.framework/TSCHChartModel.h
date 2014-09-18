/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSMutableArray, NSMutableDictionary, TSCHChartGrid, TSCHChartInfo;

@interface TSCHChartModel : NSObject <TSCHNotifyOnModify, TSCHUnretainedParent, TSDMixing, NSCopying> {
    boolmIsTransient;
    boolmModelInvalid;
    NSMutableArray *mAxisList;
    TSCHChartGrid *mGrid;
    NSMutableDictionary *mGridIndexesBySeriesDimension;
    TSCHChartInfo *mInfo;
    NSMutableDictionary *mModelManagedCaches;
    unsigned long long mMultiDataSetIndex;
    unsigned long long mNumberOfSeriesForCalculatingBarWidth;
    int mScatterFormat;
    NSMutableDictionary *mSeriesDimensionsByGridIndex;
    NSMutableArray *mSeriesList;
}

@property(retain,readonly) NSArray * axisList;
@property(retain,readonly) NSArray * categoryAxisList;
@property TSCHChartInfo * chartInfo;
@property(retain) TSCHChartGrid * grid;
@property(readonly) bool isMultiData;
@property(readonly) bool isTransient;
@property unsigned long long multiDataSetIndex;
@property(readonly) unsigned long long numberOfChunkableMultiDataSets;
@property(readonly) unsigned long long numberOfMultiDataSetCategories;
@property(readonly) unsigned long long numberOfMultiDataSets;
@property(readonly) unsigned long long numberOfSeries;
@property(readonly) unsigned long long numberOfSeriesForCalculatingBarWidth;
@property(readonly) unsigned long long numberOfValues;
@property int scatterFormat;
@property(retain,readonly) NSArray * seriesList;
@property(retain,readonly) id syncRoot;
@property(retain,readonly) NSArray * valueAxisList;

- (id)axisForID:(id)arg1;
- (id)axisList;
- (id)barModelCacheForSeries:(unsigned long long)arg1;
- (id)cachedObjectForKey:(id)arg1;
- (id)categoryAxisList;
- (unsigned long long)categoryForMultiDataSetCategoryIndex:(unsigned long long)arg1;
- (id)chartInfo;
- (void)clearParent;
- (void)clearTextEditingSelectionPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSetNameForMultiDataModel;
- (void)dealloc;
- (unsigned long long)defaultOrdinalForAxisType:(int)arg1 seriesIndex:(unsigned long long)arg2;
- (void)enumerateMultiDataModelsUsingBlock:(id)arg1;
- (id)grid;
- (unsigned long long)gridIndexForSeriesDimension:(id)arg1;
- (id)init;
- (id)initWithChartInfo:(id)arg1 dataSetIndex:(unsigned long long)arg2;
- (id)initWithChartInfo:(id)arg1;
- (void)invalidateCaches;
- (void)invalidateModel;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)isMultiData;
- (bool)isTransient;
- (id)legendModelCache;
- (id)lineAreaModelCacheForSeries:(unsigned long long)arg1;
- (void)loadDefaultData;
- (void)loadDefaultDataWithGridRowIds:(id)arg1 gridColumnIds:(id)arg2;
- (void)loadFromPreUFFArchive:(const struct ChartModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct Reference {} *x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; struct ChartGridArchive {} *x6; unsigned int x7; unsigned int x8; int x9; unsigned int x10[1]; }*)arg1 unarchiver:(id)arg2 contextForUpgradeOnly:(id)arg3;
- (void)loadFromUnityArchive:(const struct ChartArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; int x4; int x5; struct RectArchive {} *x6; struct Reference {} *x7; struct ChartGridArchive {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; int x12; boolx13; boolx14; struct Reference {} *x15; struct Reference {} *x16; struct RepeatedPtrField<TSP::Reference> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; struct RepeatedPtrField<TSP::Reference> { void **x_18_1_1; int x_18_1_2; int x_18_1_3; int x_18_1_4; } x18; struct RepeatedPtrField<TSP::Reference> { void **x_19_1_1; int x_19_1_2; int x_19_1_3; int x_19_1_4; } x19; struct RepeatedPtrField<TSP::Reference> { void **x_20_1_1; int x_20_1_2; int x_20_1_3; int x_20_1_4; } x20; struct RepeatedPtrField<TSP::Reference> { void **x_21_1_1; int x_21_1_2; int x_21_1_3; int x_21_1_4; } x21; struct SparseReferenceArrayArchive {} *x22; struct SparseReferenceArrayArchive {} *x23; struct RepeatedPtrField<TSP::Reference> { void **x_24_1_1; int x_24_1_2; int x_24_1_3; int x_24_1_4; } x24; unsigned int x25; int x26; unsigned int x27[1]; }*)arg1 unarchiver:(id)arg2 contextForUpgradeOnly:(id)arg3;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (unsigned long long)multiDataSetCategoryIndexForCategory:(unsigned long long)arg1;
- (unsigned long long)multiDataSetIndex;
- (id)nameForCategory:(unsigned long long)arg1;
- (id)nameForMultiDataSetCategory:(unsigned long long)arg1;
- (id)nameForSeries:(unsigned long long)arg1;
- (id)noSyncAxisList;
- (id)noSyncSeriesList;
- (unsigned long long)numberOfChunkableMultiDataSets;
- (unsigned long long)numberOfGridValues;
- (unsigned long long)numberOfMultiDataSetCategories;
- (unsigned long long)numberOfMultiDataSets;
- (unsigned long long)numberOfSeries;
- (unsigned long long)numberOfSeriesForCalculatingBarWidth;
- (unsigned long long)numberOfValues;
- (id)p_axisForID:(id)arg1;
- (unsigned long long)p_lastMultiDataSetIndex;
- (void)p_loadDefaultDataWithGridRowIds:(id)arg1 gridColumnIds:(id)arg2;
- (unsigned long long)p_multiDataSetCategoryIndexForCategory:(unsigned long long)arg1;
- (void)p_postSynchronizeAxisList;
- (void)p_setBimapEntryForSeriesDimension:(id)arg1 andGridIndex:(unsigned long long)arg2;
- (void)p_synchronizeAxis:(id)arg1 class:(Class)arg2 axisID:(id)arg3 axisIndex:(unsigned long long)arg4 styleIndex:(unsigned long long)arg5 usedAxes:(id)arg6 unusedAxes:(id)arg7;
- (void)p_synchronizeAxisList;
- (void)p_synchronizeModel;
- (void)p_synchronizeSeriesList;
- (id)pieSeriesModelCacheForSeries:(unsigned long long)arg1;
- (void)resetSeriesStorage;
- (void)saveToUnityArchive:(struct ChartArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; int x4; int x5; struct RectArchive {} *x6; struct Reference {} *x7; struct ChartGridArchive {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; int x12; boolx13; boolx14; struct Reference {} *x15; struct Reference {} *x16; struct RepeatedPtrField<TSP::Reference> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; struct RepeatedPtrField<TSP::Reference> { void **x_18_1_1; int x_18_1_2; int x_18_1_3; int x_18_1_4; } x18; struct RepeatedPtrField<TSP::Reference> { void **x_19_1_1; int x_19_1_2; int x_19_1_3; int x_19_1_4; } x19; struct RepeatedPtrField<TSP::Reference> { void **x_20_1_1; int x_20_1_2; int x_20_1_3; int x_20_1_4; } x20; struct RepeatedPtrField<TSP::Reference> { void **x_21_1_1; int x_21_1_2; int x_21_1_3; int x_21_1_4; } x21; struct SparseReferenceArrayArchive {} *x22; struct SparseReferenceArrayArchive {} *x23; struct RepeatedPtrField<TSP::Reference> { void **x_24_1_1; int x_24_1_2; int x_24_1_3; int x_24_1_4; } x24; unsigned int x25; int x26; unsigned int x27[1]; }*)arg1 forPasteboard:(bool)arg2;
- (int)scatterFormat;
- (id)seriesAtIndex:(unsigned long long)arg1;
- (id)seriesDimensionForGridIndex:(unsigned long long)arg1;
- (id)seriesList;
- (void)setCacheObject:(id)arg1 forKey:(id)arg2;
- (void)setChartInfo:(id)arg1;
- (void)setGrid:(id)arg1;
- (void)setMultiDataSetIndex:(unsigned long long)arg1;
- (void)setNameForCategory:(unsigned long long)arg1 toName:(id)arg2;
- (void)setNameForMultiDataSetCategory:(unsigned long long)arg1 toName:(id)arg2;
- (void)setScatterFormat:(int)arg1;
- (void)setTextEditingSelectionPath:(id)arg1 string:(id)arg2;
- (id)syncRoot;
- (void)updateTransientModelFromInfoModel;
- (void)validateIfNeeded;
- (id)valueAxisList;
- (void)willModify;

@end
