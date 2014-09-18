/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsCharacter : SCNPhysicsBehavior {
    struct { 
        SCNPhysicsBody *characterBody; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } direction; 
        double velocity; 
        double jumpSpeed; 
    struct btCapsuleShape { int (**x1)(); int x2; void *x3; struct btVector3 { float x_4_1_1[4]; } x4; struct btVector3 { float x_5_1_1[4]; } x5; float x6; float x7; int x8; } *_capsuleShape;
    struct btCharacterControllerInterface { int (**x1)(); } *_characterController;
    } _definition;
    struct btOverlapFilterCallback { int (**x1)(); } *_filterCallback;
    struct btPairCachingGhostObject { int (**x1)(); struct btTransform { struct btMatrix3x3 { struct btVector3 { float x_1_3_1[4]; } x_1_2_1[3]; } x_2_1_1; struct btVector3 { float x_2_2_1[4]; } x_2_1_2; } x2; struct btTransform { struct btMatrix3x3 { struct btVector3 { float x_1_3_1[4]; } x_1_2_1[3]; } x_3_1_1; struct btVector3 { float x_2_2_1[4]; } x_3_1_2; } x3; struct btVector3 { float x_4_1_1[4]; } x4; struct btVector3 { float x_5_1_1[4]; } x5; struct btVector3 { float x_6_1_1[4]; } x6; int x7; float x8; struct btBroadphaseProxy {} *x9; struct btCollisionShape {} *x10; void *x11; struct btCollisionShape {} *x12; int x13; int x14; int x15; int x16; float x17; float x18; float x19; float x20; int x21; void *x22; float x23; float x24; float x25; int x26; struct btAlignedObjectArray<btCollisionObject *> { struct btAlignedAllocator<btCollisionObject *, 16> { } x_27_1_1; int x_27_1_2; int x_27_1_3; struct btCollisionObject {} **x_27_1_4; boolx_27_1_5; } x27; struct btHashedOverlappingPairCache {} *x28; } *_ghostObject;
    SCNPhysicsWorld *_world;
}

@property double jumpSpeed;
@property double velocity;

- (id).cxx_construct;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)_handleCreateIfNeeded:(bool)arg1;
- (void)_update;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (bool)canJump;
- (void)dealloc;
- (id)initWithCharacter:(id)arg1;
- (void)jump;
- (double)jumpSpeed;
- (void)setJumpSpeed:(double)arg1;
- (void)setVelocity:(double)arg1;
- (void)setWalkingDirection:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (double)velocity;

@end
