/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSDCommentStorageDelegate>, NSDate, NSString, TSKAnnotationAuthor;

@interface TSDCommentStorage : TSPObject <TSPCopying> {
    TSKAnnotationAuthor *mAuthor;
    NSDate *mCreationDate;
    <TSDCommentStorageDelegate> *mDelegate;
    NSString *mText;
}

@property(retain) TSKAnnotationAuthor * author;
@property(copy) NSDate * creationDate;
@property <TSDCommentStorageDelegate> * delegate;
@property(copy) NSString * text;

- (void)appendText:(id)arg1;
- (id)author;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)creationDateString;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned long long)hash;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 author:(id)arg2;
- (id)initWithContext:(id)arg1 text:(id)arg2 creationDate:(id)arg3 author:(id)arg4;
- (id)initWithContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)loadFromArchive:(const struct CommentStorageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct Date {} *x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (void)p_notifyDelegate;
- (void)saveToArchiver:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
