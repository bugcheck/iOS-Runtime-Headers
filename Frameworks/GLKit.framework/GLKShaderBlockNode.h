/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@class GLKShaderBlockNode, NSMutableString, NSString;

@interface GLKShaderBlockNode : NSObject <NSXMLParserDelegate, NSCopying> {
    struct GLKBigInt_s { 
        unsigned long long n0; 
        unsigned long long n1; 
    NSMutableString *_blockText;
    GLKShaderBlockNode *_children;
    unsigned int _index;
    NSString *_label;
    NSString *_loopVar;
    } _mask;
    GLKShaderBlockNode *_next;
    GLKShaderBlockNode *_parent;
    int _propertyClass;
    int _type;
    int _unrollCt;
    bool_indexedMask;
}

@property(retain) NSMutableString * blockText;
@property GLKShaderBlockNode * children;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property unsigned int index;
@property bool indexedMask;
@property(copy) NSString * label;
@property(copy) NSString * loopVar;
@property struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } mask;
@property GLKShaderBlockNode * next;
@property GLKShaderBlockNode * parent;
@property int propertyClass;
@property(readonly) Class superclass;
@property int type;
@property int unrollCt;

+ (void)buildUnrollNodeArray:(id)arg1 array:(id)arg2;
+ (id)copyTreeWithRoot:(id)arg1 parent:(id)arg2;
+ (id)copyTreeWithRootButNotSiblings:(id)arg1 parent:(id)arg2;
+ (void)insertNode:(id)arg1 afterSibling:(id)arg2;
+ (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })maskForLabel:(id)arg1 root:(id)arg2 index:(int)arg3;
+ (unsigned int)nodeCt:(id)arg1 nodeCt:(unsigned int*)arg2;
+ (void)printTree:(id)arg1;
+ (void)printTreeVerbose:(id)arg1;
+ (void)setIndicesForRoot:(id)arg1 andReplaceLoopVar:(id)arg2 baseLabel:(id)arg3 basePropertyClass:(int)arg4 usingIndex:(unsigned int)arg5 indexString:(id)arg6;
+ (void)setMasksWithRoot:(id)arg1 treeRoot:(id)arg2 mask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)arg3;

- (id)blockText;
- (id)children;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)index;
- (bool)indexedMask;
- (id)init;
- (id)label;
- (id)loopVar;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })mask;
- (id)next;
- (id)parent;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (int)propertyClass;
- (void)setBlockText:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setIndexedMask:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLoopVar:(id)arg1;
- (void)setMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setNext:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPropertyClass:(int)arg1;
- (void)setType:(int)arg1;
- (void)setUnrollCt:(int)arg1;
- (int)type;
- (int)unrollCt;

@end
