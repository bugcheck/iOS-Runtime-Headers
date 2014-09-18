/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSKCommandContainer, TSKCommandController, TSPObject<TSKPersistentUndoRedoState>;

@interface TSKCommand : TSPObject {
    TSKCommandController *_commandController;
    TSKCommandContainer *_currentUndoCollectionContainer;
    TSKCommandContainer *_persistedUndoCollectionContainer;
    TSPObject<TSKPersistentUndoRedoState> *_undoRedoState;
}

@property TSKCommandController * commandController;
@property(retain) TSPObject<TSKPersistentUndoRedoState> * undoRedoState;

+ (id)commandFromArrayOfCommands:(id)arg1;

- (id)actionString;
- (void)beginCollectingUndo;
- (bool)canCoalesceWithCommand:(id)arg1;
- (bool)canImplicitlyGroupWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (id)commandController;
- (void)commit;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (bool)isCommandObject;
- (void)loadFromArchive:(const struct CommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (void)performIndirectCommand:(id)arg1;
- (bool)process;
- (void)redo;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (void)saveToArchive:(struct CommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)setCommandController:(id)arg1;
- (void)setUndoRedoState:(id)arg1;
- (bool)shouldRunSynchronously;
- (id)stopCollectingUndo;
- (void)undo;
- (id)undoRedoState;

@end
