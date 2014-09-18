/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSString, NoteObject;

@interface NoteAttachmentObject : NSManagedObject {
}

@property(retain) NSString * contentID;
@property(retain) NSString * filename;
@property(retain) NSString * mimeType;
@property(retain) NoteObject * note;

+ (bool)applyFileAttributesForAttachment:(id)arg1 error:(id*)arg2;
+ (bool)migrateAttachmentRelatedFilesInContext:(id)arg1 error:(id*)arg2;
+ (bool)migrateFileForAttachment:(id)arg1 toCurrentAttachmentPathWithError:(id*)arg2;

- (id)attachmentDataFileURLWithError:(id*)arg1;
- (id)attachmentDataWithError:(id*)arg1;
- (bool)persistAttachmentData:(id)arg1 error:(id*)arg2;
- (void)prepareForDeletion;

@end
